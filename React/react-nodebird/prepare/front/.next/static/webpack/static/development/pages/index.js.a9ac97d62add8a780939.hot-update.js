webpackHotUpdate("static\\development\\pages\\index.js",{

/***/ "./reducers/post.js":
/*!**************************!*\
  !*** ./reducers/post.js ***!
  \**************************/
/*! exports provided: initialState, addPost, default */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* WEBPACK VAR INJECTION */(function(module) {/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "initialState", function() { return initialState; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "addPost", function() { return addPost; });
/* harmony import */ var _babel_runtime_helpers_esm_toConsumableArray__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @babel/runtime/helpers/esm/toConsumableArray */ "./node_modules/@babel/runtime/helpers/esm/toConsumableArray.js");
/* harmony import */ var _babel_runtime_helpers_esm_defineProperty__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @babel/runtime/helpers/esm/defineProperty */ "./node_modules/@babel/runtime/helpers/esm/defineProperty.js");



function ownKeys(object, enumerableOnly) { var keys = Object.keys(object); if (Object.getOwnPropertySymbols) { var symbols = Object.getOwnPropertySymbols(object); if (enumerableOnly) symbols = symbols.filter(function (sym) { return Object.getOwnPropertyDescriptor(object, sym).enumerable; }); keys.push.apply(keys, symbols); } return keys; }

function _objectSpread(target) { for (var i = 1; i < arguments.length; i++) { var source = arguments[i] != null ? arguments[i] : {}; if (i % 2) { ownKeys(Object(source), true).forEach(function (key) { Object(_babel_runtime_helpers_esm_defineProperty__WEBPACK_IMPORTED_MODULE_1__["default"])(target, key, source[key]); }); } else if (Object.getOwnPropertyDescriptors) { Object.defineProperties(target, Object.getOwnPropertyDescriptors(source)); } else { ownKeys(Object(source)).forEach(function (key) { Object.defineProperty(target, key, Object.getOwnPropertyDescriptor(source, key)); }); } } return target; }

var initialState = {
  mainPosts: [{
    id: 1,
    User: {
      id: 1,
      nickname: '데피안'
    },
    content: '첫번째 게시글 #해시태그 #익스프레시',
    Images: [{
      src: "https://2.bp.blogspot.com/-bD9iB6eEFNc/WXdfMahDf-I/AAAAAAAAEX0/Jr2V9cPvrJITSZkTmwt2k1PBZ_m830A5wCLcBGAs/s1600/image1.png"
    }, {
      src: "https://miro.medium.com/proxy/1*xNQHxXBX-1RQCPM3LYa3wA.png"
    }, {
      src: "https://lc-gold-cdn.xitu.io/c526b2d51541a40e7043.png"
    }],
    Comments: [{
      User: {
        nickname: 'zero'
      },
      contents: '우와 멋있다.'
    }, {
      User: {
        nickname: 'hero'
      },
      contents: '우와 멋있다2222'
    }]
  }],
  imagePaths: [],
  postAdded: false
};
var ADD_POST = "ADD_POST";
var addPost = {
  type: ADD_POST
};
var dummyPost = {
  id: 2,
  User: {
    id: 1,
    nickname: '데피안'
  },
  Image: [{
    src: "https://2.bp.blogspot.com/-bD9iB6eEFNc/WXdfMahDf-I/AAAAAAAAEX0/Jr2V9cPvrJITSZkTmwt2k1PBZ_m830A5wCLcBGAs/s1600/image1.png"
  }],
  Comments: []
};

var reducer = function reducer() {
  var state = arguments.length > 0 && arguments[0] !== undefined ? arguments[0] : initialState;
  var action = arguments.length > 1 ? arguments[1] : undefined;

  switch (action.type) {
    case ADD_POST:
      return _objectSpread(_objectSpread({}, state), {}, {
        mainPosts: [dummyPost].concat(Object(_babel_runtime_helpers_esm_toConsumableArray__WEBPACK_IMPORTED_MODULE_0__["default"])(state.mainPosts)),
        postAdded: true
      });

    default:
      return state;
  }
};

/* harmony default export */ __webpack_exports__["default"] = (reducer);

;
    var _a, _b;
    // Legacy CSS implementations will `eval` browser code in a Node.js context
    // to extract CSS. For backwards compatibility, we need to check we're in a
    // browser context before continuing.
    if (typeof self !== 'undefined' &&
        // AMP / No-JS mode does not inject these helpers:
        '$RefreshHelpers$' in self) {
        var currentExports_1 = module.__proto__.exports;
        var prevExports = (_b = (_a = module.hot.data) === null || _a === void 0 ? void 0 : _a.prevExports) !== null && _b !== void 0 ? _b : null;
        // This cannot happen in MainTemplate because the exports mismatch between
        // templating and execution.
        self.$RefreshHelpers$.registerExportsForReactRefresh(currentExports_1, module.i);
        // A module can be accepted automatically based on its exports, e.g. when
        // it is a Refresh Boundary.
        if (self.$RefreshHelpers$.isReactRefreshBoundary(currentExports_1)) {
            // Save the previous exports on update so we can compare the boundary
            // signatures.
            module.hot.dispose(function (data) {
                data.prevExports = currentExports_1;
            });
            // Unconditionally accept an update to this module, we'll check if it's
            // still a Refresh Boundary later.
            module.hot.accept();
            // This field is set when the previous version of this module was a
            // Refresh Boundary, letting us know we need to check for invalidation or
            // enqueue an update.
            if (prevExports !== null) {
                // A boundary can become ineligible if its exports are incompatible
                // with the previous exports.
                //
                // For example, if you add/remove/change exports, we'll want to
                // re-execute the importing modules, and force those components to
                // re-render. Similarly, if you convert a class component to a
                // function, we want to invalidate the boundary.
                if (self.$RefreshHelpers$.shouldInvalidateReactRefreshBoundary(prevExports, currentExports_1)) {
                    module.hot.invalidate();
                }
                else {
                    self.$RefreshHelpers$.scheduleUpdate();
                }
            }
        }
        else {
            // Since we just executed the code for the module, it's possible that the
            // new exports made it ineligible for being a boundary.
            // We only care about the case when we were _previously_ a boundary,
            // because we already accepted this update (accidental side effect).
            var isNoLongerABoundary = prevExports !== null;
            if (isNoLongerABoundary) {
                module.hot.invalidate();
            }
        }
    }

/* WEBPACK VAR INJECTION */}.call(this, __webpack_require__(/*! ./../node_modules/webpack/buildin/harmony-module.js */ "./node_modules/webpack/buildin/harmony-module.js")(module)))

