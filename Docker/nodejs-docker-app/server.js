const express = require("express");

// constrant
const PORT = 8080;

// APP

const app = express();

app.get("/", (req, res) => {
  res.status(200).send("안바뀌는거같은데");
});

app.listen(PORT);
console.log("server is running");
