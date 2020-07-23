webpackHotUpdate("static\\development\\pages\\_app.js",{

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
//# sourceMappingURL=data:application/json;charset=utf-8;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbIndlYnBhY2s6Ly8vLi9yZWR1Y2Vycy9wb3N0LmpzIl0sIm5hbWVzIjpbImluaXRpYWxTdGF0ZSIsIm1haW5Qb3N0cyIsImlkIiwiVXNlciIsIm5pY2tuYW1lIiwiY29udGVudCIsIkltYWdlcyIsInNyYyIsIkNvbW1lbnRzIiwiY29udGVudHMiLCJpbWFnZVBhdGhzIiwicG9zdEFkZGVkIiwiQUREX1BPU1QiLCJhZGRQb3N0IiwidHlwZSIsImR1bW15UG9zdCIsIkltYWdlIiwicmVkdWNlciIsInN0YXRlIiwiYWN0aW9uIl0sIm1hcHBpbmdzIjoiOzs7Ozs7Ozs7Ozs7Ozs7Ozs7Ozs7O0FBQ08sSUFBTUEsWUFBWSxHQUFHO0FBQ3hCQyxXQUFTLEVBQUUsQ0FBQztBQUNSQyxNQUFFLEVBQUUsQ0FESTtBQUVSQyxRQUFJLEVBQUU7QUFDRkQsUUFBRSxFQUFFLENBREY7QUFFRkUsY0FBUSxFQUFFO0FBRlIsS0FGRTtBQU1SQyxXQUFPLEVBQUUsc0JBTkQ7QUFPUkMsVUFBTSxFQUFFLENBQ0o7QUFDSUMsU0FBRyxFQUFFO0FBRFQsS0FESSxFQUdEO0FBQ0NBLFNBQUcsRUFBRTtBQUROLEtBSEMsRUFLRDtBQUNDQSxTQUFHLEVBQUU7QUFETixLQUxDLENBUEE7QUFlUkMsWUFBUSxFQUFFLENBQUM7QUFDUEwsVUFBSSxFQUFFO0FBQ0ZDLGdCQUFRLEVBQUU7QUFEUixPQURDO0FBSVBLLGNBQVEsRUFBRTtBQUpILEtBQUQsRUFNVjtBQUNJTixVQUFJLEVBQUU7QUFDRkMsZ0JBQVEsRUFBRTtBQURSLE9BRFY7QUFJSUssY0FBUSxFQUFFO0FBSmQsS0FOVTtBQWZGLEdBQUQsQ0FEYTtBQThCeEJDLFlBQVUsRUFBRSxFQTlCWTtBQStCeEJDLFdBQVMsRUFBRTtBQS9CYSxDQUFyQjtBQW1DUCxJQUFNQyxRQUFRLEdBQUcsVUFBakI7QUFDTyxJQUFNQyxPQUFPLEdBQUc7QUFDbkJDLE1BQUksRUFBRUY7QUFEYSxDQUFoQjtBQUlQLElBQU1HLFNBQVMsR0FBRztBQUNkYixJQUFFLEVBQUUsQ0FEVTtBQUVkQyxNQUFJLEVBQUU7QUFDRkQsTUFBRSxFQUFFLENBREY7QUFFRkUsWUFBUSxFQUFFO0FBRlIsR0FGUTtBQU1kWSxPQUFLLEVBQUUsQ0FBQztBQUNKVCxPQUFHLEVBQUU7QUFERCxHQUFELENBTk87QUFTZEMsVUFBUSxFQUFFO0FBVEksQ0FBbEI7O0FBWUEsSUFBTVMsT0FBTyxHQUFHLFNBQVZBLE9BQVUsR0FBa0M7QUFBQSxNQUFqQ0MsS0FBaUMsdUVBQXpCbEIsWUFBeUI7QUFBQSxNQUFYbUIsTUFBVzs7QUFDOUMsVUFBUUEsTUFBTSxDQUFDTCxJQUFmO0FBQ0ksU0FBS0YsUUFBTDtBQUNJLDZDQUNPTSxLQURQO0FBRUlqQixpQkFBUyxHQUFHYyxTQUFILHNHQUFpQkcsS0FBSyxDQUFDakIsU0FBdkIsRUFGYjtBQUdJVSxpQkFBUyxFQUFFO0FBSGY7O0FBS0o7QUFDSSxhQUFPTyxLQUFQO0FBUlI7QUFVSCxDQVhEOztBQWNlRCxzRUFBZiIsImZpbGUiOiJzdGF0aWMvd2VicGFjay9zdGF0aWNcXGRldmVsb3BtZW50XFxwYWdlc1xcX2FwcC5qcy5hOWFjOTdkNjJhZGQ4YTc4MDkzOS5ob3QtdXBkYXRlLmpzIiwic291cmNlc0NvbnRlbnQiOlsiXHJcbmV4cG9ydCBjb25zdCBpbml0aWFsU3RhdGUgPSB7XHJcbiAgICBtYWluUG9zdHM6IFt7XHJcbiAgICAgICAgaWQ6IDEsXHJcbiAgICAgICAgVXNlcjoge1xyXG4gICAgICAgICAgICBpZDogMSxcclxuICAgICAgICAgICAgbmlja25hbWU6ICfrjbDtlLzslYgnLFxyXG4gICAgICAgIH0sXHJcbiAgICAgICAgY29udGVudDogJ+yyq+uyiOynuCDqsozsi5zquIAgI+2VtOyLnO2DnOq3uCAj7J217Iqk7ZSE66CI7IucJyxcclxuICAgICAgICBJbWFnZXM6IFtcclxuICAgICAgICAgICAge1xyXG4gICAgICAgICAgICAgICAgc3JjOiBcImh0dHBzOi8vMi5icC5ibG9nc3BvdC5jb20vLWJEOWlCNmVFRk5jL1dYZGZNYWhEZi1JL0FBQUFBQUFBRVgwL0pyMlY5Y1B2ckpJVFNaa1Rtd3QyazFQQlpfbTgzMEE1d0NMY0JHQXMvczE2MDAvaW1hZ2UxLnBuZ1wiLFxyXG4gICAgICAgICAgICB9LCB7XHJcbiAgICAgICAgICAgICAgICBzcmM6IFwiaHR0cHM6Ly9taXJvLm1lZGl1bS5jb20vcHJveHkvMSp4TlFIeFhCWC0xUlFDUE0zTFlhM3dBLnBuZ1wiLFxyXG4gICAgICAgICAgICB9LCB7XHJcbiAgICAgICAgICAgICAgICBzcmM6IFwiaHR0cHM6Ly9sYy1nb2xkLWNkbi54aXR1LmlvL2M1MjZiMmQ1MTU0MWE0MGU3MDQzLnBuZ1wiLFxyXG4gICAgICAgICAgICB9XSxcclxuICAgICAgICBDb21tZW50czogW3tcclxuICAgICAgICAgICAgVXNlcjoge1xyXG4gICAgICAgICAgICAgICAgbmlja25hbWU6ICd6ZXJvJyxcclxuICAgICAgICAgICAgfSxcclxuICAgICAgICAgICAgY29udGVudHM6ICfsmrDsmYAg66mL7J6I64ukLidcclxuICAgICAgICB9LFxyXG4gICAgICAgIHtcclxuICAgICAgICAgICAgVXNlcjoge1xyXG4gICAgICAgICAgICAgICAgbmlja25hbWU6ICdoZXJvJyxcclxuICAgICAgICAgICAgfSxcclxuICAgICAgICAgICAgY29udGVudHM6ICfsmrDsmYAg66mL7J6I64ukMjIyMidcclxuICAgICAgICB9XHJcbiAgICAgICAgXVxyXG4gICAgfV0sXHJcbiAgICBpbWFnZVBhdGhzOiBbXSxcclxuICAgIHBvc3RBZGRlZDogZmFsc2UsXHJcbn1cclxuXHJcblxyXG5jb25zdCBBRERfUE9TVCA9IFwiQUREX1BPU1RcIjtcclxuZXhwb3J0IGNvbnN0IGFkZFBvc3QgPSB7XHJcbiAgICB0eXBlOiBBRERfUE9TVCxcclxufVxyXG5cclxuY29uc3QgZHVtbXlQb3N0ID0ge1xyXG4gICAgaWQ6IDIsXHJcbiAgICBVc2VyOiB7XHJcbiAgICAgICAgaWQ6IDEsXHJcbiAgICAgICAgbmlja25hbWU6ICfrjbDtlLzslYgnLFxyXG4gICAgfSxcclxuICAgIEltYWdlOiBbe1xyXG4gICAgICAgIHNyYzogXCJodHRwczovLzIuYnAuYmxvZ3Nwb3QuY29tLy1iRDlpQjZlRUZOYy9XWGRmTWFoRGYtSS9BQUFBQUFBQUVYMC9KcjJWOWNQdnJKSVRTWmtUbXd0MmsxUEJaX204MzBBNXdDTGNCR0FzL3MxNjAwL2ltYWdlMS5wbmdcIixcclxuICAgIH1dLFxyXG4gICAgQ29tbWVudHM6IFtdLFxyXG59XHJcblxyXG5jb25zdCByZWR1Y2VyID0gKHN0YXRlID0gaW5pdGlhbFN0YXRlLCBhY3Rpb24pID0+IHtcclxuICAgIHN3aXRjaCAoYWN0aW9uLnR5cGUpIHtcclxuICAgICAgICBjYXNlIEFERF9QT1NUOlxyXG4gICAgICAgICAgICByZXR1cm4ge1xyXG4gICAgICAgICAgICAgICAgLi4uc3RhdGUsXHJcbiAgICAgICAgICAgICAgICBtYWluUG9zdHM6IFtkdW1teVBvc3QsIC4uLnN0YXRlLm1haW5Qb3N0c10sXHJcbiAgICAgICAgICAgICAgICBwb3N0QWRkZWQ6IHRydWUsXHJcbiAgICAgICAgICAgIH1cclxuICAgICAgICBkZWZhdWx0OlxyXG4gICAgICAgICAgICByZXR1cm4gc3RhdGU7XHJcbiAgICB9XHJcbn07XHJcblxyXG5cclxuZXhwb3J0IGRlZmF1bHQgcmVkdWNlcjsiXSwic291cmNlUm9vdCI6IiJ9