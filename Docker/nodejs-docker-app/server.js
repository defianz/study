const express = require("express");

// constrant
const PORT = 8080;

// APP

const app = express();

app.get("/", (req, res) => {
  res.status(200).send("Hello World");
});

app.listen(PORT);
