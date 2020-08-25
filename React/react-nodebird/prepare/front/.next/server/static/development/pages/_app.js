module.exports =
/******/ (function(modules) { // webpackBootstrap
/******/ 	// The module cache
/******/ 	var installedModules = require('../../../ssr-module-cache.js');
/******/
/******/ 	// The require function
/******/ 	function __webpack_require__(moduleId) {
/******/
/******/ 		// Check if module is in cache
/******/ 		if(installedModules[moduleId]) {
/******/ 			return installedModules[moduleId].exports;
/******/ 		}
/******/ 		// Create a new module (and put it into the cache)
/******/ 		var module = installedModules[moduleId] = {
/******/ 			i: moduleId,
/******/ 			l: false,
/******/ 			exports: {}
/******/ 		};
/******/
/******/ 		// Execute the module function
/******/ 		var threw = true;
/******/ 		try {
/******/ 			modules[moduleId].call(module.exports, module, module.exports, __webpack_require__);
/******/ 			threw = false;
/******/ 		} finally {
/******/ 			if(threw) delete installedModules[moduleId];
/******/ 		}
/******/
/******/ 		// Flag the module as loaded
/******/ 		module.l = true;
/******/
/******/ 		// Return the exports of the module
/******/ 		return module.exports;
/******/ 	}
/******/
/******/
/******/ 	// expose the modules object (__webpack_modules__)
/******/ 	__webpack_require__.m = modules;
/******/
/******/ 	// expose the module cache
/******/ 	__webpack_require__.c = installedModules;
/******/
/******/ 	// define getter function for harmony exports
/******/ 	__webpack_require__.d = function(exports, name, getter) {
/******/ 		if(!__webpack_require__.o(exports, name)) {
/******/ 			Object.defineProperty(exports, name, { enumerable: true, get: getter });
/******/ 		}
/******/ 	};
/******/
/******/ 	// define __esModule on exports
/******/ 	__webpack_require__.r = function(exports) {
/******/ 		if(typeof Symbol !== 'undefined' && Symbol.toStringTag) {
/******/ 			Object.defineProperty(exports, Symbol.toStringTag, { value: 'Module' });
/******/ 		}
/******/ 		Object.defineProperty(exports, '__esModule', { value: true });
/******/ 	};
/******/
/******/ 	// create a fake namespace object
/******/ 	// mode & 1: value is a module id, require it
/******/ 	// mode & 2: merge all properties of value into the ns
/******/ 	// mode & 4: return value when already ns object
/******/ 	// mode & 8|1: behave like require
/******/ 	__webpack_require__.t = function(value, mode) {
/******/ 		if(mode & 1) value = __webpack_require__(value);
/******/ 		if(mode & 8) return value;
/******/ 		if((mode & 4) && typeof value === 'object' && value && value.__esModule) return value;
/******/ 		var ns = Object.create(null);
/******/ 		__webpack_require__.r(ns);
/******/ 		Object.defineProperty(ns, 'default', { enumerable: true, value: value });
/******/ 		if(mode & 2 && typeof value != 'string') for(var key in value) __webpack_require__.d(ns, key, function(key) { return value[key]; }.bind(null, key));
/******/ 		return ns;
/******/ 	};
/******/
/******/ 	// getDefaultExport function for compatibility with non-harmony modules
/******/ 	__webpack_require__.n = function(module) {
/******/ 		var getter = module && module.__esModule ?
/******/ 			function getDefault() { return module['default']; } :
/******/ 			function getModuleExports() { return module; };
/******/ 		__webpack_require__.d(getter, 'a', getter);
/******/ 		return getter;
/******/ 	};
/******/
/******/ 	// Object.prototype.hasOwnProperty.call
/******/ 	__webpack_require__.o = function(object, property) { return Object.prototype.hasOwnProperty.call(object, property); };
/******/
/******/ 	// __webpack_public_path__
/******/ 	__webpack_require__.p = "";
/******/
/******/
/******/ 	// Load entry module and return exports
/******/ 	return __webpack_require__(__webpack_require__.s = 0);
/******/ })
/************************************************************************/
/******/ ({

/***/ "./node_modules/antd/dist/antd.css":
/*!*****************************************!*\
  !*** ./node_modules/antd/dist/antd.css ***!
  \*****************************************/
/*! no static exports found */
/***/ (function(module, exports) {



/***/ }),

/***/ "./pages/_app.js":
/*!***********************!*\
  !*** ./pages/_app.js ***!
  \***********************/
/*! exports provided: default */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony import */ var react__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! react */ "react");
/* harmony import */ var react__WEBPACK_IMPORTED_MODULE_0___default = /*#__PURE__*/__webpack_require__.n(react__WEBPACK_IMPORTED_MODULE_0__);
/* harmony import */ var prop_types__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! prop-types */ "prop-types");
/* harmony import */ var prop_types__WEBPACK_IMPORTED_MODULE_1___default = /*#__PURE__*/__webpack_require__.n(prop_types__WEBPACK_IMPORTED_MODULE_1__);
/* harmony import */ var antd_dist_antd_css__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! antd/dist/antd.css */ "./node_modules/antd/dist/antd.css");
/* harmony import */ var antd_dist_antd_css__WEBPACK_IMPORTED_MODULE_2___default = /*#__PURE__*/__webpack_require__.n(antd_dist_antd_css__WEBPACK_IMPORTED_MODULE_2__);
/* harmony import */ var next_head__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! next/head */ "next/head");
/* harmony import */ var next_head__WEBPACK_IMPORTED_MODULE_3___default = /*#__PURE__*/__webpack_require__.n(next_head__WEBPACK_IMPORTED_MODULE_3__);
/* harmony import */ var next_redux_saga__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! next-redux-saga */ "next-redux-saga");
/* harmony import */ var next_redux_saga__WEBPACK_IMPORTED_MODULE_4___default = /*#__PURE__*/__webpack_require__.n(next_redux_saga__WEBPACK_IMPORTED_MODULE_4__);
/* harmony import */ var _store_configureStore__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ../store/configureStore */ "./store/configureStore.js");
var _jsxFileName = "C:\\Git_defian\\study\\React\\react-nodebird\\prepare\\front\\pages\\_app.js";
var __jsx = react__WEBPACK_IMPORTED_MODULE_0___default.a.createElement;







const NodeBird = ({
  Component
}) => {
  return __jsx(react__WEBPACK_IMPORTED_MODULE_0___default.a.Fragment, null, __jsx(next_head__WEBPACK_IMPORTED_MODULE_3___default.a, {
    __self: undefined,
    __source: {
      fileName: _jsxFileName,
      lineNumber: 12,
      columnNumber: 13
    }
  }, __jsx("meta", {
    charSet: "utf-8",
    __self: undefined,
    __source: {
      fileName: _jsxFileName,
      lineNumber: 13,
      columnNumber: 17
    }
  }), __jsx("title", {
    __self: undefined,
    __source: {
      fileName: _jsxFileName,
      lineNumber: 14,
      columnNumber: 17
    }
  }, "node-bird")), __jsx(Component, {
    __self: undefined,
    __source: {
      fileName: _jsxFileName,
      lineNumber: 16,
      columnNumber: 13
    }
  }));
};

NodeBird.propTypes = {
  Component: prop_types__WEBPACK_IMPORTED_MODULE_1___default.a.elementType.isRequired
};
/* harmony default export */ __webpack_exports__["default"] = (_store_configureStore__WEBPACK_IMPORTED_MODULE_5__["default"].withRedux(next_redux_saga__WEBPACK_IMPORTED_MODULE_4___default()(NodeBird)));

/***/ }),

/***/ "./reducers/index.js":
/*!***************************!*\
  !*** ./reducers/index.js ***!
  \***************************/
/*! exports provided: default */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony import */ var next_redux_wrapper__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! next-redux-wrapper */ "next-redux-wrapper");
/* harmony import */ var next_redux_wrapper__WEBPACK_IMPORTED_MODULE_0___default = /*#__PURE__*/__webpack_require__.n(next_redux_wrapper__WEBPACK_IMPORTED_MODULE_0__);
/* harmony import */ var redux__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! redux */ "redux");
/* harmony import */ var redux__WEBPACK_IMPORTED_MODULE_1___default = /*#__PURE__*/__webpack_require__.n(redux__WEBPACK_IMPORTED_MODULE_1__);
/* harmony import */ var _user__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ./user */ "./reducers/user.js");
/* harmony import */ var _post__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ./post */ "./reducers/post.js");
function ownKeys(object, enumerableOnly) { var keys = Object.keys(object); if (Object.getOwnPropertySymbols) { var symbols = Object.getOwnPropertySymbols(object); if (enumerableOnly) symbols = symbols.filter(function (sym) { return Object.getOwnPropertyDescriptor(object, sym).enumerable; }); keys.push.apply(keys, symbols); } return keys; }

function _objectSpread(target) { for (var i = 1; i < arguments.length; i++) { var source = arguments[i] != null ? arguments[i] : {}; if (i % 2) { ownKeys(Object(source), true).forEach(function (key) { _defineProperty(target, key, source[key]); }); } else if (Object.getOwnPropertyDescriptors) { Object.defineProperties(target, Object.getOwnPropertyDescriptors(source)); } else { ownKeys(Object(source)).forEach(function (key) { Object.defineProperty(target, key, Object.getOwnPropertyDescriptor(source, key)); }); } } return target; }

function _defineProperty(obj, key, value) { if (key in obj) { Object.defineProperty(obj, key, { value: value, enumerable: true, configurable: true, writable: true }); } else { obj[key] = value; } return obj; }




 // action creator
// const changeNickname = (data) => {
//     return {
//         type : 'CHANGE_NICKNAME',
//         data,
//     }
// }
// changeNickname('neue zeal');
// (이전상태, 액션 ) => 다음상태

const rootReducer = Object(redux__WEBPACK_IMPORTED_MODULE_1__["combineReducers"])({
  index: (state = {}, action) => {
    switch (action.type) {
      case next_redux_wrapper__WEBPACK_IMPORTED_MODULE_0__["HYDRATE"]:
        console.log(next_redux_wrapper__WEBPACK_IMPORTED_MODULE_0__["HYDRATE"]);
        return _objectSpread(_objectSpread({}, state), action.payload);

      default:
        return state;
    }
  },
  user: _user__WEBPACK_IMPORTED_MODULE_2__["default"],
  post: _post__WEBPACK_IMPORTED_MODULE_3__["default"]
});
/* harmony default export */ __webpack_exports__["default"] = (rootReducer);

/***/ }),

/***/ "./reducers/post.js":
/*!**************************!*\
  !*** ./reducers/post.js ***!
  \**************************/
