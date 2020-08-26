const express = require("express");
const { User, Post, Image, Comment } = require("../models");
const { isLoggedIn } = require("./middlewares");
const router = express.Router();

router.post("/", isLoggedIn, async (req, res, next) => {
  // POST /post
  try {
    console.log(req.body.content);
    const post = await Post.create({
      content: req.body.content,
      UserId: req.user.id,
    });
    const fullPost = await Post.findOne({
      where: { id: post.id },
      include: [
        {
          model: Image,
        },
        {
          model: Comment,
          include: [
            {
              model: User, //댓글작성자
              attributes: ["id", "nickname"],
            },
          ],
        },
        {
          model: User, //게시글 작성자
          attribute: ["id", "nickname"],
        },
        {
          model: User, //좋아요 누른사람
          as: "Likers",
          attribute: ["id"],
        },
      ],
    });
    res.status(201).json(fullPost);
  } catch (error) {
    console.error(error);
    next(error);
  }
  res.json({ id: 1, content: "hello" });
});

router.post("/:postId/comment", isLoggedIn, async (req, res, next) => {
  //POST /post/1/comment

  try {
    const post = await Post.findOne({
      where: { id: req.params.postId },
    });

    if (!post) {
      return res.status(403).send("존재하지 않는 게시글입니다.");
    }

    const comment = await Comment.create({
      content: req.body.content,
      PostId: parseInt(req.params.postId),
      UserId: req.user.id,
    });
    const fullComment = await Comment.findOne({
      where: { id: comment.id },
      include: [
        {
          model: User,
          attribute: ["id", "nickname"],
        },
      ],
    });
    res.status(201).json(fullComment);
  } catch (error) {
    console.error(error);
    next(error);
  }
  res.json({ id: 1, content: "hello" });
});

router.patch("/:postId/like", async (req, res, next) => {
  //PATCH /post/1/like
  try {
    const post = await Post.findOne({ where: { id: req.params.postId } });
    if (!post) {
      return res.status(403).send("게시글이 존재하지 않습니다.");
    }
    await post.addLikers(req.user.id);
    res.json({ postId: post.id, UserId: req.user.id });
  } catch (error) {
    console.error(error);
    next(error);
  }
});

router.delete("/:postId/like", async (req, res, next) => {
  //DELETE /post/1/like
  try {
    const post = await Post.findOne({ where: { id: req.params.postId } });
    if (!post) {
      return res.status(403).send("게시글이 존재하지 않습니다.");
    }
    await post.removeLikers(req.user.id);
    res.json({ postId: post.id, UserId: req.user.id });
  } catch (error) {
    console.error(error);
    next(error);
  }
});

module.exports = router;