/***/ })

})
//# sourceMappingURL=data:application/json;charset=utf-8;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbIndlYnBhY2s6Ly8vLi9yZWR1Y2Vycy9wb3N0LmpzIl0sIm5hbWVzIjpbImluaXRpYWxTdGF0ZSIsIm1haW5Qb3N0cyIsImlkIiwiVXNlciIsIm5pY2tuYW1lIiwiY29udGVudCIsIkltYWdlcyIsInNyYyIsIkNvbW1lbnRzIiwiY29udGVudHMiLCJpbWFnZVBhdGhzIiwicG9zdEFkZGVkIiwiQUREX1BPU1QiLCJhZGRQb3N0IiwidHlwZSIsImR1bW15UG9zdCIsIkltYWdlIiwicmVkdWNlciIsInN0YXRlIiwiYWN0aW9uIl0sIm1hcHBpbmdzIjoiOzs7Ozs7Ozs7Ozs7Ozs7Ozs7Ozs7O0FBQ08sSUFBTUEsWUFBWSxHQUFHO0FBQ3hCQyxXQUFTLEVBQUUsQ0FBQztBQUNSQyxNQUFFLEVBQUUsQ0FESTtBQUVSQyxRQUFJLEVBQUU7QUFDRkQsUUFBRSxFQUFFLENBREY7QUFFRkUsY0FBUSxFQUFFO0FBRlIsS0FGRTtBQU1SQyxXQUFPLEVBQUUsc0JBTkQ7QUFPUkMsVUFBTSxFQUFFLENBQ0o7QUFDSUMsU0FBRyxFQUFFO0FBRFQsS0FESSxFQUdEO0FBQ0NBLFNBQUcsRUFBRTtBQUROLEtBSEMsRUFLRDtBQUNDQSxTQUFHLEVBQUU7QUFETixLQUxDLENBUEE7QUFlUkMsWUFBUSxFQUFFLENBQUM7QUFDUEwsVUFBSSxFQUFFO0FBQ0ZDLGdCQUFRLEVBQUU7QUFEUixPQURDO0FBSVBLLGNBQVEsRUFBRTtBQUpILEtBQUQsRUFNVjtBQUNJTixVQUFJLEVBQUU7QUFDRkMsZ0JBQVEsRUFBRTtBQURSLE9BRFY7QUFJSUssY0FBUSxFQUFFO0FBSmQsS0FOVTtBQWZGLEdBQUQsQ0FEYTtBQThCeEJDLFlBQVUsRUFBRSxFQTlCWTtBQStCeEJDLFdBQVMsRUFBRTtBQS9CYSxDQUFyQjtBQW1DUCxJQUFNQyxRQUFRLEdBQUcsVUFBakI7QUFDTyxJQUFNQyxPQUFPLEdBQUc7QUFDbkJDLE1BQUksRUFBRUY7QUFEYSxDQUFoQjtBQUlQLElBQU1HLFNBQVMsR0FBRztBQUNkYixJQUFFLEVBQUUsQ0FEVTtBQUVkQyxNQUFJLEVBQUU7QUFDRkQsTUFBRSxFQUFFLENBREY7QUFFRkUsWUFBUSxFQUFFO0FBRlIsR0FGUTtBQU1kWSxPQUFLLEVBQUUsQ0FBQztBQUNKVCxPQUFHLEVBQUU7QUFERCxHQUFELENBTk87QUFTZEMsVUFBUSxFQUFFO0FBVEksQ0FBbEI7O0FBWUEsSUFBTVMsT0FBTyxHQUFHLFNBQVZBLE9BQVUsR0FBa0M7QUFBQSxNQUFqQ0MsS0FBaUMsdUVBQXpCbEIsWUFBeUI7QUFBQSxNQUFYbUIsTUFBVzs7QUFDOUMsVUFBUUEsTUFBTSxDQUFDTCxJQUFmO0FBQ0ksU0FBS0YsUUFBTDtBQUNJLDZDQUNPTSxLQURQO0FBRUlqQixpQkFBUyxHQUFHYyxTQUFILHNHQUFpQkcsS0FBSyxDQUFDakIsU0FBdkIsRUFGYjtBQUdJVSxpQkFBUyxFQUFFO0FBSGY7O0FBS0o7QUFDSSxhQUFPTyxLQUFQO0FBUlI7QUFVSCxDQVhEOztBQWNlRCxzRUFBZiIsImZpbGUiOiJzdGF0aWMvd2VicGFjay9zdGF0aWNcXGRldmVsb3BtZW50XFxwYWdlc1xcaW5kZXguanMuYTlhYzk3ZDYyYWRkOGE3ODA5MzkuaG90LXVwZGF0ZS5qcyIsInNvdXJjZXNDb250ZW50IjpbIlxyXG5leHBvcnQgY29uc3QgaW5pdGlhbFN0YXRlID0ge1xyXG4gICAgbWFpblBvc3RzOiBbe1xyXG4gICAgICAgIGlkOiAxLFxyXG4gICAgICAgIFVzZXI6IHtcclxuICAgICAgICAgICAgaWQ6IDEsXHJcbiAgICAgICAgICAgIG5pY2tuYW1lOiAn642w7ZS87JWIJyxcclxuICAgICAgICB9LFxyXG4gICAgICAgIGNvbnRlbnQ6ICfssqvrsojsp7gg6rKM7Iuc6riAICPtlbTsi5ztg5zqt7ggI+ydteyKpO2UhOugiOyLnCcsXHJcbiAgICAgICAgSW1hZ2VzOiBbXHJcbiAgICAgICAgICAgIHtcclxuICAgICAgICAgICAgICAgIHNyYzogXCJodHRwczovLzIuYnAuYmxvZ3Nwb3QuY29tLy1iRDlpQjZlRUZOYy9XWGRmTWFoRGYtSS9BQUFBQUFBQUVYMC9KcjJWOWNQdnJKSVRTWmtUbXd0MmsxUEJaX204MzBBNXdDTGNCR0FzL3MxNjAwL2ltYWdlMS5wbmdcIixcclxuICAgICAgICAgICAgfSwge1xyXG4gICAgICAgICAgICAgICAgc3JjOiBcImh0dHBzOi8vbWlyby5tZWRpdW0uY29tL3Byb3h5LzEqeE5RSHhYQlgtMVJRQ1BNM0xZYTN3QS5wbmdcIixcclxuICAgICAgICAgICAgfSwge1xyXG4gICAgICAgICAgICAgICAgc3JjOiBcImh0dHBzOi8vbGMtZ29sZC1jZG4ueGl0dS5pby9jNTI2YjJkNTE1NDFhNDBlNzA0My5wbmdcIixcclxuICAgICAgICAgICAgfV0sXHJcbiAgICAgICAgQ29tbWVudHM6IFt7XHJcbiAgICAgICAgICAgIFVzZXI6IHtcclxuICAgICAgICAgICAgICAgIG5pY2tuYW1lOiAnemVybycsXHJcbiAgICAgICAgICAgIH0sXHJcbiAgICAgICAgICAgIGNvbnRlbnRzOiAn7Jqw7JmAIOupi+yeiOuLpC4nXHJcbiAgICAgICAgfSxcclxuICAgICAgICB7XHJcbiAgICAgICAgICAgIFVzZXI6IHtcclxuICAgICAgICAgICAgICAgIG5pY2tuYW1lOiAnaGVybycsXHJcbiAgICAgICAgICAgIH0sXHJcbiAgICAgICAgICAgIGNvbnRlbnRzOiAn7Jqw7JmAIOupi+yeiOuLpDIyMjInXHJcbiAgICAgICAgfVxyXG4gICAgICAgIF1cclxuICAgIH1dLFxyXG4gICAgaW1hZ2VQYXRoczogW10sXHJcbiAgICBwb3N0QWRkZWQ6IGZhbHNlLFxyXG59XHJcblxyXG5cclxuY29uc3QgQUREX1BPU1QgPSBcIkFERF9QT1NUXCI7XHJcbmV4cG9ydCBjb25zdCBhZGRQb3N0ID0ge1xyXG4gICAgdHlwZTogQUREX1BPU1QsXHJcbn1cclxuXHJcbmNvbnN0IGR1bW15UG9zdCA9IHtcclxuICAgIGlkOiAyLFxyXG4gICAgVXNlcjoge1xyXG4gICAgICAgIGlkOiAxLFxyXG4gICAgICAgIG5pY2tuYW1lOiAn642w7ZS87JWIJyxcclxuICAgIH0sXHJcbiAgICBJbWFnZTogW3tcclxuICAgICAgICBzcmM6IFwiaHR0cHM6Ly8yLmJwLmJsb2dzcG90LmNvbS8tYkQ5aUI2ZUVGTmMvV1hkZk1haERmLUkvQUFBQUFBQUFFWDAvSnIyVjljUHZySklUU1prVG13dDJrMVBCWl9tODMwQTV3Q0xjQkdBcy9zMTYwMC9pbWFnZTEucG5nXCIsXHJcbiAgICB9XSxcclxuICAgIENvbW1lbnRzOiBbXSxcclxufVxyXG5cclxuY29uc3QgcmVkdWNlciA9IChzdGF0ZSA9IGluaXRpYWxTdGF0ZSwgYWN0aW9uKSA9PiB7XHJcbiAgICBzd2l0Y2ggKGFjdGlvbi50eXBlKSB7XHJcbiAgICAgICAgY2FzZSBBRERfUE9TVDpcclxuICAgICAgICAgICAgcmV0dXJuIHtcclxuICAgICAgICAgICAgICAgIC4uLnN0YXRlLFxyXG4gICAgICAgICAgICAgICAgbWFpblBvc3RzOiBbZHVtbXlQb3N0LCAuLi5zdGF0ZS5tYWluUG9zdHNdLFxyXG4gICAgICAgICAgICAgICAgcG9zdEFkZGVkOiB0cnVlLFxyXG4gICAgICAgICAgICB9XHJcbiAgICAgICAgZGVmYXVsdDpcclxuICAgICAgICAgICAgcmV0dXJuIHN0YXRlO1xyXG4gICAgfVxyXG59O1xyXG5cclxuXHJcbmV4cG9ydCBkZWZhdWx0IHJlZHVjZXI7Il0sInNvdXJjZVJvb3QiOiIifQ==