/*! exports provided: initialState, generateDummyPost, LOAD_POSTS_REQUEST, LOAD_POSTS_SUCCESS, LOAD_POSTS_FAILURE, ADD_POST_REQUEST, ADD_POST_SUCCESS, ADD_POST_FAILURE, REMOVE_POST_REQUEST, REMOVE_POST_SUCCESS, REMOVE_POST_FAILURE, ADD_COMMENT_REQUEST, ADD_COMMENT_SUCCESS, ADD_COMMENT_FAILURE, addPost, addComment, default */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "initialState", function() { return initialState; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "generateDummyPost", function() { return generateDummyPost; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LOAD_POSTS_REQUEST", function() { return LOAD_POSTS_REQUEST; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LOAD_POSTS_SUCCESS", function() { return LOAD_POSTS_SUCCESS; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LOAD_POSTS_FAILURE", function() { return LOAD_POSTS_FAILURE; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ADD_POST_REQUEST", function() { return ADD_POST_REQUEST; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ADD_POST_SUCCESS", function() { return ADD_POST_SUCCESS; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ADD_POST_FAILURE", function() { return ADD_POST_FAILURE; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "REMOVE_POST_REQUEST", function() { return REMOVE_POST_REQUEST; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "REMOVE_POST_SUCCESS", function() { return REMOVE_POST_SUCCESS; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "REMOVE_POST_FAILURE", function() { return REMOVE_POST_FAILURE; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ADD_COMMENT_REQUEST", function() { return ADD_COMMENT_REQUEST; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ADD_COMMENT_SUCCESS", function() { return ADD_COMMENT_SUCCESS; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ADD_COMMENT_FAILURE", function() { return ADD_COMMENT_FAILURE; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "addPost", function() { return addPost; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "addComment", function() { return addComment; });
/* harmony import */ var shortid__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! shortid */ "shortid");
/* harmony import */ var shortid__WEBPACK_IMPORTED_MODULE_0___default = /*#__PURE__*/__webpack_require__.n(shortid__WEBPACK_IMPORTED_MODULE_0__);
/* harmony import */ var _sagas_post__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../sagas/post */ "./sagas/post.js");
/* harmony import */ var immer__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! immer */ "immer");
/* harmony import */ var immer__WEBPACK_IMPORTED_MODULE_2___default = /*#__PURE__*/__webpack_require__.n(immer__WEBPACK_IMPORTED_MODULE_2__);
/* harmony import */ var faker__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! faker */ "faker");
/* harmony import */ var faker__WEBPACK_IMPORTED_MODULE_3___default = /*#__PURE__*/__webpack_require__.n(faker__WEBPACK_IMPORTED_MODULE_3__);




const initialState = {
  mainPosts: [],
  imagePaths: [],
  hasMorePosts: true,
  loadPostsLoading: false,
  loadPostsDone: false,
  loadPostsError: null,
  addPostLoading: false,
  addPostDone: false,
  addPostError: null,
  removePostLoading: false,
  removePostDone: false,
  removePostError: null,
  addCommentLoading: false,
  addCommentDone: false,
  addCommentError: null
};
const generateDummyPost = number => Array(20).fill().map(() => ({
  id: shortid__WEBPACK_IMPORTED_MODULE_0___default.a.generate(),
  User: {
    id: shortid__WEBPACK_IMPORTED_MODULE_0___default.a.generate(),
    nickname: faker__WEBPACK_IMPORTED_MODULE_3___default.a.name.findName()
  },
  content: faker__WEBPACK_IMPORTED_MODULE_3___default.a.lorem.paragraph(),
  Images: [{
    src: faker__WEBPACK_IMPORTED_MODULE_3___default.a.image.image()
  }],
  Comments: [{
    id: shortid__WEBPACK_IMPORTED_MODULE_0___default.a.generate(),
    contents: faker__WEBPACK_IMPORTED_MODULE_3___default.a.lorem.sentence(),
    User: {
      id: shortid__WEBPACK_IMPORTED_MODULE_0___default.a.generate(),
      nickname: faker__WEBPACK_IMPORTED_MODULE_3___default.a.name.findName()
    }
  }]
})); // initialState.mainPosts = initialState.mainPosts.concat(generateDummyPost(10));

const LOAD_POSTS_REQUEST = "LOAD_POSTS_REQUEST";
const LOAD_POSTS_SUCCESS = "LOAD_POSTS_SUCCESS";
const LOAD_POSTS_FAILURE = "LOAD_POSTS_FAILURE";
const ADD_POST_REQUEST = "ADD_POST_REQUEST";
const ADD_POST_SUCCESS = "ADD_POST_SUCCESS";
const ADD_POST_FAILURE = "ADD_POST_FAILURE";
const REMOVE_POST_REQUEST = "REMOVE_POST_REQUEST";
const REMOVE_POST_SUCCESS = "REMOVE_POST_SUCCESS";
const REMOVE_POST_FAILURE = "REMOVE_POST_FAILURE";
const ADD_COMMENT_REQUEST = "ADD_COMMENT_REQUEST";
const ADD_COMMENT_SUCCESS = "ADD_COMMENT_SUCCESS";
const ADD_COMMENT_FAILURE = "ADD_COMMENT_FAILURE";
const addPost = data => ({
  type: ADD_POST_REQUEST,
  data
});
const addComment = data => ({
  type: ADD_COMMENT_REQUEST,
  data
});

const dummyPost = data => ({
  id: data.id,
  content: data.content,
  User: {
    id: 1,
    nickname: "데피안"
  },
  Images: [],
  Comments: []
});

const dummyComment = data => ({
  id: shortid__WEBPACK_IMPORTED_MODULE_0___default.a.generate(),
  contents: data,
  User: {
    id: 1,
    nickname: "데피안"
  }
}); // 이전 상태를 액션을 통해 다음 상태로 만들어내는 함수(불변성은 지키면서)


const reducer = (state = initialState, action) => {
  return immer__WEBPACK_IMPORTED_MODULE_2___default()(state, draft => {
    switch (action.type) {
      case LOAD_POSTS_REQUEST:
        draft.loadPostsLoading = true;
        draft.loadPostsDone = false;
        draft.loadPostsError = null;
        break;

      case LOAD_POSTS_SUCCESS:
        draft.mainPosts = action.data.concat(draft.mainPosts);
        draft.loadPostsLoading = false;
        draft.loadPostsDone = true;
        draft.hasMorePosts = draft.mainPosts.length < 50;
        break;

      case LOAD_POSTS_FAILURE:
        draft.loadPostsLoading = false;
        draft.loadPostsError = action.error;
        break;

      case ADD_POST_REQUEST:
        draft.addPostLoading = true;
        draft.addPostDone = false;
        draft.addPostError = null;
        break;

      case ADD_POST_SUCCESS:
        draft.mainPosts.unshift(dummyPost(action.data));
        draft.addPostLoading = false;
        draft.addPostDone = true;
        break;

      case ADD_POST_FAILURE:
        draft.addPostLoading = false;
        draft.addPostError = action.error;
        break;

      case REMOVE_POST_REQUEST:
        draft.removePostLoading = true;
        draft.removePostDone = false;
        draft.removePostError = null;
        break;

      case REMOVE_POST_SUCCESS:
        draft.mainPosts = draft.mainPosts.filter(v => v.id !== action.data);
        draft.removePostLoading = false;
        draft.removePostDone = true;
        break;

      case REMOVE_POST_FAILURE:
        draft.removePostLoading = false;
        draft.removePostError = action.error;
        break;

      case ADD_COMMENT_REQUEST:
        draft.addCommentLoading = true;
        draft.addCommentDone = false;
        draft.addCommentError = null;
        break;

      case ADD_COMMENT_SUCCESS:
        {
          const post = draft.mainPosts.find(v => v.id === action.data.postId);
          post.Comments.unshift(dummyComment(action.data.contents));
          draft.addCommentLoading = false;
          draft.addCommentDone = true;
          break; //action.data.contents post userid
          // const postIndex = state.mainPosts.findIndex(
          //   (v) => v.id === action.data.postId
          // );
          // const post = { ...state.mainPosts[postIndex] };
          // post.Comments = [dummyComment(action.data.contents), ...post.Comments];
          // const mainPosts = [...state.mainPosts];
          // mainPosts[postIndex] = post;
          // return {
          //   ...state,
          //   mainPosts,
          //   addCommentLoading: false,
          //   addCommentDone: true,
          // };
        }

      case ADD_COMMENT_FAILURE:
        draft.addCommentLoading = false;
        draft.addCommentError = action.error;
        break;

      default:
        break;
    }
  }); //   switch (action.type) {
  //     case ADD_POST_REQUEST:
  //       return {
  //         ...state,
  //         addPostLoading: true,
  //         addPostDone: false,
  //         addPostError: null,
  //       };
  //     case ADD_POST_SUCCESS:
  //       return {
  //         ...state,
  //         mainPosts: [dummyPost(action.data), ...state.mainPosts],
  //         addPostLoading: false,
  //         addPostDone: true,
  //       };
  //     case ADD_POST_FAILURE:
  //       return {
  //         ...state,
  //         addPostLoading: false,
  //         addPostError: action.error,
  //       };
  //     case REMOVE_POST_REQUEST:
  //       return {
  //         ...state,
  //         removePostLoading: true,
  //         removePostDone: false,
  //         removePostError: null,
  //       };
  //     case REMOVE_POST_SUCCESS:
  //       return {
  //         ...state,
  //         mainPosts: state.mainPosts.filter((v) => v.id !== action.data),
  //         removePostLoading: false,
  //         removePostDone: true,
  //       };
  //     case REMOVE_POST_FAILURE:
  //       return {
  //         ...state,
  //         removePostLoading: false,
  //         removePostError: action.error,
  //       };
  //     case ADD_COMMENT_REQUEST:
  //       return {
  //         ...state,
  //         addCommentLoading: true,
  //         addCommentDone: false,
  //         addCommentError: null,
  //       };
  //     case ADD_COMMENT_SUCCESS: {
  //       //action.data.contents post userid
  //       const postIndex = state.mainPosts.findIndex(
  //         (v) => v.id === action.data.postId
  //       );
  //       const post = { ...state.mainPosts[postIndex] };
  //       post.Comments = [dummyComment(action.data.contents), ...post.Comments];
  //       const mainPosts = [...state.mainPosts];
  //       mainPosts[postIndex] = post;
  //       return {
  //         ...state,
  //         mainPosts,
  //         addCommentLoading: false,
  //         addCommentDone: true,
  //       };
  //     }
  //     case ADD_COMMENT_FAILURE:
  //       return {
  //         ...state,
  //         addCommentLoading: false,
  //         addCommentError: action.error,
  //       };
  //     default:
  //       return state;
  //   }
};

/* harmony default export */ __webpack_exports__["default"] = (reducer);

/***/ }),

/***/ "./reducers/user.js":
/*!**************************!*\
  !*** ./reducers/user.js ***!
  \**************************/
/*! exports provided: initialState, LOG_IN_REQUEST, LOG_IN_SUCCESS, LOG_IN_FAILURE, LOG_OUT_REQUEST, LOG_OUT_SUCCESS, LOG_OUT_FAILURE, SIGN_UP_REQUEST, SIGN_UP_SUCCESS, SIGN_UP_FAILURE, CHANGE_NICKNAME_REQUEST, CHANGE_NICKNAME_SUCCESS, CHANGE_NICKNAME_FAILURE, FOLLOW_REQUEST, FOLLOW_SUCCESS, FOLLOW_FAILURE, UNFOLLOW_REQUEST, UNFOLLOW_SUCCESS, UNFOLLOW_FAILURE, ADD_POST_TO_ME, REMOVE_POST_OF_ME, loginRequestAction, logoutRequestAction, default */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "initialState", function() { return initialState; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LOG_IN_REQUEST", function() { return LOG_IN_REQUEST; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LOG_IN_SUCCESS", function() { return LOG_IN_SUCCESS; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LOG_IN_FAILURE", function() { return LOG_IN_FAILURE; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LOG_OUT_REQUEST", function() { return LOG_OUT_REQUEST; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LOG_OUT_SUCCESS", function() { return LOG_OUT_SUCCESS; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LOG_OUT_FAILURE", function() { return LOG_OUT_FAILURE; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "SIGN_UP_REQUEST", function() { return SIGN_UP_REQUEST; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "SIGN_UP_SUCCESS", function() { return SIGN_UP_SUCCESS; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "SIGN_UP_FAILURE", function() { return SIGN_UP_FAILURE; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_NICKNAME_REQUEST", function() { return CHANGE_NICKNAME_REQUEST; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_NICKNAME_SUCCESS", function() { return CHANGE_NICKNAME_SUCCESS; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_NICKNAME_FAILURE", function() { return CHANGE_NICKNAME_FAILURE; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "FOLLOW_REQUEST", function() { return FOLLOW_REQUEST; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "FOLLOW_SUCCESS", function() { return FOLLOW_SUCCESS; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "FOLLOW_FAILURE", function() { return FOLLOW_FAILURE; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "UNFOLLOW_REQUEST", function() { return UNFOLLOW_REQUEST; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "UNFOLLOW_SUCCESS", function() { return UNFOLLOW_SUCCESS; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "UNFOLLOW_FAILURE", function() { return UNFOLLOW_FAILURE; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ADD_POST_TO_ME", function() { return ADD_POST_TO_ME; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "REMOVE_POST_OF_ME", function() { return REMOVE_POST_OF_ME; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "loginRequestAction", function() { return loginRequestAction; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "logoutRequestAction", function() { return logoutRequestAction; });
/* harmony import */ var immer__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! immer */ "immer");
/* harmony import */ var immer__WEBPACK_IMPORTED_MODULE_0___default = /*#__PURE__*/__webpack_require__.n(immer__WEBPACK_IMPORTED_MODULE_0__);
function ownKeys(object, enumerableOnly) { var keys = Object.keys(object); if (Object.getOwnPropertySymbols) { var symbols = Object.getOwnPropertySymbols(object); if (enumerableOnly) symbols = symbols.filter(function (sym) { return Object.getOwnPropertyDescriptor(object, sym).enumerable; }); keys.push.apply(keys, symbols); } return keys; }

function _objectSpread(target) { for (var i = 1; i < arguments.length; i++) { var source = arguments[i] != null ? arguments[i] : {}; if (i % 2) { ownKeys(Object(source), true).forEach(function (key) { _defineProperty(target, key, source[key]); }); } else if (Object.getOwnPropertyDescriptors) { Object.defineProperties(target, Object.getOwnPropertyDescriptors(source)); } else { ownKeys(Object(source)).forEach(function (key) { Object.defineProperty(target, key, Object.getOwnPropertyDescriptor(source, key)); }); } } return target; }

function _defineProperty(obj, key, value) { if (key in obj) { Object.defineProperty(obj, key, { value: value, enumerable: true, configurable: true, writable: true }); } else { obj[key] = value; } return obj; }


const initialState = {
  followLoading: false,
  //팔로우 시도중
  followDone: false,
  followError: null,
  unfollowLoading: false,
  //언팔로우 시도중
  unfollowDone: false,
  unfollowError: null,
  isLoggingIn: false,
  // 로그인 시도중
  isLoggedIn: false,
  isLogInError: null,
  isLoggingOut: false,
  // 로그아웃 시도중
  isLoggedOut: false,
  isLogOutError: null,
  isSigningUp: false,
  // 회원가입 시도중
  isSignedUp: false,
  isSignUpError: null,
  changeNicknameLoading: false,
  //닉네임 변경 시도중
  changeNicknameDone: false,
  changeNicknameError: null,
  me: null,
  signUpData: {},
  loginData: {}
};
const LOG_IN_REQUEST = "LOG_IN_REQUEST";
const LOG_IN_SUCCESS = "LOG_IN_SUCCESS";
const LOG_IN_FAILURE = "LOG_IN_FAILURE";
const LOG_OUT_REQUEST = "LOG_OUT_REQUEST";
const LOG_OUT_SUCCESS = "LOG_OUT_SUCCESS";
const LOG_OUT_FAILURE = "LOG_OUT_FAILURE";
const SIGN_UP_REQUEST = "SIGN_UP_REQUEST";
const SIGN_UP_SUCCESS = "SIGN_UP_SUCCESS";
const SIGN_UP_FAILURE = "SIGN_UP_FAILURE";
const CHANGE_NICKNAME_REQUEST = "CHANGE_NICKNAME_REQUEST";
const CHANGE_NICKNAME_SUCCESS = "CHANGE_NICKNAME_SUCCESS";
const CHANGE_NICKNAME_FAILURE = "CHANGE_NICKNAME_FAILURE";
const FOLLOW_REQUEST = "FOLLOW_REQUEST";
const FOLLOW_SUCCESS = "FOLLOW_SUCCESS";
const FOLLOW_FAILURE = "FOLLOW_FAILURE";
const UNFOLLOW_REQUEST = "UNFOLLOW_REQUEST";
const UNFOLLOW_SUCCESS = "UNFOLLOW_SUCCESS";
const UNFOLLOW_FAILURE = "UNFOLLOW_FAILURE";
const ADD_POST_TO_ME = "ADD_POST_TO_ME";
const REMOVE_POST_OF_ME = "REMOVE_POST_OF_ME";

const dummyUser = data => _objectSpread(_objectSpread({}, data), {}, {
  nickname: "데피안",
  id: 1,
  Posts: [{
    id: 1
  }],
  Followings: [{
    nickname: "defian"
  }, {
    nickname: "kim"
  }, {
    nickname: "hck"
  }],
  Followers: [{
    nickname: "defian"
  }, {
    nickname: "kim"
  }, {
    nickname: "hck"
  }]
});

const loginRequestAction = data => {
  return {
    type: LOG_IN_REQUEST,
    data
  };
};
const logoutRequestAction = () => {
  return {
    type: LOG_OUT_REQUEST
  };
};

const reducer = (state = initialState, action) => {
  return immer__WEBPACK_IMPORTED_MODULE_0___default()(state, draft => {
    switch (action.type) {
      case FOLLOW_REQUEST:
        draft.followLoading = true;
        draft.followError = null;
        draft.followDone = false;
        break;

      case FOLLOW_SUCCESS:
        draft.followLoading = false;
        draft.followDone = true;
        draft.me.Followings.push({
          id: action.data
        });
        break;

      case FOLLOW_FAILURE:
        draft.followLoading = false;
        draft.followError = action.error;
        break;

      case UNFOLLOW_REQUEST:
        draft.unfollowLoading = true;
        draft.unfollowError = null;
        draft.unfollowDone = false;
        break;

      case UNFOLLOW_SUCCESS:
        draft.unfollowLoading = false;
        draft.unfollowDone = true;
        draft.me.Followings = draft.me.Followings.filter(v => v.id !== action.data);
        break;

      case UNFOLLOW_FAILURE:
        draft.unfollowLoading = false;
        draft.unfollowError = action.error;
        break;

      case LOG_IN_REQUEST:
        draft.isLoggingIn = true;
        draft.isLogInError = null;
        draft.isLoggedIn = false;
        break;

      case LOG_IN_SUCCESS:
        draft.isLoggingIn = false;
        draft.isLoggedIn = true;
        draft.me = action.data;
        break;

      case LOG_IN_FAILURE:
        draft.isLoggingIn = false;
        draft.isLogInError = action.error;
        break;

      case LOG_OUT_REQUEST:
        draft.isLoggingOut = true;
        draft.isLoggedOut = false;
        draft.isLogOutError = null;
        break;

      case LOG_OUT_SUCCESS:
        draft.isLoggingOut = false;
        draft.isLoggedOut = true;
        break;

      case LOG_OUT_FAILURE:
        draft.isLoggingOut = false;
        draft.isLogOutError = action.error;
        break;

      case SIGN_UP_REQUEST:
        draft.isSigningUp = true;
        draft.isSignedUp = false;
        draft.isSignUpError = null;
        break;

      case SIGN_UP_SUCCESS:
        draft.isSigningUp = false;
        draft.isSignedUp = true;
        break;

      case SIGN_UP_FAILURE:
        draft.isSigningUp = false;
        draft.isSignUpError = action.error;
        break;

      case CHANGE_NICKNAME_REQUEST:
        draft.changeNicknameLoading = true;
        draft.changeNicknameDone = false;
        draft.changeNicknameError = null;
        break;

      case CHANGE_NICKNAME_SUCCESS:
        draft.changeNicknameLoading = false;
        draft.changeNicknameDone = true;
        break;

      case CHANGE_NICKNAME_FAILURE:
        draft.changeNicknameLoading = false;
        draft.changeNicknameError = action.error;
        break;

      case ADD_POST_TO_ME:
        draft.me.Posts.unshift({
          id: action.data
        });
        break;
      // return {
      //     ...state,
      //     me: {
      //         ...state.me,
      //         Posts: [{ id: action.data }, ...state.me.Posts],
      //     },
      // };

      case REMOVE_POST_OF_ME:
        draft.me.Posts = draft.me.Posts.filter(v => v.id !== action.data);
        break;
      // return {
      //     ...state,
      //     me: {
      //         ...state.me,
      //         Posts: state.me.Posts.filter((v) => v.id !== action.data),
      //     },
      // };

      default:
        break;
    }
  });
};

/* harmony default export */ __webpack_exports__["default"] = (reducer);

/***/ }),

/***/ "./sagas/index.js":
/*!************************!*\
  !*** ./sagas/index.js ***!
  \************************/
/*! exports provided: default */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "default", function() { return rootSaga; });
/* harmony import */ var redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! redux-saga/effects */ "redux-saga/effects");
/* harmony import */ var redux_saga_effects__WEBPACK_IMPORTED_MODULE_0___default = /*#__PURE__*/__webpack_require__.n(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__);
/* harmony import */ var axios__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! axios */ "axios");
/* harmony import */ var axios__WEBPACK_IMPORTED_MODULE_1___default = /*#__PURE__*/__webpack_require__.n(axios__WEBPACK_IMPORTED_MODULE_1__);
/* harmony import */ var _post__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ./post */ "./sagas/post.js");
/* harmony import */ var _user__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ./user */ "./sagas/user.js");




axios__WEBPACK_IMPORTED_MODULE_1___default.a.defaults.baseURL = "http://localhost:3065";
function* rootSaga() {
  yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["all"])([// all은 동시에 실행
  Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["fork"])(_post__WEBPACK_IMPORTED_MODULE_2__["default"]), //call
  Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["fork"])(_user__WEBPACK_IMPORTED_MODULE_3__["default"])]);
}

/***/ }),

/***/ "./sagas/post.js":
/*!***********************!*\
  !*** ./sagas/post.js ***!
  \***********************/
/*! exports provided: default */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "default", function() { return postSaga; });
/* harmony import */ var redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! redux-saga/effects */ "redux-saga/effects");
/* harmony import */ var redux_saga_effects__WEBPACK_IMPORTED_MODULE_0___default = /*#__PURE__*/__webpack_require__.n(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__);
/* harmony import */ var _reducers_post__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../reducers/post */ "./reducers/post.js");
/* harmony import */ var _reducers_user__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../reducers/user */ "./reducers/user.js");
/* harmony import */ var shortid__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! shortid */ "shortid");
/* harmony import */ var shortid__WEBPACK_IMPORTED_MODULE_3___default = /*#__PURE__*/__webpack_require__.n(shortid__WEBPACK_IMPORTED_MODULE_3__);
/* harmony import */ var axios__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! axios */ "axios");
/* harmony import */ var axios__WEBPACK_IMPORTED_MODULE_4___default = /*#__PURE__*/__webpack_require__.n(axios__WEBPACK_IMPORTED_MODULE_4__);






function loadPostsAPI(data) {
  return axios__WEBPACK_IMPORTED_MODULE_4___default.a.post("/api/loadPosts", data);
}

function* loadPosts(action) {
  try {
    // const result = yield call(addPostAPI, action.data);
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["delay"])(1000);
    const id = shortid__WEBPACK_IMPORTED_MODULE_3___default.a.generate();
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_post__WEBPACK_IMPORTED_MODULE_1__["LOAD_POSTS_SUCCESS"],
      data: Object(_reducers_post__WEBPACK_IMPORTED_MODULE_1__["generateDummyPost"])(10)
    });
  } catch (err) {
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_post__WEBPACK_IMPORTED_MODULE_1__["LOAD_POSTS_FAILURE"],
      data: err.response.data
    });
  }
}

function addPostAPI(data) {
  return axios__WEBPACK_IMPORTED_MODULE_4___default.a.post("/api/addPost", data);
}

function* addPost(action) {
  try {
    // const result = yield call(addPostAPI, action.data);
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["delay"])(1000);
    const id = shortid__WEBPACK_IMPORTED_MODULE_3___default.a.generate();
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_post__WEBPACK_IMPORTED_MODULE_1__["ADD_POST_SUCCESS"],
      data: {
        id,
        content: action.data
      }
    });
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_user__WEBPACK_IMPORTED_MODULE_2__["ADD_POST_TO_ME"],
      data: id
    });
  } catch (err) {
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_post__WEBPACK_IMPORTED_MODULE_1__["ADD_POST_FAILURE"],
      data: err.response.data
    });
  }
}

function removePostAPI(data) {
  return axios__WEBPACK_IMPORTED_MODULE_4___default.a.delete("/api/post", data);
}

function* removePost(action) {
  try {
    // const result = yield call(addPostAPI, action.data);
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["delay"])(1000);
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_post__WEBPACK_IMPORTED_MODULE_1__["REMOVE_POST_SUCCESS"],
      data: action.data
    });
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_user__WEBPACK_IMPORTED_MODULE_2__["REMOVE_POST_OF_ME"],
      data: action.data
    });
  } catch (err) {
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_post__WEBPACK_IMPORTED_MODULE_1__["REMOVE_POST_FAILURE"],
      data: err.response.data
    });
  }
}

