const express = require("express");
const bcrypt = require("bcrypt");
const passport = require("passport");
const { User } = require("../models");

const router = express.Router();

router.post("/login", (req, res, next) => {
  passport.authenticate("local", (err, user, info) => {
    if (err) {
      console.error(err);
      return next(err);
    }
    if (info) {
      return res.status(401).send(info.reason);
    }
    return req.login(user, async (loginErr) => {
      if (loginErr) {
        console.error(loginErr);
        return next(loginErr);
      }
      //res.setHeader('Cookie','cxlhy')
      return res.status(200).json(user);
    });
  })(req, res, next);
});

router.post("/", async (req, res, next) => {
  //POST /user/
  try {
    const exUser = await User.findOne({
      where: {
        email: req.body.email,
      },
    });
    if (exUser) {
      return res.status(403).send("이미 사용중인 아이디입니다.");
    }
    const hashedPassword = await bcrypt.hash(req.body.password, 12);
    await User.create({
      email: req.body.email,
      nickname: req.body.nickname,
      password: hashedPassword,
    });
    // res.setHeader("Access-Control-Allow-Origin", "*");
    res.status(201).send("ok");
  } catch (error) {
    console.error(error);
    next(error); // status 500
  }
});

router.post("/user/logout", (req, res, next) => {
  req.logout();
  req.session.destroy();
  res.send("ok");
});

module.exports = router;
