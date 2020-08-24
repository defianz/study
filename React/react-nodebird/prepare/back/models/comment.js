const { sequelize } = require(".");

module.exports = (sequelize, DataTypes) => {
  const Comment = sequelize.define(
    "Post",
    {
      // id가 기본적으로 들어있다.
      contents: {
        type: DataTypes.TEXT,
        allowNULL: false,
      },
    },
    {
      charset: "utf8mb4",
      collate: "utf8mb4_general_ci", //한글, 이모티콘 저장
    }
  );
  Comment.associate = (db) => {};
  return Comment;
};