function addCommentAPI(data) {
  return axios__WEBPACK_IMPORTED_MODULE_4___default.a.post(`/api/post/${data.postId}/comment`, data);
}

function* addComment(action) {
  try {
    // const result = yield call(addPostAPI, action.data);
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["delay"])(1000);
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_post__WEBPACK_IMPORTED_MODULE_1__["ADD_COMMENT_SUCCESS"],
      data: action.data
    });
  } catch (err) {
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_post__WEBPACK_IMPORTED_MODULE_1__["ADD_COMMENT_FAILURE"],
      data: err.response.data
    });
  }
}

function* watchLoadPosts() {
  yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["throttle"])(5000, _reducers_post__WEBPACK_IMPORTED_MODULE_1__["LOAD_POSTS_REQUEST"], loadPosts);
}

function* watchAddPost() {
  yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["takeLatest"])(_reducers_post__WEBPACK_IMPORTED_MODULE_1__["ADD_POST_REQUEST"], addPost);
}

function* watchRemovePost() {
  yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["takeLatest"])(_reducers_post__WEBPACK_IMPORTED_MODULE_1__["REMOVE_POST_REQUEST"], removePost);
}

function* watchAddComment() {
  yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["takeLatest"])(_reducers_post__WEBPACK_IMPORTED_MODULE_1__["ADD_COMMENT_REQUEST"], addComment);
}

function* postSaga() {
  yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["all"])([Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["fork"])(watchLoadPosts), Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["fork"])(watchAddPost), Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["fork"])(watchRemovePost), Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["fork"])(watchAddComment)]);
}

/***/ }),

/***/ "./sagas/user.js":
/*!***********************!*\
  !*** ./sagas/user.js ***!
  \***********************/
/*! exports provided: default */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "default", function() { return userSaga; });
/* harmony import */ var redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! redux-saga/effects */ "redux-saga/effects");
/* harmony import */ var redux_saga_effects__WEBPACK_IMPORTED_MODULE_0___default = /*#__PURE__*/__webpack_require__.n(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__);
/* harmony import */ var axios__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! axios */ "axios");
/* harmony import */ var axios__WEBPACK_IMPORTED_MODULE_1___default = /*#__PURE__*/__webpack_require__.n(axios__WEBPACK_IMPORTED_MODULE_1__);
/* harmony import */ var _reducers_user__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../reducers/user */ "./reducers/user.js");



const l = logIn({
  type: _reducers_user__WEBPACK_IMPORTED_MODULE_2__["LOG_IN_REQUEST"],
  data: {
    id: "defian@gmail.com"
  }
});
l.next();

function logInAPI(data) {
  return axios__WEBPACK_IMPORTED_MODULE_1___default.a.post("/user/login", data);
}

function* logIn(action) {
  try {
    //fork 비동기 호출 yield는 await 역할인데, fork에서는 그렇지 않음 call에서만
    //call 동기 호출
    const result = yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["call"])(logInAPI, action.data);
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_user__WEBPACK_IMPORTED_MODULE_2__["LOG_IN_SUCCESS"],
      data: result.data
    });
  } catch (err) {
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_user__WEBPACK_IMPORTED_MODULE_2__["LOG_IN_FAILURE"],
      error: err.response.data
    });
  }
}

function logOutAPI() {
  return axios__WEBPACK_IMPORTED_MODULE_1___default.a.post("/user/logout");
}

function* logOut() {
  try {
    // const result = yield call(logOutAPI);
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["delay"])(1000);
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_user__WEBPACK_IMPORTED_MODULE_2__["LOG_OUT_SUCCESS"]
    });
  } catch (err) {
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_user__WEBPACK_IMPORTED_MODULE_2__["LOG_OUT_FAILURE"],
      data: err.response.data
    });
  }
}

function SignUpAPI(data) {
  return axios__WEBPACK_IMPORTED_MODULE_1___default.a.post("/user", data);
}

function* SignUp(action) {
  try {
    const result = yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["call"])(SignUpAPI, action.data);
    console.log(result);
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["delay"])(1000);
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_user__WEBPACK_IMPORTED_MODULE_2__["SIGN_UP_SUCCESS"]
    });
  } catch (err) {
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_user__WEBPACK_IMPORTED_MODULE_2__["SIGN_UP_FAILURE"],
      error: err.response.data
    });
  }
}

function followAPI() {
  return axios__WEBPACK_IMPORTED_MODULE_1___default.a.post("/api/Follow");
}

function* follow(action) {
  try {
    // const result = yield call(SignUpAPI);
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["delay"])(1000);
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_user__WEBPACK_IMPORTED_MODULE_2__["FOLLOW_SUCCESS"],
      data: action.data
    });
  } catch (err) {
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_user__WEBPACK_IMPORTED_MODULE_2__["FOLLOW_FAILURE"],
      data: err.response.data
    });
  }
}

function unfollowAPI() {
  return axios__WEBPACK_IMPORTED_MODULE_1___default.a.post("/api/unfollow");
}

function* unfollow(action) {
  try {
    // const result = yield call(SignUpAPI);
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["delay"])(1000);
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_user__WEBPACK_IMPORTED_MODULE_2__["UNFOLLOW_SUCCESS"],
      data: action.data
    });
  } catch (err) {
    yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["put"])({
      type: _reducers_user__WEBPACK_IMPORTED_MODULE_2__["UNFOLLOW_FAILURE"],
      data: err.response.data
    });
  }
}

function* watchFollow() {
  yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["takeLatest"])(_reducers_user__WEBPACK_IMPORTED_MODULE_2__["FOLLOW_REQUEST"], follow);
}

function* watchUnfollow() {
  yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["takeLatest"])(_reducers_user__WEBPACK_IMPORTED_MODULE_2__["UNFOLLOW_REQUEST"], unfollow);
}

function* watchLogIn() {
  yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["takeLatest"])(_reducers_user__WEBPACK_IMPORTED_MODULE_2__["LOG_IN_REQUEST"], logIn);
}

function* watchLogOut() {
  yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["takeLatest"])(_reducers_user__WEBPACK_IMPORTED_MODULE_2__["LOG_OUT_REQUEST"], logOut);
}

function* watchSignUp() {
  yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["takeLatest"])(_reducers_user__WEBPACK_IMPORTED_MODULE_2__["SIGN_UP_REQUEST"], SignUp);
}

function* userSaga() {
  yield Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["all"])([Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["fork"])(watchFollow), Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["fork"])(watchUnfollow), Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["fork"])(watchLogIn), Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["fork"])(watchLogOut), Object(redux_saga_effects__WEBPACK_IMPORTED_MODULE_0__["fork"])(watchSignUp)]);
}

/***/ }),

/***/ "./store/configureStore.js":
/*!*********************************!*\
  !*** ./store/configureStore.js ***!
  \*********************************/
/*! exports provided: default */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony import */ var redux__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! redux */ "redux");
/* harmony import */ var redux__WEBPACK_IMPORTED_MODULE_0___default = /*#__PURE__*/__webpack_require__.n(redux__WEBPACK_IMPORTED_MODULE_0__);
/* harmony import */ var redux_devtools_extension__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! redux-devtools-extension */ "redux-devtools-extension");
/* harmony import */ var redux_devtools_extension__WEBPACK_IMPORTED_MODULE_1___default = /*#__PURE__*/__webpack_require__.n(redux_devtools_extension__WEBPACK_IMPORTED_MODULE_1__);
/* harmony import */ var redux_saga__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! redux-saga */ "redux-saga");
/* harmony import */ var redux_saga__WEBPACK_IMPORTED_MODULE_2___default = /*#__PURE__*/__webpack_require__.n(redux_saga__WEBPACK_IMPORTED_MODULE_2__);
/* harmony import */ var _sagas__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../sagas */ "./sagas/index.js");
/* harmony import */ var _reducers__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ../reducers */ "./reducers/index.js");
const {
  createWrapper
} = __webpack_require__(/*! next-redux-wrapper */ "next-redux-wrapper");







const loggerMiddleware = ({
  dispatch,
  getState
}) => next => action => {
  console.log(action);
  return next(action);
};

const configureStore = () => {
  const sagaMiddleware = redux_saga__WEBPACK_IMPORTED_MODULE_2___default()();
  const middlewares = [sagaMiddleware, loggerMiddleware];
  const enhancer = false ? undefined : Object(redux_devtools_extension__WEBPACK_IMPORTED_MODULE_1__["composeWithDevTools"])(Object(redux__WEBPACK_IMPORTED_MODULE_0__["applyMiddleware"])(...middlewares));
  const store = Object(redux__WEBPACK_IMPORTED_MODULE_0__["createStore"])(_reducers__WEBPACK_IMPORTED_MODULE_4__["default"], enhancer);
  store.sagaTask = sagaMiddleware.run(_sagas__WEBPACK_IMPORTED_MODULE_3__["default"]);
  return store;
};

const wrapper = createWrapper(configureStore, {
  debug: true
});
/* harmony default export */ __webpack_exports__["default"] = (wrapper);

/***/ }),

/***/ 0:
/*!****************************************!*\
  !*** multi private-next-pages/_app.js ***!
  \****************************************/
/*! no static exports found */
/***/ (function(module, exports, __webpack_require__) {

module.exports = __webpack_require__(/*! private-next-pages/_app.js */"./pages/_app.js");


/***/ }),

/***/ "axios":
/*!************************!*\
  !*** external "axios" ***!
  \************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = require("axios");

/***/ }),

/***/ "faker":
/*!************************!*\
  !*** external "faker" ***!
  \************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = require("faker");

/***/ }),

/***/ "immer":
/*!************************!*\
  !*** external "immer" ***!
  \************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = require("immer");

/***/ }),

/***/ "next-redux-saga":
/*!**********************************!*\
  !*** external "next-redux-saga" ***!
  \**********************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = require("next-redux-saga");

/***/ }),

/***/ "next-redux-wrapper":
/*!*************************************!*\
  !*** external "next-redux-wrapper" ***!
  \*************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = require("next-redux-wrapper");

/***/ }),

/***/ "next/head":
/*!****************************!*\
  !*** external "next/head" ***!
  \****************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = require("next/head");

/***/ }),

/***/ "prop-types":
/*!*****************************!*\
  !*** external "prop-types" ***!
  \*****************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = require("prop-types");

/***/ }),

/***/ "react":
/*!************************!*\
  !*** external "react" ***!
  \************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = require("react");

/***/ }),

/***/ "redux":
/*!************************!*\
  !*** external "redux" ***!
  \************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = require("redux");

/***/ }),

/***/ "redux-devtools-extension":
/*!*******************************************!*\
  !*** external "redux-devtools-extension" ***!
  \*******************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = require("redux-devtools-extension");

/***/ }),

/***/ "redux-saga":
/*!*****************************!*\
  !*** external "redux-saga" ***!
  \*****************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = require("redux-saga");

/***/ }),

/***/ "redux-saga/effects":
/*!*************************************!*\
  !*** external "redux-saga/effects" ***!
  \*************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = require("redux-saga/effects");

/***/ }),

/***/ "shortid":
/*!**************************!*\
  !*** external "shortid" ***!
  \**************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = require("shortid");

/***/ })

