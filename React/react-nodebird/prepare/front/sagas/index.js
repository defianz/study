import { all, fork } from 'redux-saga/effects';

import postSaga from './post';
import userSaga from './user';




export default function* rootSaga() {
    yield all([// all은 동시에 실행
        fork(postSaga), //call
        fork(userSaga),
    ])
}