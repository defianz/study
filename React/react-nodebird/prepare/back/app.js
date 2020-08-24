const express = require("express");
const postRouter = require("./routes/post");

const app = express();

// get -> 가져오다
// post -> 생성하다
// put -> 전체수정
// delete -> 제거
// patch -> 부분 수정
// options -> 찔러보기
// head -> 헤더만 가져오기

app.get("/", (req, res) => {
  res.send("hello express");
});

app.get("/posts", (req, res) => {
  res.json([
    {
      id: 1,
      content: "hello",
    },
    {
      id: 2,
      content: "hello2",
    },
    {
      id: 3,
      content: "hello3",
    },
  ]);
});

app.use("/post", postRouter);

app.listen(3065, () => {
  console.log("서버실행중");
});