/******/ });
//# sourceMappingURL=data:application/json;charset=utf-8;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbIndlYnBhY2s6Ly8vd2VicGFjay9ib290c3RyYXAiLCJ3ZWJwYWNrOi8vLy4vcGFnZXMvX2FwcC5qcyIsIndlYnBhY2s6Ly8vLi9yZWR1Y2Vycy9pbmRleC5qcyIsIndlYnBhY2s6Ly8vLi9yZWR1Y2Vycy9wb3N0LmpzIiwid2VicGFjazovLy8uL3JlZHVjZXJzL3VzZXIuanMiLCJ3ZWJwYWNrOi8vLy4vc2FnYXMvaW5kZXguanMiLCJ3ZWJwYWNrOi8vLy4vc2FnYXMvcG9zdC5qcyIsIndlYnBhY2s6Ly8vLi9zYWdhcy91c2VyLmpzIiwid2VicGFjazovLy8uL3N0b3JlL2NvbmZpZ3VyZVN0b3JlLmpzIiwid2VicGFjazovLy9leHRlcm5hbCBcImF4aW9zXCIiLCJ3ZWJwYWNrOi8vL2V4dGVybmFsIFwiZmFrZXJcIiIsIndlYnBhY2s6Ly8vZXh0ZXJuYWwgXCJpbW1lclwiIiwid2VicGFjazovLy9leHRlcm5hbCBcIm5leHQtcmVkdXgtc2FnYVwiIiwid2VicGFjazovLy9leHRlcm5hbCBcIm5leHQtcmVkdXgtd3JhcHBlclwiIiwid2VicGFjazovLy9leHRlcm5hbCBcIm5leHQvaGVhZFwiIiwid2VicGFjazovLy9leHRlcm5hbCBcInByb3AtdHlwZXNcIiIsIndlYnBhY2s6Ly8vZXh0ZXJuYWwgXCJyZWFjdFwiIiwid2VicGFjazovLy9leHRlcm5hbCBcInJlZHV4XCIiLCJ3ZWJwYWNrOi8vL2V4dGVybmFsIFwicmVkdXgtZGV2dG9vbHMtZXh0ZW5zaW9uXCIiLCJ3ZWJwYWNrOi8vL2V4dGVybmFsIFwicmVkdXgtc2FnYVwiIiwid2VicGFjazovLy9leHRlcm5hbCBcInJlZHV4LXNhZ2EvZWZmZWN0c1wiIiwid2VicGFjazovLy9leHRlcm5hbCBcInNob3J0aWRcIiJdLCJuYW1lcyI6WyJOb2RlQmlyZCIsIkNvbXBvbmVudCIsInByb3BUeXBlcyIsIlByb3BUeXBlcyIsImVsZW1lbnRUeXBlIiwiaXNSZXF1aXJlZCIsIndyYXBwZXIiLCJ3aXRoUmVkdXgiLCJ3aXRoUmVkdXhTYWdhIiwicm9vdFJlZHVjZXIiLCJjb21iaW5lUmVkdWNlcnMiLCJpbmRleCIsInN0YXRlIiwiYWN0aW9uIiwidHlwZSIsIkhZRFJBVEUiLCJjb25zb2xlIiwibG9nIiwicGF5bG9hZCIsInVzZXIiLCJwb3N0IiwiaW5pdGlhbFN0YXRlIiwibWFpblBvc3RzIiwiaW1hZ2VQYXRocyIsImhhc01vcmVQb3N0cyIsImxvYWRQb3N0c0xvYWRpbmciLCJsb2FkUG9zdHNEb25lIiwibG9hZFBvc3RzRXJyb3IiLCJhZGRQb3N0TG9hZGluZyIsImFkZFBvc3REb25lIiwiYWRkUG9zdEVycm9yIiwicmVtb3ZlUG9zdExvYWRpbmciLCJyZW1vdmVQb3N0RG9uZSIsInJlbW92ZVBvc3RFcnJvciIsImFkZENvbW1lbnRMb2FkaW5nIiwiYWRkQ29tbWVudERvbmUiLCJhZGRDb21tZW50RXJyb3IiLCJnZW5lcmF0ZUR1bW15UG9zdCIsIm51bWJlciIsIkFycmF5IiwiZmlsbCIsIm1hcCIsImlkIiwic2hvcnRJZCIsImdlbmVyYXRlIiwiVXNlciIsIm5pY2tuYW1lIiwiZmFrZXIiLCJuYW1lIiwiZmluZE5hbWUiLCJjb250ZW50IiwibG9yZW0iLCJwYXJhZ3JhcGgiLCJJbWFnZXMiLCJzcmMiLCJpbWFnZSIsIkNvbW1lbnRzIiwiY29udGVudHMiLCJzZW50ZW5jZSIsIkxPQURfUE9TVFNfUkVRVUVTVCIsIkxPQURfUE9TVFNfU1VDQ0VTUyIsIkxPQURfUE9TVFNfRkFJTFVSRSIsIkFERF9QT1NUX1JFUVVFU1QiLCJBRERfUE9TVF9TVUNDRVNTIiwiQUREX1BPU1RfRkFJTFVSRSIsIlJFTU9WRV9QT1NUX1JFUVVFU1QiLCJSRU1PVkVfUE9TVF9TVUNDRVNTIiwiUkVNT1ZFX1BPU1RfRkFJTFVSRSIsIkFERF9DT01NRU5UX1JFUVVFU1QiLCJBRERfQ09NTUVOVF9TVUNDRVNTIiwiQUREX0NPTU1FTlRfRkFJTFVSRSIsImFkZFBvc3QiLCJkYXRhIiwiYWRkQ29tbWVudCIsImR1bW15UG9zdCIsImR1bW15Q29tbWVudCIsInJlZHVjZXIiLCJwcm9kdWNlIiwiZHJhZnQiLCJjb25jYXQiLCJsZW5ndGgiLCJlcnJvciIsInVuc2hpZnQiLCJmaWx0ZXIiLCJ2IiwiZmluZCIsInBvc3RJZCIsImZvbGxvd0xvYWRpbmciLCJmb2xsb3dEb25lIiwiZm9sbG93RXJyb3IiLCJ1bmZvbGxvd0xvYWRpbmciLCJ1bmZvbGxvd0RvbmUiLCJ1bmZvbGxvd0Vycm9yIiwiaXNMb2dnaW5nSW4iLCJpc0xvZ2dlZEluIiwiaXNMb2dJbkVycm9yIiwiaXNMb2dnaW5nT3V0IiwiaXNMb2dnZWRPdXQiLCJpc0xvZ091dEVycm9yIiwiaXNTaWduaW5nVXAiLCJpc1NpZ25lZFVwIiwiaXNTaWduVXBFcnJvciIsImNoYW5nZU5pY2tuYW1lTG9hZGluZyIsImNoYW5nZU5pY2tuYW1lRG9uZSIsImNoYW5nZU5pY2tuYW1lRXJyb3IiLCJtZSIsInNpZ25VcERhdGEiLCJsb2dpbkRhdGEiLCJMT0dfSU5fUkVRVUVTVCIsIkxPR19JTl9TVUNDRVNTIiwiTE9HX0lOX0ZBSUxVUkUiLCJMT0dfT1VUX1JFUVVFU1QiLCJMT0dfT1VUX1NVQ0NFU1MiLCJMT0dfT1VUX0ZBSUxVUkUiLCJTSUdOX1VQX1JFUVVFU1QiLCJTSUdOX1VQX1NVQ0NFU1MiLCJTSUdOX1VQX0ZBSUxVUkUiLCJDSEFOR0VfTklDS05BTUVfUkVRVUVTVCIsIkNIQU5HRV9OSUNLTkFNRV9TVUNDRVNTIiwiQ0hBTkdFX05JQ0tOQU1FX0ZBSUxVUkUiLCJGT0xMT1dfUkVRVUVTVCIsIkZPTExPV19TVUNDRVNTIiwiRk9MTE9XX0ZBSUxVUkUiLCJVTkZPTExPV19SRVFVRVNUIiwiVU5GT0xMT1dfU1VDQ0VTUyIsIlVORk9MTE9XX0ZBSUxVUkUiLCJBRERfUE9TVF9UT19NRSIsIlJFTU9WRV9QT1NUX09GX01FIiwiZHVtbXlVc2VyIiwiUG9zdHMiLCJGb2xsb3dpbmdzIiwiRm9sbG93ZXJzIiwibG9naW5SZXF1ZXN0QWN0aW9uIiwibG9nb3V0UmVxdWVzdEFjdGlvbiIsInB1c2giLCJheGlvcyIsImRlZmF1bHRzIiwiYmFzZVVSTCIsInJvb3RTYWdhIiwiYWxsIiwiZm9yayIsInBvc3RTYWdhIiwidXNlclNhZ2EiLCJsb2FkUG9zdHNBUEkiLCJsb2FkUG9zdHMiLCJkZWxheSIsInB1dCIsImVyciIsInJlc3BvbnNlIiwiYWRkUG9zdEFQSSIsInJlbW92ZVBvc3RBUEkiLCJkZWxldGUiLCJyZW1vdmVQb3N0IiwiYWRkQ29tbWVudEFQSSIsIndhdGNoTG9hZFBvc3RzIiwidGhyb3R0bGUiLCJ3YXRjaEFkZFBvc3QiLCJ0YWtlTGF0ZXN0Iiwid2F0Y2hSZW1vdmVQb3N0Iiwid2F0Y2hBZGRDb21tZW50IiwibCIsImxvZ0luIiwibmV4dCIsImxvZ0luQVBJIiwicmVzdWx0IiwiY2FsbCIsImxvZ091dEFQSSIsImxvZ091dCIsIlNpZ25VcEFQSSIsIlNpZ25VcCIsImZvbGxvd0FQSSIsImZvbGxvdyIsInVuZm9sbG93QVBJIiwidW5mb2xsb3ciLCJ3YXRjaEZvbGxvdyIsIndhdGNoVW5mb2xsb3ciLCJ3YXRjaExvZ0luIiwid2F0Y2hMb2dPdXQiLCJ3YXRjaFNpZ25VcCIsImNyZWF0ZVdyYXBwZXIiLCJyZXF1aXJlIiwibG9nZ2VyTWlkZGxld2FyZSIsImRpc3BhdGNoIiwiZ2V0U3RhdGUiLCJjb25maWd1cmVTdG9yZSIsInNhZ2FNaWRkbGV3YXJlIiwiY3JlYXRlU2FnYU1pZGRsZXdhcmUiLCJtaWRkbGV3YXJlcyIsImVuaGFuY2VyIiwiY29tcG9zZSIsImNvbXBvc2VXaXRoRGV2VG9vbHMiLCJhcHBseU1pZGRsZXdhcmUiLCJzdG9yZSIsImNyZWF0ZVN0b3JlIiwic2FnYVRhc2siLCJydW4iLCJkZWJ1ZyJdLCJtYXBwaW5ncyI6Ijs7UUFBQTtRQUNBOztRQUVBO1FBQ0E7O1FBRUE7UUFDQTtRQUNBO1FBQ0E7UUFDQTtRQUNBO1FBQ0E7UUFDQTtRQUNBO1FBQ0E7O1FBRUE7UUFDQTtRQUNBO1FBQ0E7UUFDQTtRQUNBLElBQUk7UUFDSjtRQUNBOztRQUVBO1FBQ0E7O1FBRUE7UUFDQTtRQUNB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LENBQTdCO0FBSWU5TCxzRUFBZixFOzs7Ozs7Ozs7Ozs7Ozs7Ozs7Ozs7OztBQzlCQSxrQzs7Ozs7Ozs7Ozs7QUNBQSxrQzs7Ozs7Ozs7Ozs7QUNBQSxrQzs7Ozs7Ozs7Ozs7QUNBQSw0Qzs7Ozs7Ozs7Ozs7QUNBQSwrQzs7Ozs7Ozs7Ozs7QUNBQSxzQzs7Ozs7Ozs7Ozs7QUNBQSx1Qzs7Ozs7Ozs7Ozs7QUNBQSxrQzs7Ozs7Ozs7Ozs7QUNBQSxrQzs7Ozs7Ozs7Ozs7QUNBQSxxRDs7Ozs7Ozs7Ozs7QUNBQSx1Qzs7Ozs7Ozs7Ozs7QUNBQSwrQzs7Ozs7Ozs7Ozs7QUNBQSxvQyIsImZpbGUiOiJzdGF0aWNcXGRldmVsb3BtZW50XFxwYWdlc1xcX2FwcC5qcyIsInNvdXJjZXNDb250ZW50IjpbIiBcdC8vIFRoZSBtb2R1bGUgY2FjaGVcbiBcdHZhciBpbnN0YWxsZWRNb2R1bGVzID0gcmVxdWlyZSgnLi4vLi4vLi4vc3NyLW1vZHVsZS1jYWNoZS5qcycpO1xuXG4gXHQvLyBUaGUgcmVxdWlyZSBmdW5jdGlvblxuIFx0ZnVuY3Rpb24gX193ZWJwYWNrX3JlcXVpcmVfXyhtb2R1bGVJZCkge1xuXG4gXHRcdC8vIENoZWNrIGlmIG1vZHVsZSBpcyBpbiBjYWNoZVxuIFx0XHRpZihpbnN0YWxsZWRNb2R1bGVzW21vZHVsZUlkXSkge1xuIFx0XHRcdHJldHVybiBpbnN0YWxsZWRNb2R1bGVzW21vZHVsZUlkXS5leHBvcnRzO1xuIFx0XHR9XG4gXHRcdC8vIENyZWF0ZSBhIG5ldyBtb2R1bGUgKGFuZCBwdXQgaXQgaW50byB0aGUgY2FjaGUpXG4gXHRcdHZhciBtb2R1bGUgPSBpbnN0YWxsZWRNb2R1bGVzW21vZHVsZUlkXSA9IHtcbiBcdFx0XHRpOiBtb2R1bGVJZCxcbiBcdFx0XHRsOiBmYWxzZSxcbiBcdFx0XHRleHBvcnRzOiB7fVxuIFx0XHR9O1xuXG4gXHRcdC8vIEV4ZWN1dGUgdGhlIG1vZHVsZSBmdW5jdGlvblxuIFx0XHR2YXIgdGhyZXcgPSB0cnVlO1xuIFx0XHR0cnkge1xuIFx0XHRcdG1vZHVsZXNbbW9kdWxlSWRdLmNhbGwobW9kdWxlLmV4cG9ydHMsIG1vZHVsZSwgbW9kdWxlLmV4cG9ydHMsIF9fd2VicGFja19yZXF1aXJlX18pO1xuIFx0XHRcdHRocmV3ID0gZmFsc2U7XG4gXHRcdH0gZmluYWxseSB7XG4gXHRcdFx0aWYodGhyZXcpIGRlbGV0ZSBpbnN0YWxsZWRNb2R1bGVzW21vZHVsZUlkXTtcbiBcdFx0fVxuXG4gXHRcdC8vIEZsYWcgdGhlIG1vZHVsZSBhcyBsb2FkZWRcbiBcdFx0bW9kdWxlLmwgPSB0cnVlO1xuXG4gXHRcdC8vIFJldHVybiB0aGUgZXhwb3J0cyBvZiB0aGUgbW9kdWxlXG4gXHRcdHJldHVybiBtb2R1bGUuZXhwb3J0cztcbiBcdH1cblxuXG4gXHQvLyBleHBvc2UgdGhlIG1vZHVsZXMgb2JqZWN0IChfX3dlYnBhY2tfbW9kdWxlc19fKVxuIFx0X193ZWJwYWNrX3JlcXVpcmVfXy5tID0gbW9kdWxlcztcblxuIFx0Ly8gZXhwb3NlIHRoZSBtb2R1bGUgY2FjaGVcbiBcdF9fd2VicGFja19yZXF1aXJlX18uYyA9IGluc3RhbGxlZE1vZHVsZXM7XG5cbiBcdC8vIGRlZmluZSBnZXR0ZXIgZnVuY3Rpb24gZm9yIGhhcm1vbnkgZXhwb3J0c1xuIFx0X193ZWJwYWNrX3JlcXVpcmVfXy5kID0gZnVuY3Rpb24oZXhwb3J0cywgbmFtZSwgZ2V0dGVyKSB7XG4gXHRcdGlmKCFfX3dlYnBhY2tfcmVxdWlyZV9fLm8oZXhwb3J0cywgbmFtZSkpIHtcbiBcdFx0XHRPYmplY3QuZGVmaW5lUHJvcGVydHkoZXhwb3J0cywgbmFtZSwgeyBlbnVtZXJhYmxlOiB0cnVlLCBnZXQ6IGdldHRlciB9KTtcbiBcdFx0fVxuIFx0fTtcblxuIFx0Ly8gZGVmaW5lIF9fZXNNb2R1bGUgb24gZXhwb3J0c1xuIFx0X193ZWJwYWNrX3JlcXVpcmVfXy5yID0gZnVuY3Rpb24oZXhwb3J0cykge1xuIFx0XHRpZih0eXBlb2YgU3ltYm9sICE9PSAndW5kZWZpbmVkJyAmJiBTeW1ib2wudG9TdHJpbmdUYWcpIHtcbiBcdFx0XHRPYmplY3QuZGVmaW5lUHJvcGVydHkoZXhwb3J0cywgU3ltYm9sLnRvU3RyaW5nVGFnLCB7IHZhbHVlOiAnTW9kdWxlJyB9KTtcbiBcdFx0fVxuIFx0XHRPYmplY3QuZGVmaW5lUHJvcGVydHkoZXhwb3J0cywgJ19fZXNNb2R1bGUnLCB7IHZhbHVlOiB0cnVlIH0pO1xuIFx0fTtcblxuIFx0Ly8gY3JlYXRlIGEgZmFrZSBuYW1lc3BhY2Ugb2JqZWN0XG4gXHQvLyBtb2RlICYgMTogdmFsdWUgaXMgYSBtb2R1bGUgaWQsIHJlcXVpcmUgaXRcbiBcdC8vIG1vZGUgJiAyOiBtZXJnZSBhbGwgcHJvcGVydGllcyBvZiB2YWx1ZSBpbnRvIHRoZSBuc1xuIFx0Ly8gbW9kZSAmIDQ6IHJldHVybiB2YWx1ZSB3aGVuIGFscmVhZHkgbnMgb2JqZWN0XG4gXHQvLyBtb2RlICYgOHwxOiBiZWhhdmUgbGlrZSByZXF1aXJlXG4gXHRfX3dlYnBhY2tfcmVxdWlyZV9fLnQgPSBmdW5jdGlvbih2YWx1ZSwgbW9kZSkge1xuIFx0XHRpZihtb2RlICYgMSkgdmFsdWUgPSBfX3dlYnBhY2tfcmVxdWlyZV9fKHZhbHVlKTtcbiBcdFx0aWYobW9kZSAmIDgpIHJldHVybiB2YWx1ZTtcbiBcdFx0aWYoKG1vZGUgJiA0KSAmJiB0eXBlb2YgdmFsdWUgPT09ICdvYmplY3QnICYmIHZhbHVlICYmIHZhbHVlLl9fZXNNb2R1bGUpIHJldHVybiB2YWx1ZTtcbiBcdFx0dmFyIG5zID0gT2JqZWN0LmNyZWF0ZShudWxsKTtcbiBcdFx0X193ZWJwYWNrX3JlcXVpcmVfXy5yKG5zKTtcbiBcdFx0T2JqZWN0LmRlZmluZVByb3BlcnR5KG5zLCAnZGVmYXVsdCcsIHsgZW51bWVyYWJsZTogdHJ1ZSwgdmFsdWU6IHZhbHVlIH0pO1xuIFx0XHRpZihtb2RlICYgMiAmJiB0eXBlb2YgdmFsdWUgIT0gJ3N0cmluZycpIGZvcih2YXIga2V5IGluIHZhbHVlKSBfX3dlYnBhY2tfcmVxdWlyZV9fLmQobnMsIGtleSwgZnVuY3Rpb24oa2V5KSB7IHJldHVybiB2YWx1ZVtrZXldOyB9LmJpbmQobnVsbCwga2V5KSk7XG4gXHRcdHJldHVybiBucztcbiBcdH07XG5cbiBcdC8vIGdldERlZmF1bHRFeHBvcnQgZnVuY3Rpb24gZm9yIGNvbXBhdGliaWxpdHkgd2l0aCBub24taGFybW9ueSBtb2R1bGVzXG4gXHRfX3dlYnBhY2tfcmVxdWlyZV9fLm4gPSBmdW5jdGlvbihtb2R1bGUpIHtcbiBcdFx0dmFyIGdldHRlciA9IG1vZHVsZSAmJiBtb2R1bGUuX19lc01vZHVsZSA/XG4gXHRcdFx0ZnVuY3Rpb24gZ2V0RGVmYXVsdCgpIHsgcmV0dXJuIG1vZHVsZVsnZGVmYXVsdCddOyB9IDpcbiBcdFx0XHRmdW5jdGlvbiBnZXRNb2R1bGVFeHBvcnRzKCkgeyByZXR1cm4gbW9kdWxlOyB9O1xuIFx0XHRfX3dlYnBhY2tfcmVxdWlyZV9fLmQoZ2V0dGVyLCAnYScsIGdldHRlcik7XG4gXHRcdHJldHVybiBnZXR0ZXI7XG4gXHR9O1xuXG4gXHQvLyBPYmplY3QucHJvdG90eXBlLmhhc093blByb3BlcnR5LmNhbGxcbiBcdF9fd2VicGFja19yZXF1aXJlX18ubyA9IGZ1bmN0aW9uKG9iamVjdCwgcHJvcGVydHkpIHsgcmV0dXJuIE9iamVjdC5wcm90b3R5cGUuaGFzT3duUHJvcGVydHkuY2FsbChvYmplY3QsIHByb3BlcnR5KTsgfTtcblxuIFx0Ly8gX193ZWJwYWNrX3B1YmxpY19wYXRoX19cbiBcdF9fd2VicGFja19yZXF1aXJlX18ucCA9IFwiXCI7XG5cblxuIFx0Ly8gTG9hZCBlbnRyeSBtb2R1bGUgYW5kIHJldHVybiBleHBvcnRzXG4gXHRyZXR1cm4gX193ZWJwYWNrX3JlcXVpcmVfXyhfX3dlYnBhY2tfcmVxdWlyZV9fLnMgPSAwKTtcbiIsImltcG9ydCBSZWFjdCBmcm9tICdyZWFjdCc7XHJcbmltcG9ydCBQcm9wVHlwZXMgZnJvbSAncHJvcC10eXBlcyc7XHJcbmltcG9ydCAnYW50ZC9kaXN0L2FudGQuY3NzJztcclxuaW1wb3J0IEhlYWQgZnJvbSAnbmV4dC9oZWFkJztcclxuaW1wb3J0IHdpdGhSZWR1eFNhZ2EgZnJvbSAnbmV4dC1yZWR1eC1zYWdhJztcclxuXHJcbmltcG9ydCB3cmFwcGVyIGZyb20gJy4uL3N0b3JlL2NvbmZpZ3VyZVN0b3JlJztcclxuXHJcbmNvbnN0IE5vZGVCaXJkID0gKHsgQ29tcG9uZW50IH0pID0+IHtcclxuICAgIHJldHVybiAoXHJcbiAgICAgICAgPD5cclxuICAgICAgICAgICAgPEhlYWQ+XHJcbiAgICAgICAgICAgICAgICA8bWV0YSBjaGFyU2V0PVwidXRmLThcIiAvPlxyXG4gICAgICAgICAgICAgICAgPHRpdGxlPm5vZGUtYmlyZDwvdGl0bGU+XHJcbiAgICAgICAgICAgIDwvSGVhZD5cclxuICAgICAgICAgICAgPENvbXBvbmVudCAvPlxyXG4gICAgICAgIDwvPlxyXG4gICAgKTtcclxufVxyXG5cclxuTm9kZUJpcmQucHJvcFR5cGVzID0ge1xyXG4gICAgQ29tcG9uZW50OiBQcm9wVHlwZXMuZWxlbWVudFR5cGUuaXNSZXF1aXJlZCxcclxufVxyXG5cclxuZXhwb3J0IGRlZmF1bHQgd3JhcHBlci53aXRoUmVkdXgod2l0aFJlZHV4U2FnYShOb2RlQmlyZCkpOyIsImltcG9ydCB7IEhZRFJBVEUgfSBmcm9tICduZXh0LXJlZHV4LXdyYXBwZXInO1xyXG5pbXBvcnQgeyBjb21iaW5lUmVkdWNlcnMgfSBmcm9tICdyZWR1eCc7XHJcblxyXG5pbXBvcnQgdXNlciBmcm9tICcuL3VzZXInO1xyXG5pbXBvcnQgcG9zdCBmcm9tICcuL3Bvc3QnO1xyXG5cclxuXHJcbi8vIGFjdGlvbiBjcmVhdG9yXHJcbi8vIGNvbnN0IGNoYW5nZU5pY2tuYW1lID0gKGRhdGEpID0+IHtcclxuLy8gICAgIHJldHVybiB7XHJcbi8vICAgICAgICAgdHlwZSA6ICdDSEFOR0VfTklDS05BTUUnLFxyXG4vLyAgICAgICAgIGRhdGEsXHJcbi8vICAgICB9XHJcbi8vIH1cclxuLy8gY2hhbmdlTmlja25hbWUoJ25ldWUgemVhbCcpO1xyXG5cclxuLy8gKOydtOyghOyDge2DnCwg7JWh7IWYICkgPT4g64uk7J2M7IOB7YOcXHJcbmNvbnN0IHJvb3RSZWR1Y2VyID0gY29tYmluZVJlZHVjZXJzKHtcclxuICAgIGluZGV4OiAoc3RhdGUgPSB7fSwgYWN0aW9uKSA9PiB7XHJcbiAgICAgICAgc3dpdGNoIChhY3Rpb24udHlwZSkge1xyXG4gICAgICAgICAgICBjYXNlIEhZRFJBVEU6XHJcbiAgICAgICAgICAgICAgICBjb25zb2xlLmxvZyhIWURSQVRFKTtcclxuICAgICAgICAgICAgICAgIHJldHVybiB7IC4uLnN0YXRlLCAuLi5hY3Rpb24ucGF5bG9hZCB9O1xyXG5cclxuICAgICAgICAgICAgZGVmYXVsdDpcclxuICAgICAgICAgICAgICAgIHJldHVybiBzdGF0ZTtcclxuICAgICAgICB9XHJcbiAgICB9LFxyXG4gICAgdXNlcixcclxuICAgIHBvc3QsXHJcbn1cclxuKVxyXG5cclxuZXhwb3J0IGRlZmF1bHQgcm9vdFJlZHVjZXI7IiwiaW1wb3J0IHNob3J0SWQgZnJvbSBcInNob3J0aWRcIjtcclxuaW1wb3J0IHBvc3RTYWdhIGZyb20gXCIuLi9zYWdhcy9wb3N0XCI7XHJcbmltcG9ydCBwcm9kdWNlIGZyb20gXCJpbW1lclwiO1xyXG5pbXBvcnQgZmFrZXIgZnJvbSBcImZha2VyXCI7XHJcblxyXG5leHBvcnQgY29uc3QgaW5pdGlhbFN0YXRlID0ge1xyXG4gIG1haW5Qb3N0czogW10sXHJcbiAgaW1hZ2VQYXRoczogW10sXHJcbiAgaGFzTW9yZVBvc3RzOiB0cnVlLFxyXG4gIGxvYWRQb3N0c0xvYWRpbmc6IGZhbHNlLFxyXG4gIGxvYWRQb3N0c0RvbmU6IGZhbHNlLFxyXG4gIGxvYWRQb3N0c0Vycm9yOiBudWxsLFxyXG4gIGFkZFBvc3RMb2FkaW5nOiBmYWxzZSxcclxuICBhZGRQb3N0RG9uZTogZmFsc2UsXHJcbiAgYWRkUG9zdEVycm9yOiBudWxsLFxyXG4gIHJlbW92ZVBvc3RMb2FkaW5nOiBmYWxzZSxcclxuICByZW1vdmVQb3N0RG9uZTogZmFsc2UsXHJcbiAgcmVtb3ZlUG9zdEVycm9yOiBudWxsLFxyXG4gIGFkZENvbW1lbnRMb2FkaW5nOiBmYWxzZSxcclxuICBhZGRDb21tZW50RG9uZTogZmFsc2UsXHJcbiAgYWRkQ29tbWVudEVycm9yOiBudWxsLFxyXG59O1xyXG5cclxuZXhwb3J0IGNvbnN0IGdlbmVyYXRlRHVtbXlQb3N0ID0gKG51bWJlcikgPT5cclxuICBBcnJheSgyMClcclxuICAgIC5maWxsKClcclxuICAgIC5tYXAoKCkgPT4gKHtcclxuICAgICAgaWQ6IHNob3J0SWQuZ2VuZXJhdGUoKSxcclxuICAgICAgVXNlcjoge1xyXG4gICAgICAgIGlkOiBzaG9ydElkLmdlbmVyYXRlKCksXHJcbiAgICAgICAgbmlja25hbWU6IGZha2VyLm5hbWUuZmluZE5hbWUoKSxcclxuICAgICAgfSxcclxuICAgICAgY29udGVudDogZmFrZXIubG9yZW0ucGFyYWdyYXBoKCksXHJcbiAgICAgIEltYWdlczogW3sgc3JjOiBmYWtlci5pbWFnZS5pbWFnZSgpIH1dLFxyXG4gICAgICBDb21tZW50czogW1xyXG4gICAgICAgIHtcclxuICAgICAgICAgIGlkOiBzaG9ydElkLmdlbmVyYXRlKCksXHJcbiAgICAgICAgICBjb250ZW50czogZmFrZXIubG9yZW0uc2VudGVuY2UoKSxcclxuICAgICAgICAgIFVzZXI6IHtcclxuICAgICAgICAgICAgaWQ6IHNob3J0SWQuZ2VuZXJhdGUoKSxcclxuICAgICAgICAgICAgbmlja25hbWU6IGZha2VyLm5hbWUuZmluZE5hbWUoKSxcclxuICAgICAgICAgIH0sXHJcbiAgICAgICAgfSxcclxuICAgICAgXSxcclxuICAgIH0pKTtcclxuXHJcbi8vIGluaXRpYWxTdGF0ZS5tYWluUG9zdHMgPSBpbml0aWFsU3RhdGUubWFpblBvc3RzLmNvbmNhdChnZW5lcmF0ZUR1bW15UG9zdCgxMCkpO1xyXG5cclxuZXhwb3J0IGNvbnN0IExPQURfUE9TVFNfUkVRVUVTVCA9IFwiTE9BRF9QT1NUU19SRVFVRVNUXCI7XHJcbmV4cG9ydCBjb25zdCBMT0FEX1BPU1RTX1NVQ0NFU1MgPSBcIkxPQURfUE9TVFNfU1VDQ0VTU1wiO1xyXG5leHBvcnQgY29uc3QgTE9BRF9QT1NUU19GQUlMVVJFID0gXCJMT0FEX1BPU1RTX0ZBSUxVUkVcIjtcclxuXHJcbmV4cG9ydCBjb25zdCBBRERfUE9TVF9SRVFVRVNUID0gXCJBRERfUE9TVF9SRVFVRVNUXCI7XHJcbmV4cG9ydCBjb25zdCBBRERfUE9TVF9TVUNDRVNTID0gXCJBRERfUE9TVF9TVUNDRVNTXCI7XHJcbmV4cG9ydCBjb25zdCBBRERfUE9TVF9GQUlMVVJFID0gXCJBRERfUE9TVF9GQUlMVVJFXCI7XHJcblxyXG5leHBvcnQgY29uc3QgUkVNT1ZFX1BPU1RfUkVRVUVTVCA9IFwiUkVNT1ZFX1BPU1RfUkVRVUVTVFwiO1xyXG5leHBvcnQgY29uc3QgUkVNT1ZFX1BPU1RfU1VDQ0VTUyA9IFwiUkVNT1ZFX1BPU1RfU1VDQ0VTU1wiO1xyXG5leHBvcnQgY29uc3QgUkVNT1ZFX1BPU1RfRkFJTFVSRSA9IFwiUkVNT1ZFX1BPU1RfRkFJTFVSRVwiO1xyXG5cclxuZXhwb3J0IGNvbnN0IEFERF9DT01NRU5UX1JFUVVFU1QgPSBcIkFERF9DT01NRU5UX1JFUVVFU1RcIjtcclxuZXhwb3J0IGNvbnN0IEFERF9DT01NRU5UX1NVQ0NFU1MgPSBcIkFERF9DT01NRU5UX1NVQ0NFU1NcIjtcclxuZXhwb3J0IGNvbnN0IEFERF9DT01NRU5UX0ZBSUxVUkUgPSBcIkFERF9DT01NRU5UX0ZBSUxVUkVcIjtcclxuXHJcbmV4cG9ydCBjb25zdCBhZGRQb3N0ID0gKGRhdGEpID0+ICh7XHJcbiAgdHlwZTogQUREX1BPU1RfUkVRVUVTVCxcclxuICBkYXRhLFxyXG59KTtcclxuXHJcbmV4cG9ydCBjb25zdCBhZGRDb21tZW50ID0gKGRhdGEpID0+ICh7XHJcbiAgdHlwZTogQUREX0NPTU1FTlRfUkVRVUVTVCxcclxuICBkYXRhLFxyXG59KTtcclxuXHJcbmNvbnN0IGR1bW15UG9zdCA9IChkYXRhKSA9PiAoe1xyXG4gIGlkOiBkYXRhLmlkLFxyXG4gIGNvbnRlbnQ6IGRhdGEuY29udGVudCxcclxuICBVc2VyOiB7XHJcbiAgICBpZDogMSxcclxuICAgIG5pY2tuYW1lOiBcIuuNsO2UvOyViFwiLFxyXG4gIH0sXHJcbiAgSW1hZ2VzOiBbXSxcclxuICBDb21tZW50czogW10sXHJcbn0pO1xyXG5cclxuY29uc3QgZHVtbXlDb21tZW50ID0gKGRhdGEpID0+ICh7XHJcbiAgaWQ6IHNob3J0SWQuZ2VuZXJhdGUoKSxcclxuICBjb250ZW50czogZGF0YSxcclxuICBVc2VyOiB7XHJcbiAgICBpZDogMSxcclxuICAgIG5pY2tuYW1lOiBcIuuNsO2UvOyViFwiLFxyXG4gIH0sXHJcbn0pO1xyXG4vLyDsnbTsoIQg7IOB7YOc66W8IOyVoeyFmOydhCDthrXtlbQg64uk7J2MIOyDge2DnOuhnCDrp4zrk6TslrTrgrTripQg7ZWo7IiYKOu2iOuzgOyEseydgCDsp4DtgqTrqbTshJwpXHJcbmNvbnN0IHJlZHVjZXIgPSAoc3RhdGUgPSBpbml0aWFsU3RhdGUsIGFjdGlvbikgPT4ge1xyXG4gIHJldHVybiBwcm9kdWNlKHN0YXRlLCAoZHJhZnQpID0+IHtcclxuICAgIHN3aXRjaCAoYWN0aW9uLnR5cGUpIHtcclxuICAgICAgY2FzZSBMT0FEX1BPU1RTX1JFUVVFU1Q6XHJcbiAgICAgICAgZHJhZnQubG9hZFBvc3RzTG9hZGluZyA9IHRydWU7XHJcbiAgICAgICAgZHJhZnQubG9hZFBvc3RzRG9uZSA9IGZhbHNlO1xyXG4gICAgICAgIGRyYWZ0LmxvYWRQb3N0c0Vycm9yID0gbnVsbDtcclxuICAgICAgICBicmVhaztcclxuICAgICAgY2FzZSBMT0FEX1BPU1RTX1NVQ0NFU1M6XHJcbiAgICAgICAgZHJhZnQubWFpblBvc3RzID0gYWN0aW9uLmRhdGEuY29uY2F0KGRyYWZ0Lm1haW5Qb3N0cyk7XHJcbiAgICAgICAgZHJhZnQubG9hZFBvc3RzTG9hZGluZyA9IGZhbHNlO1xyXG4gICAgICAgIGRyYWZ0LmxvYWRQb3N0c0RvbmUgPSB0cnVlO1xyXG4gICAgICAgIGRyYWZ0Lmhhc01vcmVQb3N0cyA9IGRyYWZ0Lm1haW5Qb3N0cy5sZW5ndGggPCA1MDtcclxuICAgICAgICBicmVhaztcclxuICAgICAgY2FzZSBMT0FEX1BPU1RTX0ZBSUxVUkU6XHJcbiAgICAgICAgZHJhZnQubG9hZFBvc3RzTG9hZGluZyA9IGZhbHNlO1xyXG4gICAgICAgIGRyYWZ0LmxvYWRQb3N0c0Vycm9yID0gYWN0aW9uLmVycm9yO1xyXG4gICAgICAgIGJyZWFrO1xyXG4gICAgICBjYXNlIEFERF9QT1NUX1JFUVVFU1Q6XHJcbiAgICAgICAgZHJhZnQuYWRkUG9zdExvYWRpbmcgPSB0cnVlO1xyXG4gICAgICAgIGRyYWZ0LmFkZFBvc3REb25lID0gZmFsc2U7XHJcbiAgICAgICAgZHJhZnQuYWRkUG9zdEVycm9yID0gbnVsbDtcclxuICAgICAgICBicmVhaztcclxuICAgICAgY2FzZSBBRERfUE9TVF9TVUNDRVNTOlxyXG4gICAgICAgIGRyYWZ0Lm1haW5Qb3N0cy51bnNoaWZ0KGR1bW15UG9zdChhY3Rpb24uZGF0YSkpO1xyXG4gICAgICAgIGRyYWZ0LmFkZFBvc3RMb2FkaW5nID0gZmFsc2U7XHJcbiAgICAgICAgZHJhZnQuYWRkUG9zdERvbmUgPSB0cnVlO1xyXG4gICAgICAgIGJyZWFrO1xyXG4gICAgICBjYXNlIEFERF9QT1NUX0ZBSUxVUkU6XHJcbiAgICAgICAgZHJhZnQuYWRkUG9zdExvYWRpbmcgPSBmYWxzZTtcclxuICAgICAgICBkcmFmdC5hZGRQb3N0RXJyb3IgPSBhY3Rpb24uZXJyb3I7XHJcbiAgICAgICAgYnJlYWs7XHJcbiAgICAgIGNhc2UgUkVNT1ZFX1BPU1RfUkVRVUVTVDpcclxuICAgICAgICBkcmFmdC5yZW1vdmVQb3N0TG9hZGluZyA9IHRydWU7XHJcbiAgICAgICAgZHJhZnQucmVtb3ZlUG9zdERvbmUgPSBmYWxzZTtcclxuICAgICAgICBkcmFmdC5yZW1vdmVQb3N0RXJyb3IgPSBudWxsO1xyXG4gICAgICAgIGJyZWFrO1xyXG4gICAgICBjYXNlIFJFTU9WRV9QT1NUX1NVQ0NFU1M6XHJcbiAgICAgICAgZHJhZnQubWFpblBvc3RzID0gZHJhZnQubWFpblBvc3RzLmZpbHRlcigodikgPT4gdi5pZCAhPT0gYWN0aW9uLmRhdGEpO1xyXG4gICAgICAgIGRyYWZ0LnJlbW92ZVBvc3RMb2FkaW5nID0gZmFsc2U7XHJcbiAgICAgICAgZHJhZnQucmVtb3ZlUG9zdERvbmUgPSB0cnVlO1xyXG4gICAgICAgIGJyZWFrO1xyXG4gICAgICBjYXNlIFJFTU9WRV9QT1NUX0ZBSUxVUkU6XHJcbiAgICAgICAgZHJhZnQucmVtb3ZlUG9zdExvYWRpbmcgPSBmYWxzZTtcclxuICAgICAgICBkcmFmdC5yZW1vdmVQb3N0RXJyb3IgPSBhY3Rpb24uZXJyb3I7XHJcbiAgICAgICAgYnJlYWs7XHJcbiAgICAgIGNhc2UgQUREX0NPTU1FTlRfUkVRVUVTVDpcclxuICAgICAgICBkcmFmdC5hZGRDb21tZW50TG9hZGluZyA9IHRydWU7XHJcbiAgICAgICAgZHJhZnQuYWRkQ29tbWVudERvbmUgPSBmYWxzZTtcclxuICAgICAgICBkcmFmdC5hZGRDb21tZW50RXJyb3IgPSBudWxsO1xyXG4gICAgICAgIGJyZWFrO1xyXG4gICAgICBjYXNlIEFERF9DT01NRU5UX1NVQ0NFU1M6IHtcclxuICAgICAgICBjb25zdCBwb3N0ID0gZHJhZnQubWFpblBvc3RzLmZpbmQoKHYpID0+IHYuaWQgPT09IGFjdGlvbi5kYXRhLnBvc3RJZCk7XHJcbiAgICAgICAgcG9zdC5Db21tZW50cy51bnNoaWZ0KGR1bW15Q29tbWVudChhY3Rpb24uZGF0YS5jb250ZW50cykpO1xyXG4gICAgICAgIGRyYWZ0LmFkZENvbW1lbnRMb2FkaW5nID0gZmFsc2U7XHJcbiAgICAgICAgZHJhZnQuYWRkQ29tbWVudERvbmUgPSB0cnVlO1xyXG4gICAgICAgIGJyZWFrO1xyXG4gICAgICAgIC8vYWN0aW9uLmRhdGEuY29udGVudHMgcG9zdCB1c2VyaWRcclxuICAgICAgICAvLyBjb25zdCBwb3N0SW5kZXggPSBzdGF0ZS5tYWluUG9zdHMuZmluZEluZGV4KFxyXG4gICAgICAgIC8vICAgKHYpID0+IHYuaWQgPT09IGFjdGlvbi5kYXRhLnBvc3RJZFxyXG4gICAgICAgIC8vICk7XHJcbiAgICAgICAgLy8gY29uc3QgcG9zdCA9IHsgLi4uc3RhdGUubWFpblBvc3RzW3Bvc3RJbmRleF0gfTtcclxuICAgICAgICAvLyBwb3N0LkNvbW1lbnRzID0gW2R1bW15Q29tbWVudChhY3Rpb24uZGF0YS5jb250ZW50cyksIC4uLnBvc3QuQ29tbWVudHNdO1xyXG4gICAgICAgIC8vIGNvbnN0IG1haW5Qb3N0cyA9IFsuLi5zdGF0ZS5tYWluUG9zdHNdO1xyXG4gICAgICAgIC8vIG1haW5Qb3N0c1twb3N0SW5kZXhdID0gcG9zdDtcclxuICAgICAgICAvLyByZXR1cm4ge1xyXG4gICAgICAgIC8vICAgLi4uc3RhdGUsXHJcbiAgICAgICAgLy8gICBtYWluUG9zdHMsXHJcbiAgICAgICAgLy8gICBhZGRDb21tZW50TG9hZGluZzogZmFsc2UsXHJcbiAgICAgICAgLy8gICBhZGRDb21tZW50RG9uZTogdHJ1ZSxcclxuICAgICAgICAvLyB9O1xyXG4gICAgICB9XHJcbiAgICAgIGNhc2UgQUREX0NPTU1FTlRfRkFJTFVSRTpcclxuICAgICAgICBkcmFmdC5hZGRDb21tZW50TG9hZGluZyA9IGZhbHNlO1xyXG4gICAgICAgIGRyYWZ0LmFkZENvbW1lbnRFcnJvciA9IGFjdGlvbi5lcnJvcjtcclxuICAgICAgICBicmVhaztcclxuICAgICAgZGVmYXVsdDpcclxuICAgICAgICBicmVhaztcclxuICAgIH1cclxuICB9KTtcclxuXHJcbiAgLy8gICBzd2l0Y2ggKGFjdGlvbi50eXBlKSB7XHJcbiAgLy8gICAgIGNhc2UgQUREX1BPU1RfUkVRVUVTVDpcclxuICAvLyAgICAgICByZXR1cm4ge1xyXG4gIC8vICAgICAgICAgLi4uc3RhdGUsXHJcbiAgLy8gICAgICAgICBhZGRQb3N0TG9hZGluZzogdHJ1ZSxcclxuICAvLyAgICAgICAgIGFkZFBvc3REb25lOiBmYWxzZSxcclxuICAvLyAgICAgICAgIGFkZFBvc3RFcnJvcjogbnVsbCxcclxuICAvLyAgICAgICB9O1xyXG4gIC8vICAgICBjYXNlIEFERF9QT1NUX1NVQ0NFU1M6XHJcbiAgLy8gICAgICAgcmV0dXJuIHtcclxuICAvLyAgICAgICAgIC4uLnN0YXRlLFxyXG4gIC8vICAgICAgICAgbWFpblBvc3RzOiBbZHVtbXlQb3N0KGFjdGlvbi5kYXRhKSwgLi4uc3RhdGUubWFpblBvc3RzXSxcclxuICAvLyAgICAgICAgIGFkZFBvc3RMb2FkaW5nOiBmYWxzZSxcclxuICAvLyAgICAgICAgIGFkZFBvc3REb25lOiB0cnVlLFxyXG4gIC8vICAgICAgIH07XHJcbiAgLy8gICAgIGNhc2UgQUREX1BPU1RfRkFJTFVSRTpcclxuICAvLyAgICAgICByZXR1cm4ge1xyXG4gIC8vICAgICAgICAgLi4uc3RhdGUsXHJcbiAgLy8gICAgICAgICBhZGRQb3N0TG9hZGluZzogZmFsc2UsXHJcbiAgLy8gICAgICAgICBhZGRQb3N0RXJyb3I6IGFjdGlvbi5lcnJvcixcclxuICAvLyAgICAgICB9O1xyXG4gIC8vICAgICBjYXNlIFJFTU9WRV9QT1NUX1JFUVVFU1Q6XHJcbiAgLy8gICAgICAgcmV0dXJuIHtcclxuICAvLyAgICAgICAgIC4uLnN0YXRlLFxyXG4gIC8vICAgICAgICAgcmVtb3ZlUG9zdExvYWRpbmc6IHRydWUsXHJcbiAgLy8gICAgICAgICByZW1vdmVQb3N0RG9uZTogZmFsc2UsXHJcbiAgLy8gICAgICAgICByZW1vdmVQb3N0RXJyb3I6IG51bGwsXHJcbiAgLy8gICAgICAgfTtcclxuICAvLyAgICAgY2FzZSBSRU1PVkVfUE9TVF9TVUNDRVNTOlxyXG4gIC8vICAgICAgIHJldHVybiB7XHJcbiAgLy8gICAgICAgICAuLi5zdGF0ZSxcclxuICAvLyAgICAgICAgIG1haW5Qb3N0czogc3RhdGUubWFpblBvc3RzLmZpbHRlcigodikgPT4gdi5pZCAhPT0gYWN0aW9uLmRhdGEpLFxyXG4gIC8vICAgICAgICAgcmVtb3ZlUG9zdExvYWRpbmc6IGZhbHNlLFxyXG4gIC8vICAgICAgICAgcmVtb3ZlUG9zdERvbmU6IHRydWUsXHJcbiAgLy8gICAgICAgfTtcclxuICAvLyAgICAgY2FzZSBSRU1PVkVfUE9TVF9GQUlMVVJFOlxyXG4gIC8vICAgICAgIHJldHVybiB7XHJcbiAgLy8gICAgICAgICAuLi5zdGF0ZSxcclxuICAvLyAgICAgICAgIHJlbW92ZVBvc3RMb2FkaW5nOiBmYWxzZSxcclxuICAvLyAgICAgICAgIHJlbW92ZVBvc3RFcnJvcjogYWN0aW9uLmVycm9yLFxyXG4gIC8vICAgICAgIH07XHJcbiAgLy8gICAgIGNhc2UgQUREX0NPTU1FTlRfUkVRVUVTVDpcclxuICAvLyAgICAgICByZXR1cm4ge1xyXG4gIC8vICAgICAgICAgLi4uc3RhdGUsXHJcbiAgLy8gICAgICAgICBhZGRDb21tZW50TG9hZGluZzogdHJ1ZSxcclxuICAvLyAgICAgICAgIGFkZENvbW1lbnREb25lOiBmYWxzZSxcclxuICAvLyAgICAgICAgIGFkZENvbW1lbnRFcnJvcjogbnVsbCxcclxuICAvLyAgICAgICB9O1xyXG4gIC8vICAgICBjYXNlIEFERF9DT01NRU5UX1NVQ0NFU1M6IHtcclxuICAvLyAgICAgICAvL2FjdGlvbi5kYXRhLmNvbnRlbnRzIHBvc3QgdXNlcmlkXHJcbiAgLy8gICAgICAgY29uc3QgcG9zdEluZGV4ID0gc3RhdGUubWFpblBvc3RzLmZpbmRJbmRleChcclxuICAvLyAgICAgICAgICh2KSA9PiB2LmlkID09PSBhY3Rpb24uZGF0YS5wb3N0SWRcclxuICAvLyAgICAgICApO1xyXG4gIC8vICAgICAgIGNvbnN0IHBvc3QgPSB7IC4uLnN0YXRlLm1haW5Qb3N0c1twb3N0SW5kZXhdIH07XHJcbiAgLy8gICAgICAgcG9zdC5Db21tZW50cyA9IFtkdW1teUNvbW1lbnQoYWN0aW9uLmRhdGEuY29udGVudHMpLCAuLi5wb3N0LkNvbW1lbnRzXTtcclxuICAvLyAgICAgICBjb25zdCBtYWluUG9zdHMgPSBbLi4uc3RhdGUubWFpblBvc3RzXTtcclxuICAvLyAgICAgICBtYWluUG9zdHNbcG9zdEluZGV4XSA9IHBvc3Q7XHJcbiAgLy8gICAgICAgcmV0dXJuIHtcclxuICAvLyAgICAgICAgIC4uLnN0YXRlLFxyXG4gIC8vICAgICAgICAgbWFpblBvc3RzLFxyXG4gIC8vICAgICAgICAgYWRkQ29tbWVudExvYWRpbmc6IGZhbHNlLFxyXG4gIC8vICAgICAgICAgYWRkQ29tbWVudERvbmU6IHRydWUsXHJcbiAgLy8gICAgICAgfTtcclxuICAvLyAgICAgfVxyXG4gIC8vICAgICBjYXNlIEFERF9DT01NRU5UX0ZBSUxVUkU6XHJcbiAgLy8gICAgICAgcmV0dXJuIHtcclxuICAvLyAgICAgICAgIC4uLnN0YXRlLFxyXG4gIC8vICAgICAgICAgYWRkQ29tbWVudExvYWRpbmc6IGZhbHNlLFxyXG4gIC8vICAgICAgICAgYWRkQ29tbWVudEVycm9yOiBhY3Rpb24uZXJyb3IsXHJcbiAgLy8gICAgICAgfTtcclxuICAvLyAgICAgZGVmYXVsdDpcclxuICAvLyAgICAgICByZXR1cm4gc3RhdGU7XHJcbiAgLy8gICB9XHJcbn07XHJcblxyXG5leHBvcnQgZGVmYXVsdCByZWR1Y2VyO1xyXG4iLCJpbXBvcnQgcHJvZHVjZSBmcm9tIFwiaW1tZXJcIjtcclxuXHJcbmV4cG9ydCBjb25zdCBpbml0aWFsU3RhdGUgPSB7XHJcbiAgZm9sbG93TG9hZGluZzogZmFsc2UsIC8v7YyU66Gc7JqwIOyLnOuPhOykkVxyXG4gIGZvbGxvd0RvbmU6IGZhbHNlLFxyXG4gIGZvbGxvd0Vycm9yOiBudWxsLFxyXG4gIHVuZm9sbG93TG9hZGluZzogZmFsc2UsIC8v7Ja47YyU66Gc7JqwIOyLnOuPhOykkVxyXG4gIHVuZm9sbG93RG9uZTogZmFsc2UsXHJcbiAgdW5mb2xsb3dFcnJvcjogbnVsbCxcclxuICBpc0xvZ2dpbmdJbjogZmFsc2UsIC8vIOuhnOq3uOyduCDsi5zrj4TspJFcclxuICBpc0xvZ2dlZEluOiBmYWxzZSxcclxuICBpc0xvZ0luRXJyb3I6IG51bGwsXHJcbiAgaXNMb2dnaW5nT3V0OiBmYWxzZSwgLy8g66Gc6re47JWE7JuDIOyLnOuPhOykkVxyXG4gIGlzTG9nZ2VkT3V0OiBmYWxzZSxcclxuICBpc0xvZ091dEVycm9yOiBudWxsLFxyXG4gIGlzU2lnbmluZ1VwOiBmYWxzZSwgLy8g7ZqM7JuQ6rCA7J6FIOyLnOuPhOykkVxyXG4gIGlzU2lnbmVkVXA6IGZhbHNlLFxyXG4gIGlzU2lnblVwRXJyb3I6IG51bGwsXHJcbiAgY2hhbmdlTmlja25hbWVMb2FkaW5nOiBmYWxzZSwgLy/ri4nrhKTsnoQg67OA6rK9IOyLnOuPhOykkVxyXG4gIGNoYW5nZU5pY2tuYW1lRG9uZTogZmFsc2UsXHJcbiAgY2hhbmdlTmlja25hbWVFcnJvcjogbnVsbCxcclxuICBtZTogbnVsbCxcclxuICBzaWduVXBEYXRhOiB7fSxcclxuICBsb2dpbkRhdGE6IHt9LFxyXG59O1xyXG5cclxuZXhwb3J0IGNvbnN0IExPR19JTl9SRVFVRVNUID0gXCJMT0dfSU5fUkVRVUVTVFwiO1xyXG5leHBvcnQgY29uc3QgTE9HX0lOX1NVQ0NFU1MgPSBcIkxPR19JTl9TVUNDRVNTXCI7XHJcbmV4cG9ydCBjb25zdCBMT0dfSU5fRkFJTFVSRSA9IFwiTE9HX0lOX0ZBSUxVUkVcIjtcclxuXHJcbmV4cG9ydCBjb25zdCBMT0dfT1VUX1JFUVVFU1QgPSBcIkxPR19PVVRfUkVRVUVTVFwiO1xyXG5leHBvcnQgY29uc3QgTE9HX09VVF9TVUNDRVNTID0gXCJMT0dfT1VUX1NVQ0NFU1NcIjtcclxuZXhwb3J0IGNvbnN0IExPR19PVVRfRkFJTFVSRSA9IFwiTE9HX09VVF9GQUlMVVJFXCI7XHJcblxyXG5leHBvcnQgY29uc3QgU0lHTl9VUF9SRVFVRVNUID0gXCJTSUdOX1VQX1JFUVVFU1RcIjtcclxuZXhwb3J0IGNvbnN0IFNJR05fVVBfU1VDQ0VTUyA9IFwiU0lHTl9VUF9TVUNDRVNTXCI7XHJcbmV4cG9ydCBjb25zdCBTSUdOX1VQX0ZBSUxVUkUgPSBcIlNJR05fVVBfRkFJTFVSRVwiO1xyXG5cclxuZXhwb3J0IGNvbnN0IENIQU5HRV9OSUNLTkFNRV9SRVFVRVNUID0gXCJDSEFOR0VfTklDS05BTUVfUkVRVUVTVFwiO1xyXG5leHBvcnQgY29uc3QgQ0hBTkdFX05JQ0tOQU1FX1NVQ0NFU1MgPSBcIkNIQU5HRV9OSUNLTkFNRV9TVUNDRVNTXCI7XHJcbmV4cG9ydCBjb25zdCBDSEFOR0VfTklDS05BTUVfRkFJTFVSRSA9IFwiQ0hBTkdFX05JQ0tOQU1FX0ZBSUxVUkVcIjtcclxuXHJcbmV4cG9ydCBjb25zdCBGT0xMT1dfUkVRVUVTVCA9IFwiRk9MTE9XX1JFUVVFU1RcIjtcclxuZXhwb3J0IGNvbnN0IEZPTExPV19TVUNDRVNTID0gXCJGT0xMT1dfU1VDQ0VTU1wiO1xyXG5leHBvcnQgY29uc3QgRk9MTE9XX0ZBSUxVUkUgPSBcIkZPTExPV19GQUlMVVJFXCI7XHJcblxyXG5leHBvcnQgY29uc3QgVU5GT0xMT1dfUkVRVUVTVCA9IFwiVU5GT0xMT1dfUkVRVUVTVFwiO1xyXG5leHBvcnQgY29uc3QgVU5GT0xMT1dfU1VDQ0VTUyA9IFwiVU5GT0xMT1dfU1VDQ0VTU1wiO1xyXG5leHBvcnQgY29uc3QgVU5GT0xMT1dfRkFJTFVSRSA9IFwiVU5GT0xMT1dfRkFJTFVSRVwiO1xyXG5cclxuZXhwb3J0IGNvbnN0IEFERF9QT1NUX1RPX01FID0gXCJBRERfUE9TVF9UT19NRVwiO1xyXG5leHBvcnQgY29uc3QgUkVNT1ZFX1BPU1RfT0ZfTUUgPSBcIlJFTU9WRV9QT1NUX09GX01FXCI7XHJcblxyXG5jb25zdCBkdW1teVVzZXIgPSAoZGF0YSkgPT4gKHtcclxuICAuLi5kYXRhLFxyXG4gIG5pY2tuYW1lOiBcIuuNsO2UvOyViFwiLFxyXG4gIGlkOiAxLFxyXG4gIFBvc3RzOiBbeyBpZDogMSB9XSxcclxuICBGb2xsb3dpbmdzOiBbXHJcbiAgICB7IG5pY2tuYW1lOiBcImRlZmlhblwiIH0sXHJcbiAgICB7IG5pY2tuYW1lOiBcImtpbVwiIH0sXHJcbiAgICB7IG5pY2tuYW1lOiBcImhja1wiIH0sXHJcbiAgXSxcclxuICBGb2xsb3dlcnM6IFt7IG5pY2tuYW1lOiBcImRlZmlhblwiIH0sIHsgbmlja25hbWU6IFwia2ltXCIgfSwgeyBuaWNrbmFtZTogXCJoY2tcIiB9XSxcclxufSk7XHJcblxyXG5leHBvcnQgY29uc3QgbG9naW5SZXF1ZXN0QWN0aW9uID0gKGRhdGEpID0+IHtcclxuICByZXR1cm4ge1xyXG4gICAgdHlwZTogTE9HX0lOX1JFUVVFU1QsXHJcbiAgICBkYXRhLFxyXG4gIH07XHJcbn07XHJcblxyXG5leHBvcnQgY29uc3QgbG9nb3V0UmVxdWVzdEFjdGlvbiA9ICgpID0+IHtcclxuICByZXR1cm4ge1xyXG4gICAgdHlwZTogTE9HX09VVF9SRVFVRVNULFxyXG4gIH07XHJcbn07XHJcblxyXG5jb25zdCByZWR1Y2VyID0gKHN0YXRlID0gaW5pdGlhbFN0YXRlLCBhY3Rpb24pID0+IHtcclxuICByZXR1cm4gcHJvZHVjZShzdGF0ZSwgKGRyYWZ0KSA9PiB7XHJcbiAgICBzd2l0Y2ggKGFjdGlvbi50eXBlKSB7XHJcbiAgICAgIGNhc2UgRk9MTE9XX1JFUVVFU1Q6XHJcbiAgICAgICAgZHJhZnQuZm9sbG93TG9hZGluZyA9IHRydWU7XHJcbiAgICAgICAgZHJhZnQuZm9sbG93RXJyb3IgPSBudWxsO1xyXG4gICAgICAgIGRyYWZ0LmZvbGxvd0RvbmUgPSBmYWxzZTtcclxuICAgICAgICBicmVhaztcclxuICAgICAgY2FzZSBGT0xMT1dfU1VDQ0VTUzpcclxuICAgICAgICBkcmFmdC5mb2xsb3dMb2FkaW5nID0gZmFsc2U7XHJcbiAgICAgICAgZHJhZnQuZm9sbG93RG9uZSA9IHRydWU7XHJcbiAgICAgICAgZHJhZnQubWUuRm9sbG93aW5ncy5wdXNoKHsgaWQ6IGFjdGlvbi5kYXRhIH0pO1xyXG4gICAgICAgIGJyZWFrO1xyXG4gICAgICBjYXNlIEZPTExPV19GQUlMVVJFOlxyXG4gICAgICAgIGRyYWZ0LmZvbGxvd0xvYWRpbmcgPSBmYWxzZTtcclxuICAgICAgICBkcmFmdC5mb2xsb3dFcnJvciA9IGFjdGlvbi5lcnJvcjtcclxuICAgICAgICBicmVhaztcclxuICAgICAgY2FzZSBVTkZPTExPV19SRVFVRVNUOlxyXG4gICAgICAgIGRyYWZ0LnVuZm9sbG93TG9hZGluZyA9IHRydWU7XHJcbiAgICAgICAgZHJhZnQudW5mb2xsb3dFcnJvciA9IG51bGw7XHJcbiAgICAgICAgZHJhZnQudW5mb2xsb3dEb25lID0gZmFsc2U7XHJcbiAgICAgICAgYnJlYWs7XHJcbiAgICAgIGNhc2UgVU5GT0xMT1dfU1VDQ0VTUzpcclxuICAgICAgICBkcmFmdC51bmZvbGxvd0xvYWRpbmcgPSBmYWxzZTtcclxuICAgICAgICBkcmFmdC51bmZvbGxvd0RvbmUgPSB0cnVlO1xyXG4gICAgICAgIGRyYWZ0Lm1lLkZvbGxvd2luZ3MgPSBkcmFmdC5tZS5Gb2xsb3dpbmdzLmZpbHRlcihcclxuICAgICAgICAgICh2KSA9PiB2LmlkICE9PSBhY3Rpb24uZGF0YVxyXG4gICAgICAgICk7XHJcbiAgICAgICAgYnJlYWs7XHJcbiAgICAgIGNhc2UgVU5GT0xMT1dfRkFJTFVSRTpcclxuICAgICAgICBkcmFmdC51bmZvbGxvd0xvYWRpbmcgPSBmYWxzZTtcclxuICAgICAgICBkcmFmdC51bmZvbGxvd0Vycm9yID0gYWN0aW9uLmVycm9yO1xyXG4gICAgICAgIGJyZWFrO1xyXG4gICAgICBjYXNlIExPR19JTl9SRVFVRVNUOlxyXG4gICAgICAgIGRyYWZ0LmlzTG9nZ2luZ0luID0gdHJ1ZTtcclxuICAgICAgICBkcmFmdC5pc0xvZ0luRXJyb3IgPSBudWxsO1xyXG4gICAgICAgIGRyYWZ0LmlzTG9nZ2VkSW4gPSBmYWxzZTtcclxuICAgICAgICBicmVhaztcclxuICAgICAgY2FzZSBMT0dfSU5fU1VDQ0VTUzpcclxuICAgICAgICBkcmFmdC5pc0xvZ2dpbmdJbiA9IGZhbHNlO1xyXG4gICAgICAgIGRyYWZ0LmlzTG9nZ2VkSW4gPSB0cnVlO1xyXG4gICAgICAgIGRyYWZ0Lm1lID0gYWN0aW9uLmRhdGE7XHJcbiAgICAgICAgYnJlYWs7XHJcbiAgICAgIGNhc2UgTE9HX0lOX0ZBSUxVUkU6XHJcbiAgICAgICAgZHJhZnQuaXNMb2dnaW5nSW4gPSBmYWxzZTtcclxuICAgICAgICBkcmFmdC5pc0xvZ0luRXJyb3IgPSBhY3Rpb24uZXJyb3I7XHJcbiAgICAgICAgYnJlYWs7XHJcbiAgICAgIGNhc2UgTE9HX09VVF9SRVFVRVNUOlxyXG4gICAgICAgIGRyYWZ0LmlzTG9nZ2luZ091dCA9IHRydWU7XHJcbiAgICAgICAgZHJhZnQuaXNMb2dnZWRPdXQgPSBmYWxzZTtcclxuICAgICAgICBkcmFmdC5pc0xvZ091dEVycm9yID0gbnVsbDtcclxuICAgICAgICBicmVhaztcclxuICAgICAgY2FzZSBMT0dfT1VUX1NVQ0NFU1M6XHJcbiAgICAgICAgZHJhZnQuaXNMb2dnaW5nT3V0ID0gZmFsc2U7XHJcbiAgICAgICAgZHJhZnQuaXNMb2dnZWRPdXQgPSB0cnVlO1xyXG4gICAgICAgIGJyZWFrO1xyXG4gICAgICBjYXNlIExPR19PVVRfRkFJTFVSRTpcclxuICAgICAgICBkcmFmdC5pc0xvZ2dpbmdPdXQgPSBmYWxzZTtcclxuICAgICAgICBkcmFmdC5pc0xvZ091dEVycm9yID0gYWN0aW9uLmVycm9yO1xyXG4gICAgICAgIGJyZWFrO1xyXG4gICAgICBjYXNlIFNJR05fVVBfUkVRVUVTVDpcclxuICAgICAgICBkcmFmdC5pc1NpZ25pbmdVcCA9IHRydWU7XHJcbiAgICAgICAgZHJhZnQuaXNTaWduZWRVcCA9IGZhbHNlO1xyXG4gICAgICAgIGRyYWZ0LmlzU2lnblVwRXJyb3IgPSBudWxsO1xyXG4gICAgICAgIGJyZWFrO1xyXG4gICAgICBjYXNlIFNJR05fVVBfU1VDQ0VTUzpcclxuICAgICAgICBkcmFmdC5pc1NpZ25pbmdVcCA9IGZhbHNlO1xyXG4gICAgICAgIGRyYWZ0LmlzU2lnbmVkVXAgPSB0cnVlO1xyXG4gICAgICAgIGJyZWFrO1xyXG4gICAgICBjYXNlIFNJR05fVVBfRkFJTFVSRTpcclxuICAgICAgICBkcmFmdC5pc1NpZ25pbmdVcCA9IGZhbHNlO1xyXG4gICAgICAgIGRyYWZ0LmlzU2lnblVwRXJyb3IgPSBhY3Rpb24uZXJyb3I7XHJcbiAgICAgICAgYnJlYWs7XHJcbiAgICAgIGNhc2UgQ0hBTkdFX05JQ0tOQU1FX1JFUVVFU1Q6XHJcbiAgICAgICAgZHJhZnQuY2hhbmdlTmlja25hbWVMb2FkaW5nID0gdHJ1ZTtcclxuICAgICAgICBkcmFmdC5jaGFuZ2VOaWNrbmFtZURvbmUgPSBmYWxzZTtcclxuICAgICAgICBkcmFmdC5jaGFuZ2VOaWNrbmFtZUVycm9yID0gbnVsbDtcclxuICAgICAgICBicmVhaztcclxuICAgICAgY2FzZSBDSEFOR0VfTklDS05BTUVfU1VDQ0VTUzpcclxuICAgICAgICBkcmFmdC5jaGFuZ2VOaWNrbmFtZUxvYWRpbmcgPSBmYWxzZTtcclxuICAgICAgICBkcmFmdC5jaGFuZ2VOaWNrbmFtZURvbmUgPSB0cnVlO1xyXG4gICAgICAgIGJyZWFrO1xyXG4gICAgICBjYXNlIENIQU5HRV9OSUNLTkFNRV9GQUlMVVJFOlxyXG4gICAgICAgIGRyYWZ0LmNoYW5nZU5pY2tuYW1lTG9hZGluZyA9IGZhbHNlO1xyXG4gICAgICAgIGRyYWZ0LmNoYW5nZU5pY2tuYW1lRXJyb3IgPSBhY3Rpb24uZXJyb3I7XHJcbiAgICAgICAgYnJlYWs7XHJcbiAgICAgIGNhc2UgQUREX1BPU1RfVE9fTUU6XHJcbiAgICAgICAgZHJhZnQubWUuUG9zdHMudW5zaGlmdCh7IGlkOiBhY3Rpb24uZGF0YSB9KTtcclxuICAgICAgICBicmVhaztcclxuICAgICAgLy8gcmV0dXJuIHtcclxuICAgICAgLy8gICAgIC4uLnN0YXRlLFxyXG4gICAgICAvLyAgICAgbWU6IHtcclxuICAgICAgLy8gICAgICAgICAuLi5zdGF0ZS5tZSxcclxuICAgICAgLy8gICAgICAgICBQb3N0czogW3sgaWQ6IGFjdGlvbi5kYXRhIH0sIC4uLnN0YXRlLm1lLlBvc3RzXSxcclxuICAgICAgLy8gICAgIH0sXHJcbiAgICAgIC8vIH07XHJcbiAgICAgIGNhc2UgUkVNT1ZFX1BPU1RfT0ZfTUU6XHJcbiAgICAgICAgZHJhZnQubWUuUG9zdHMgPSBkcmFmdC5tZS5Qb3N0cy5maWx0ZXIoKHYpID0+IHYuaWQgIT09IGFjdGlvbi5kYXRhKTtcclxuICAgICAgICBicmVhaztcclxuICAgICAgLy8gcmV0dXJuIHtcclxuICAgICAgLy8gICAgIC4uLnN0YXRlLFxyXG4gICAgICAvLyAgICAgbWU6IHtcclxuICAgICAgLy8gICAgICAgICAuLi5zdGF0ZS5tZSxcclxuICAgICAgLy8gICAgICAgICBQb3N0czogc3RhdGUubWUuUG9zdHMuZmlsdGVyKCh2KSA9PiB2LmlkICE9PSBhY3Rpb24uZGF0YSksXHJcbiAgICAgIC8vICAgICB9LFxyXG4gICAgICAvLyB9O1xyXG4gICAgICBkZWZhdWx0OlxyXG4gICAgICAgIGJyZWFrO1xyXG4gICAgfVxyXG4gIH0pO1xyXG59O1xyXG5cclxuZXhwb3J0IGRlZmF1bHQgcmVkdWNlcjtcclxuIiwiaW1wb3J0IHsgYWxsLCBmb3JrIH0gZnJvbSBcInJlZHV4LXNhZ2EvZWZmZWN0c1wiO1xyXG5pbXBvcnQgYXhpb3MgZnJvbSBcImF4aW9zXCI7XHJcblxyXG5pbXBvcnQgcG9zdFNhZ2EgZnJvbSBcIi4vcG9zdFwiO1xyXG5pbXBvcnQgdXNlclNhZ2EgZnJvbSBcIi4vdXNlclwiO1xyXG5cclxuYXhpb3MuZGVmYXVsdHMuYmFzZVVSTCA9IFwiaHR0cDovL2xvY2FsaG9zdDozMDY1XCI7XHJcblxyXG5leHBvcnQgZGVmYXVsdCBmdW5jdGlvbiogcm9vdFNhZ2EoKSB7XHJcbiAgeWllbGQgYWxsKFtcclxuICAgIC8vIGFsbOydgCDrj5nsi5zsl5Ag7Iuk7ZaJXHJcbiAgICBmb3JrKHBvc3RTYWdhKSwgLy9jYWxsXHJcbiAgICBmb3JrKHVzZXJTYWdhKSxcclxuICBdKTtcclxufVxyXG4iLCJpbXBvcnQge1xyXG4gIGFsbCxcclxuICBmb3JrLFxyXG4gIGNhbGwsXHJcbiAgcHV0LFxyXG4gIHRha2VFdmVyeSxcclxuICB0YWtlTGF0ZXN0LFxyXG4gIGRlbGF5LFxyXG4gIHRocm90dGxlLFxyXG59IGZyb20gXCJyZWR1eC1zYWdhL2VmZmVjdHNcIjtcclxuaW1wb3J0IHtcclxuICBMT0FEX1BPU1RTX1JFUVVFU1QsXHJcbiAgTE9BRF9QT1NUU19TVUNDRVNTLFxyXG4gIExPQURfUE9TVFNfRkFJTFVSRSxcclxuICBBRERfUE9TVF9SRVFVRVNULFxyXG4gIEFERF9QT1NUX1NVQ0NFU1MsXHJcbiAgQUREX1BPU1RfRkFJTFVSRSxcclxuICBSRU1PVkVfUE9TVF9SRVFVRVNULFxyXG4gIFJFTU9WRV9QT1NUX1NVQ0NFU1MsXHJcbiAgUkVNT1ZFX1BPU1RfRkFJTFVSRSxcclxuICBBRERfQ09NTUVOVF9SRVFVRVNULFxyXG4gIEFERF9DT01NRU5UX1NVQ0NFU1MsXHJcbiAgQUREX0NPTU1FTlRfRkFJTFVSRSxcclxuICBnZW5lcmF0ZUR1bW15UG9zdCxcclxufSBmcm9tIFwiLi4vcmVkdWNlcnMvcG9zdFwiO1xyXG5cclxuaW1wb3J0IHsgQUREX1BPU1RfVE9fTUUsIFJFTU9WRV9QT1NUX09GX01FIH0gZnJvbSBcIi4uL3JlZHVjZXJzL3VzZXJcIjtcclxuaW1wb3J0IHNob3J0SWQgZnJvbSBcInNob3J0aWRcIjtcclxuXHJcbmltcG9ydCBheGlvcyBmcm9tIFwiYXhpb3NcIjtcclxuXHJcbmZ1bmN0aW9uIGxvYWRQb3N0c0FQSShkYXRhKSB7XHJcbiAgcmV0dXJuIGF4aW9zLnBvc3QoXCIvYXBpL2xvYWRQb3N0c1wiLCBkYXRhKTtcclxufVxyXG5cclxuZnVuY3Rpb24qIGxvYWRQb3N0cyhhY3Rpb24pIHtcclxuICB0cnkge1xyXG4gICAgLy8gY29uc3QgcmVzdWx0ID0geWllbGQgY2FsbChhZGRQb3N0QVBJLCBhY3Rpb24uZGF0YSk7XHJcbiAgICB5aWVsZCBkZWxheSgxMDAwKTtcclxuICAgIGNvbnN0IGlkID0gc2hvcnRJZC5nZW5lcmF0ZSgpO1xyXG4gICAgeWllbGQgcHV0KHtcclxuICAgICAgdHlwZTogTE9BRF9QT1NUU19TVUNDRVNTLFxyXG4gICAgICBkYXRhOiBnZW5lcmF0ZUR1bW15UG9zdCgxMCksXHJcbiAgICB9KTtcclxuICB9IGNhdGNoIChlcnIpIHtcclxuICAgIHlpZWxkIHB1dCh7XHJcbiAgICAgIHR5cGU6IExPQURfUE9TVFNfRkFJTFVSRSxcclxuICAgICAgZGF0YTogZXJyLnJlc3BvbnNlLmRhdGEsXHJcbiAgICB9KTtcclxuICB9XHJcbn1cclxuXHJcbmZ1bmN0aW9uIGFkZFBvc3RBUEkoZGF0YSkge1xyXG4gIHJldHVybiBheGlvcy5wb3N0KFwiL2FwaS9hZGRQb3N0XCIsIGRhdGEpO1xyXG59XHJcblxyXG5mdW5jdGlvbiogYWRkUG9zdChhY3Rpb24pIHtcclxuICB0cnkge1xyXG4gICAgLy8gY29uc3QgcmVzdWx0ID0geWllbGQgY2FsbChhZGRQb3N0QVBJLCBhY3Rpb24uZGF0YSk7XHJcbiAgICB5aWVsZCBkZWxheSgxMDAwKTtcclxuICAgIGNvbnN0IGlkID0gc2hvcnRJZC5nZW5lcmF0ZSgpO1xyXG4gICAgeWllbGQgcHV0KHtcclxuICAgICAgdHlwZTogQUREX1BPU1RfU1VDQ0VTUyxcclxuICAgICAgZGF0YToge1xyXG4gICAgICAgIGlkLFxyXG4gICAgICAgIGNvbnRlbnQ6IGFjdGlvbi5kYXRhLFxyXG4gICAgICB9LFxyXG4gICAgfSk7XHJcbiAgICB5aWVsZCBwdXQoe1xyXG4gICAgICB0eXBlOiBBRERfUE9TVF9UT19NRSxcclxuICAgICAgZGF0YTogaWQsXHJcbiAgICB9KTtcclxuICB9IGNhdGNoIChlcnIpIHtcclxuICAgIHlpZWxkIHB1dCh7XHJcbiAgICAgIHR5cGU6IEFERF9QT1NUX0ZBSUxVUkUsXHJcbiAgICAgIGRhdGE6IGVyci5yZXNwb25zZS5kYXRhLFxyXG4gICAgfSk7XHJcbiAgfVxyXG59XHJcblxyXG5mdW5jdGlvbiByZW1vdmVQb3N0QVBJKGRhdGEpIHtcclxuICByZXR1cm4gYXhpb3MuZGVsZXRlKFwiL2FwaS9wb3N0XCIsIGRhdGEpO1xyXG59XHJcblxyXG5mdW5jdGlvbiogcmVtb3ZlUG9zdChhY3Rpb24pIHtcclxuICB0cnkge1xyXG4gICAgLy8gY29uc3QgcmVzdWx0ID0geWllbGQgY2FsbChhZGRQb3N0QVBJLCBhY3Rpb24uZGF0YSk7XHJcbiAgICB5aWVsZCBkZWxheSgxMDAwKTtcclxuICAgIHlpZWxkIHB1dCh7XHJcbiAgICAgIHR5cGU6IFJFTU9WRV9QT1NUX1NVQ0NFU1MsXHJcbiAgICAgIGRhdGE6IGFjdGlvbi5kYXRhLFxyXG4gICAgfSk7XHJcbiAgICB5aWVsZCBwdXQoe1xyXG4gICAgICB0eXBlOiBSRU1PVkVfUE9TVF9PRl9NRSxcclxuICAgICAgZGF0YTogYWN0aW9uLmRhdGEsXHJcbiAgICB9KTtcclxuICB9IGNhdGNoIChlcnIpIHtcclxuICAgIHlpZWxkIHB1dCh7XHJcbiAgICAgIHR5cGU6IFJFTU9WRV9QT1NUX0ZBSUxVUkUsXHJcbiAgICAgIGRhdGE6IGVyci5yZXNwb25zZS5kYXRhLFxyXG4gICAgfSk7XHJcbiAgfVxyXG59XHJcblxyXG5mdW5jdGlvbiBhZGRDb21tZW50QVBJKGRhdGEpIHtcclxuICByZXR1cm4gYXhpb3MucG9zdChgL2FwaS9wb3N0LyR7ZGF0YS5wb3N0SWR9L2NvbW1lbnRgLCBkYXRhKTtcclxufVxyXG5cclxuZnVuY3Rpb24qIGFkZENvbW1lbnQoYWN0aW9uKSB7XHJcbiAgdHJ5IHtcclxuICAgIC8vIGNvbnN0IHJlc3VsdCA9IHlpZWxkIGNhbGwoYWRkUG9zdEFQSSwgYWN0aW9uLmRhdGEpO1xyXG4gICAgeWllbGQgZGVsYXkoMTAwMCk7XHJcbiAgICB5aWVsZCBwdXQoe1xyXG4gICAgICB0eXBlOiBBRERfQ09NTUVOVF9TVUNDRVNTLFxyXG4gICAgICBkYXRhOiBhY3Rpb24uZGF0YSxcclxuICAgIH0pO1xyXG4gIH0gY2F0Y2ggKGVycikge1xyXG4gICAgeWllbGQgcHV0KHtcclxuICAgICAgdHlwZTogQUREX0NPTU1FTlRfRkFJTFVSRSxcclxuICAgICAgZGF0YTogZXJyLnJlc3BvbnNlLmRhdGEsXHJcbiAgICB9KTtcclxuICB9XHJcbn1cclxuXHJcbmZ1bmN0aW9uKiB3YXRjaExvYWRQb3N0cygpIHtcclxuICB5aWVsZCB0aHJvdHRsZSg1MDAwLCBMT0FEX1BPU1RTX1JFUVVFU1QsIGxvYWRQb3N0cyk7XHJcbn1cclxuXHJcbmZ1bmN0aW9uKiB3YXRjaEFkZFBvc3QoKSB7XHJcbiAgeWllbGQgdGFrZUxhdGVzdChBRERfUE9TVF9SRVFVRVNULCBhZGRQb3N0KTtcclxufVxyXG5cclxuZnVuY3Rpb24qIHdhdGNoUmVtb3ZlUG9zdCgpIHtcclxuICB5aWVsZCB0YWtlTGF0ZXN0KFJFTU9WRV9QT1NUX1JFUVVFU1QsIHJlbW92ZVBvc3QpO1xyXG59XHJcblxyXG5mdW5jdGlvbiogd2F0Y2hBZGRDb21tZW50KCkge1xyXG4gIHlpZWxkIHRha2VMYXRlc3QoQUREX0NPTU1FTlRfUkVRVUVTVCwgYWRkQ29tbWVudCk7XHJcbn1cclxuXHJcbmV4cG9ydCBkZWZhdWx0IGZ1bmN0aW9uKiBwb3N0U2FnYSgpIHtcclxuICB5aWVsZCBhbGwoW1xyXG4gICAgZm9yayh3YXRjaExvYWRQb3N0cyksXHJcbiAgICBmb3JrKHdhdGNoQWRkUG9zdCksXHJcbiAgICBmb3JrKHdhdGNoUmVtb3ZlUG9zdCksXHJcbiAgICBmb3JrKHdhdGNoQWRkQ29tbWVudCksXHJcbiAgXSk7XHJcbn1cclxuIiwiaW1wb3J0IHtcclxuICBhbGwsXHJcbiAgZm9yayxcclxuICBjYWxsLFxyXG4gIHB1dCxcclxuICB0YWtlRXZlcnksXHJcbiAgdGFrZUxhdGVzdCxcclxuICBkZWxheSxcclxufSBmcm9tIFwicmVkdXgtc2FnYS9lZmZlY3RzXCI7XHJcbmltcG9ydCBheGlvcyBmcm9tIFwiYXhpb3NcIjtcclxuaW1wb3J0IHtcclxuICBTSUdOX1VQX1JFUVVFU1QsXHJcbiAgU0lHTl9VUF9TVUNDRVNTLFxyXG4gIFNJR05fVVBfRkFJTFVSRSxcclxuICBMT0dfSU5fUkVRVUVTVCxcclxuICBMT0dfSU5fU1VDQ0VTUyxcclxuICBMT0dfSU5fRkFJTFVSRSxcclxuICBMT0dfT1VUX1JFUVVFU1QsXHJcbiAgTE9HX09VVF9TVUNDRVNTLFxyXG4gIExPR19PVVRfRkFJTFVSRSxcclxuICBGT0xMT1dfUkVRVUVTVCxcclxuICBGT0xMT1dfU1VDQ0VTUyxcclxuICBGT0xMT1dfRkFJTFVSRSxcclxuICBVTkZPTExPV19SRVFVRVNULFxyXG4gIFVORk9MTE9XX1NVQ0NFU1MsXHJcbiAgVU5GT0xMT1dfRkFJTFVSRSxcclxufSBmcm9tIFwiLi4vcmVkdWNlcnMvdXNlclwiO1xyXG5cclxuY29uc3QgbCA9IGxvZ0luKHsgdHlwZTogTE9HX0lOX1JFUVVFU1QsIGRhdGE6IHsgaWQ6IFwiZGVmaWFuQGdtYWlsLmNvbVwiIH0gfSk7XHJcbmwubmV4dCgpO1xyXG5cclxuZnVuY3Rpb24gbG9nSW5BUEkoZGF0YSkge1xyXG4gIHJldHVybiBheGlvcy5wb3N0KFwiL3VzZXIvbG9naW5cIiwgZGF0YSk7XHJcbn1cclxuXHJcbmZ1bmN0aW9uKiBsb2dJbihhY3Rpb24pIHtcclxuICB0cnkge1xyXG4gICAgLy9mb3JrIOu5hOuPmeq4sCDtmLjstpwgeWllbGTripQgYXdhaXQg7Jet7ZWg7J24642wLCBmb3Jr7JeQ7ISc64qUIOq3uOugh+yngCDslYrsnYwgY2FsbOyXkOyEnOunjFxyXG4gICAgLy9jYWxsIOuPmeq4sCDtmLjstpxcclxuICAgIGNvbnN0IHJlc3VsdCA9IHlpZWxkIGNhbGwobG9nSW5BUEksIGFjdGlvbi5kYXRhKTtcclxuICAgIHlpZWxkIHB1dCh7XHJcbiAgICAgIHR5cGU6IExPR19JTl9TVUNDRVNTLFxyXG4gICAgICBkYXRhOiByZXN1bHQuZGF0YSxcclxuICAgIH0pO1xyXG4gIH0gY2F0Y2ggKGVycikge1xyXG4gICAgeWllbGQgcHV0KHtcclxuICAgICAgdHlwZTogTE9HX0lOX0ZBSUxVUkUsXHJcbiAgICAgIGVycm9yOiBlcnIucmVzcG9uc2UuZGF0YSxcclxuICAgIH0pO1xyXG4gIH1cclxufVxyXG5cclxuZnVuY3Rpb24gbG9nT3V0QVBJKCkge1xyXG4gIHJldHVybiBheGlvcy5wb3N0KFwiL3VzZXIvbG9nb3V0XCIpO1xyXG59XHJcblxyXG5mdW5jdGlvbiogbG9nT3V0KCkge1xyXG4gIHRyeSB7XHJcbiAgICAvLyBjb25zdCByZXN1bHQgPSB5aWVsZCBjYWxsKGxvZ091dEFQSSk7XHJcbiAgICB5aWVsZCBkZWxheSgxMDAwKTtcclxuICAgIHlpZWxkIHB1dCh7XHJcbiAgICAgIHR5cGU6IExPR19PVVRfU1VDQ0VTUyxcclxuICAgIH0pO1xyXG4gIH0gY2F0Y2ggKGVycikge1xyXG4gICAgeWllbGQgcHV0KHtcclxuICAgICAgdHlwZTogTE9HX09VVF9GQUlMVVJFLFxyXG4gICAgICBkYXRhOiBlcnIucmVzcG9uc2UuZGF0YSxcclxuICAgIH0pO1xyXG4gIH1cclxufVxyXG5cclxuZnVuY3Rpb24gU2lnblVwQVBJKGRhdGEpIHtcclxuICByZXR1cm4gYXhpb3MucG9zdChcIi91c2VyXCIsIGRhdGEpO1xyXG59XHJcblxyXG5mdW5jdGlvbiogU2lnblVwKGFjdGlvbikge1xyXG4gIHRyeSB7XHJcbiAgICBjb25zdCByZXN1bHQgPSB5aWVsZCBjYWxsKFNpZ25VcEFQSSwgYWN0aW9uLmRhdGEpO1xyXG4gICAgY29uc29sZS5sb2cocmVzdWx0KTtcclxuICAgIHlpZWxkIGRlbGF5KDEwMDApO1xyXG4gICAgeWllbGQgcHV0KHtcclxuICAgICAgdHlwZTogU0lHTl9VUF9TVUNDRVNTLFxyXG4gICAgfSk7XHJcbiAgfSBjYXRjaCAoZXJyKSB7XHJcbiAgICB5aWVsZCBwdXQoe1xyXG4gICAgICB0eXBlOiBTSUdOX1VQX0ZBSUxVUkUsXHJcbiAgICAgIGVycm9yOiBlcnIucmVzcG9uc2UuZGF0YSxcclxuICAgIH0pO1xyXG4gIH1cclxufVxyXG5cclxuZnVuY3Rpb24gZm9sbG93QVBJKCkge1xyXG4gIHJldHVybiBheGlvcy5wb3N0KFwiL2FwaS9Gb2xsb3dcIik7XHJcbn1cclxuXHJcbmZ1bmN0aW9uKiBmb2xsb3coYWN0aW9uKSB7XHJcbiAgdHJ5IHtcclxuICAgIC8vIGNvbnN0IHJlc3VsdCA9IHlpZWxkIGNhbGwoU2lnblVwQVBJKTtcclxuICAgIHlpZWxkIGRlbGF5KDEwMDApO1xyXG4gICAgeWllbGQgcHV0KHtcclxuICAgICAgdHlwZTogRk9MTE9XX1NVQ0NFU1MsXHJcbiAgICAgIGRhdGE6IGFjdGlvbi5kYXRhLFxyXG4gICAgfSk7XHJcbiAgfSBjYXRjaCAoZXJyKSB7XHJcbiAgICB5aWVsZCBwdXQoe1xyXG4gICAgICB0eXBlOiBGT0xMT1dfRkFJTFVSRSxcclxuICAgICAgZGF0YTogZXJyLnJlc3BvbnNlLmRhdGEsXHJcbiAgICB9KTtcclxuICB9XHJcbn1cclxuXHJcbmZ1bmN0aW9uIHVuZm9sbG93QVBJKCkge1xyXG4gIHJldHVybiBheGlvcy5wb3N0KFwiL2FwaS91bmZvbGxvd1wiKTtcclxufVxyXG5cclxuZnVuY3Rpb24qIHVuZm9sbG93KGFjdGlvbikge1xyXG4gIHRyeSB7XHJcbiAgICAvLyBjb25zdCByZXN1bHQgPSB5aWVsZCBjYWxsKFNpZ25VcEFQSSk7XHJcbiAgICB5aWVsZCBkZWxheSgxMDAwKTtcclxuICAgIHlpZWxkIHB1dCh7XHJcbiAgICAgIHR5cGU6IFVORk9MTE9XX1NVQ0NFU1MsXHJcbiAgICAgIGRhdGE6IGFjdGlvbi5kYXRhLFxyXG4gICAgfSk7XHJcbiAgfSBjYXRjaCAoZXJyKSB7XHJcbiAgICB5aWVsZCBwdXQoe1xyXG4gICAgICB0eXBlOiBVTkZPTExPV19GQUlMVVJFLFxyXG4gICAgICBkYXRhOiBlcnIucmVzcG9uc2UuZGF0YSxcclxuICAgIH0pO1xyXG4gIH1cclxufVxyXG5cclxuZnVuY3Rpb24qIHdhdGNoRm9sbG93KCkge1xyXG4gIHlpZWxkIHRha2VMYXRlc3QoRk9MTE9XX1JFUVVFU1QsIGZvbGxvdyk7XHJcbn1cclxuXHJcbmZ1bmN0aW9uKiB3YXRjaFVuZm9sbG93KCkge1xyXG4gIHlpZWxkIHRha2VMYXRlc3QoVU5GT0xMT1dfUkVRVUVTVCwgdW5mb2xsb3cpO1xyXG59XHJcblxyXG5mdW5jdGlvbiogd2F0Y2hMb2dJbigpIHtcclxuICB5aWVsZCB0YWtlTGF0ZXN0KExPR19JTl9SRVFVRVNULCBsb2dJbik7XHJcbn1cclxuXHJcbmZ1bmN0aW9uKiB3YXRjaExvZ091dCgpIHtcclxuICB5aWVsZCB0YWtlTGF0ZXN0KExPR19PVVRfUkVRVUVTVCwgbG9nT3V0KTtcclxufVxyXG5cclxuZnVuY3Rpb24qIHdhdGNoU2lnblVwKCkge1xyXG4gIHlpZWxkIHRha2VMYXRlc3QoU0lHTl9VUF9SRVFVRVNULCBTaWduVXApO1xyXG59XHJcblxyXG5leHBvcnQgZGVmYXVsdCBmdW5jdGlvbiogdXNlclNhZ2EoKSB7XHJcbiAgeWllbGQgYWxsKFtcclxuICAgIGZvcmsod2F0Y2hGb2xsb3cpLFxyXG4gICAgZm9yayh3YXRjaFVuZm9sbG93KSxcclxuICAgIGZvcmsod2F0Y2hMb2dJbiksXHJcbiAgICBmb3JrKHdhdGNoTG9nT3V0KSxcclxuICAgIGZvcmsod2F0Y2hTaWduVXApLFxyXG4gIF0pO1xyXG59XHJcbiIsImNvbnN0IHsgY3JlYXRlV3JhcHBlciB9ID0gcmVxdWlyZSgnbmV4dC1yZWR1eC13cmFwcGVyJyk7XHJcbmltcG9ydCB7IGFwcGx5TWlkZGxld2FyZSwgY3JlYXRlU3RvcmUsIGNvbXBvc2UgfSBmcm9tICdyZWR1eCdcclxuaW1wb3J0IHsgY29tcG9zZVdpdGhEZXZUb29scyB9IGZyb20gJ3JlZHV4LWRldnRvb2xzLWV4dGVuc2lvbic7XHJcbmltcG9ydCBjcmVhdGVTYWdhTWlkZGxld2FyZSBmcm9tICdyZWR1eC1zYWdhJztcclxuaW1wb3J0IHJvb3RTYWdhIGZyb20gJy4uL3NhZ2FzJztcclxuXHJcbmltcG9ydCByZWR1Y2VyIGZyb20gJy4uL3JlZHVjZXJzJztcclxuXHJcblxyXG5jb25zdCBsb2dnZXJNaWRkbGV3YXJlID0gKHsgZGlzcGF0Y2gsIGdldFN0YXRlIH0pID0+IChuZXh0KSA9PiAoYWN0aW9uKSA9PiB7XHJcbiAgICBjb25zb2xlLmxvZyhhY3Rpb24pO1xyXG4gICAgcmV0dXJuIG5leHQoYWN0aW9uKTtcclxufVxyXG5cclxuY29uc3QgY29uZmlndXJlU3RvcmUgPSAoKSA9PiB7XHJcbiAgICBjb25zdCBzYWdhTWlkZGxld2FyZSA9IGNyZWF0ZVNhZ2FNaWRkbGV3YXJlKCk7XHJcbiAgICBjb25zdCBtaWRkbGV3YXJlcyA9IFtzYWdhTWlkZGxld2FyZSwgbG9nZ2VyTWlkZGxld2FyZV07XHJcbiAgICBjb25zdCBlbmhhbmNlciA9IHByb2Nlc3MuZW52Lk5PREVfRU5WID09PSAncHJvZHVjdGlvbidcclxuICAgICAgICA/IGNvbXBvc2UoYXBwbHlNaWRkbGV3YXJlKC4uLm1pZGRsZXdhcmVzKSlcclxuICAgICAgICA6IGNvbXBvc2VXaXRoRGV2VG9vbHMoYXBwbHlNaWRkbGV3YXJlKC4uLm1pZGRsZXdhcmVzKSlcclxuICAgIGNvbnN0IHN0b3JlID0gY3JlYXRlU3RvcmUocmVkdWNlciwgZW5oYW5jZXIpO1xyXG4gICAgc3RvcmUuc2FnYVRhc2sgPSBzYWdhTWlkZGxld2FyZS5ydW4ocm9vdFNhZ2EpO1xyXG4gICAgcmV0dXJuIHN0b3JlO1xyXG59O1xyXG5cclxuXHJcbmNvbnN0IHdyYXBwZXIgPSBjcmVhdGVXcmFwcGVyKGNvbmZpZ3VyZVN0b3JlLCB7XHJcbiAgICBkZWJ1ZzogcHJvY2Vzcy5lbnYuTk9ERV9FTlYgPT09ICdkZXZlbG9wbWVudCcsXHJcbn0pO1xyXG5cclxuZXhwb3J0IGRlZmF1bHQgd3JhcHBlcjsiLCJtb2R1bGUuZXhwb3J0cyA9IHJlcXVpcmUoXCJheGlvc1wiKTsiLCJtb2R1bGUuZXhwb3J0cyA9IHJlcXVpcmUoXCJmYWtlclwiKTsiLCJtb2R1bGUuZXhwb3J0cyA9IHJlcXVpcmUoXCJpbW1lclwiKTsiLCJtb2R1bGUuZXhwb3J0cyA9IHJlcXVpcmUoXCJuZXh0LXJlZHV4LXNhZ2FcIik7IiwibW9kdWxlLmV4cG9ydHMgPSByZXF1aXJlKFwibmV4dC1yZWR1eC13cmFwcGVyXCIpOyIsIm1vZHVsZS5leHBvcnRzID0gcmVxdWlyZShcIm5leHQvaGVhZFwiKTsiLCJtb2R1bGUuZXhwb3J0cyA9IHJlcXVpcmUoXCJwcm9wLXR5cGVzXCIpOyIsIm1vZHVsZS5leHBvcnRzID0gcmVxdWlyZShcInJlYWN0XCIpOyIsIm1vZHVsZS5leHBvcnRzID0gcmVxdWlyZShcInJlZHV4XCIpOyIsIm1vZHVsZS5leHBvcnRzID0gcmVxdWlyZShcInJlZHV4LWRldnRvb2xzLWV4dGVuc2lvblwiKTsiLCJtb2R1bGUuZXhwb3J0cyA9IHJlcXVpcmUoXCJyZWR1eC1zYWdhXCIpOyIsIm1vZHVsZS5leHBvcnRzID0gcmVxdWlyZShcInJlZHV4LXNhZ2EvZWZmZWN0c1wiKTsiLCJtb2R1bGUuZXhwb3J0cyA9IHJlcXVpcmUoXCJzaG9ydGlkXCIpOyJdLCJzb3VyY2VSb290IjoiIn0=