import { all, fork } from "redux-saga/effects";
import axios from "axios";

import postSaga from "./post";
import userSaga from "./user";

axios.defaults.baseURL = "http://localhost:3065";

export default function* rootSaga() {
  yield all([
    // all은 동시에 실행
    fork(postSaga), //call
    fork(userSaga),
  ]);
}
