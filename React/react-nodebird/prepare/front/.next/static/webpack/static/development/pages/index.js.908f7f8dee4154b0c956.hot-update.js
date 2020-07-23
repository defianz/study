webpackHotUpdate("static\\development\\pages\\index.js",{

/***/ "./components/PostForm.js":
/*!********************************!*\
  !*** ./components/PostForm.js ***!
  \********************************/
/*! exports provided: default */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* WEBPACK VAR INJECTION */(function(module) {/* harmony import */ var react__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! react */ "./node_modules/react/index.js");
/* harmony import */ var react__WEBPACK_IMPORTED_MODULE_0___default = /*#__PURE__*/__webpack_require__.n(react__WEBPACK_IMPORTED_MODULE_0__);
/* harmony import */ var antd__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! antd */ "./node_modules/antd/es/index.js");
/* harmony import */ var react_redux__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! react-redux */ "./node_modules/react-redux/es/index.js");
/* harmony import */ var _reducers_post__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../reducers/post */ "./reducers/post.js");
var _this = undefined,
    _jsxFileName = "C:\\Git_defian\\study\\React\\react-nodebird\\prepare\\front\\components\\PostForm.js",
    _s = $RefreshSig$();

var __jsx = react__WEBPACK_IMPORTED_MODULE_0___default.a.createElement;





var PostForm = function PostForm() {
  _s();

  var _useSelector = Object(react_redux__WEBPACK_IMPORTED_MODULE_2__["useSelector"])(function (state) {
    return state.post;
  }),
      imagePaths = _useSelector.imagePaths;

  var dispatch = Object(react_redux__WEBPACK_IMPORTED_MODULE_2__["useDispatch"])();

  var _useState = Object(react__WEBPACK_IMPORTED_MODULE_0__["useState"])(''),
      text = _useState[0],
      setText = _useState[1];

  var onChangeText = Object(react__WEBPACK_IMPORTED_MODULE_0__["useCallback"])(function (e) {
    setText(e.target.value);
  }, []);
  var onSubmit = Object(react__WEBPACK_IMPORTED_MODULE_0__["useCallback"])(function () {
    dispatch(_reducers_post__WEBPACK_IMPORTED_MODULE_3__["addPost"]);
  }, []);
  return __jsx(antd__WEBPACK_IMPORTED_MODULE_1__["Form"], {
    style: {
      margin: '10px 0 20px'
    },
    encType: "multipart/form-data",
    onFinish: onSubmit,
    __self: _this,
    __source: {
      fileName: _jsxFileName,
      lineNumber: 21,
      columnNumber: 9
    }
  }, __jsx(antd__WEBPACK_IMPORTED_MODULE_1__["Input"].TextArea, {
    value: text,
    onChange: onChangeText,
    maxLength: 140,
    placeholder: "\uC5B4\uB5A4 \uC2E0\uAE30\uD55C \uC77C\uC774 \uC788\uC5C8\uB098\uC694?",
    __self: _this,
    __source: {
      fileName: _jsxFileName,
      lineNumber: 22,
      columnNumber: 13
    }
  }), __jsx("div", {
    __self: _this,
    __source: {
      fileName: _jsxFileName,
      lineNumber: 28,
      columnNumber: 13
    }
  }, __jsx("input", {
    type: "file",
    multiple: true,
    hidden: true,
    __self: _this,
    __source: {
      fileName: _jsxFileName,
      lineNumber: 29,
      columnNumber: 17
    }
  }), __jsx(antd__WEBPACK_IMPORTED_MODULE_1__["Button"], {
    __self: _this,
    __source: {
      fileName: _jsxFileName,
      lineNumber: 30,
      columnNumber: 17
    }
  }, "\uC774\uBBF8\uC9C0 \uC5C5\uB85C\uB4DC"), __jsx(antd__WEBPACK_IMPORTED_MODULE_1__["Button"], {
    type: "primary",
    style: {
      "float": 'right'
    },
    htmlType: "submit",
    __self: _this,
    __source: {
      fileName: _jsxFileName,
      lineNumber: 31,
      columnNumber: 17
    }
  }, "\uC9F9\uC9F9")), __jsx("div", {
    __self: _this,
    __source: {
      fileName: _jsxFileName,
      lineNumber: 33,
      columnNumber: 13
    }
  }, imagePaths.map(function (v) {
    __jsx("div", {
      key: v,
      style: {
        display: 'inline-block'
      },
      __self: _this,
      __source: {
        fileName: _jsxFileName,
        lineNumber: 35,
        columnNumber: 21
      }
    }, __jsx("img", {
      src: v,
      style: {
        width: '200px'
      },
      alt: v,
      __self: _this,
      __source: {
        fileName: _jsxFileName,
        lineNumber: 36,
        columnNumber: 25
      }
    }), __jsx("div", {
      __self: _this,
      __source: {
        fileName: _jsxFileName,
        lineNumber: 37,
        columnNumber: 25
      }
    }, __jsx(antd__WEBPACK_IMPORTED_MODULE_1__["Button"], {
      __self: _this,
      __source: {
        fileName: _jsxFileName,
        lineNumber: 38,
        columnNumber: 29
      }
    }, "\uC81C\uAC70")));
  })));
};

_s(PostForm, "C91+UZPGn+JIgNTkeOi8bTPVHNM=", false, function () {
  return [react_redux__WEBPACK_IMPORTED_MODULE_2__["useSelector"], react_redux__WEBPACK_IMPORTED_MODULE_2__["useDispatch"]];
});

_c = PostForm;
/* harmony default export */ __webpack_exports__["default"] = (PostForm);

var _c;

$RefreshReg$(_c, "PostForm");

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
//# sourceMappingURL=data:application/json;charset=utf-8;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbIndlYnBhY2s6Ly8vLi9jb21wb25lbnRzL1Bvc3RGb3JtLmpzIl0sIm5hbWVzIjpbIlBvc3RGb3JtIiwidXNlU2VsZWN0b3IiLCJzdGF0ZSIsInBvc3QiLCJpbWFnZVBhdGhzIiwiZGlzcGF0Y2giLCJ1c2VEaXNwYXRjaCIsInVzZVN0YXRlIiwidGV4dCIsInNldFRleHQiLCJvbkNoYW5nZVRleHQiLCJ1c2VDYWxsYmFjayIsImUiLCJ0YXJnZXQiLCJ2YWx1ZSIsIm9uU3VibWl0IiwiYWRkUG9zdCIsIm1hcmdpbiIsIm1hcCIsInYiLCJkaXNwbGF5Iiwid2lkdGgiXSwibWFwcGluZ3MiOiI7Ozs7Ozs7Ozs7Ozs7Ozs7Ozs7OztBQUNBO0FBQ0E7QUFDQTtBQUVBOztBQUVBLElBQU1BLFFBQVEsR0FBRyxTQUFYQSxRQUFXLEdBQU07QUFBQTs7QUFBQSxxQkFFSUMsK0RBQVcsQ0FBQyxVQUFDQyxLQUFEO0FBQUEsV0FBV0EsS0FBSyxDQUFDQyxJQUFqQjtBQUFBLEdBQUQsQ0FGZjtBQUFBLE1BRVhDLFVBRlcsZ0JBRVhBLFVBRlc7O0FBR25CLE1BQU1DLFFBQVEsR0FBR0MsK0RBQVcsRUFBNUI7O0FBSG1CLGtCQUlLQyxzREFBUSxDQUFDLEVBQUQsQ0FKYjtBQUFBLE1BSVpDLElBSlk7QUFBQSxNQUlOQyxPQUpNOztBQUtuQixNQUFNQyxZQUFZLEdBQUdDLHlEQUFXLENBQUMsVUFBQ0MsQ0FBRCxFQUFPO0FBQ3BDSCxXQUFPLENBQUNHLENBQUMsQ0FBQ0MsTUFBRixDQUFTQyxLQUFWLENBQVA7QUFDSCxHQUYrQixFQUU3QixFQUY2QixDQUFoQztBQUdBLE1BQU1DLFFBQVEsR0FBR0oseURBQVcsQ0FBQyxZQUFNO0FBQy9CTixZQUFRLENBQUNXLHNEQUFELENBQVI7QUFDSCxHQUYyQixFQUV6QixFQUZ5QixDQUE1QjtBQUlBLFNBQ0ksTUFBQyx5Q0FBRDtBQUFNLFNBQUssRUFBRTtBQUFFQyxZQUFNLEVBQUU7QUFBVixLQUFiO0FBQXdDLFdBQU8sRUFBQyxxQkFBaEQ7QUFBc0UsWUFBUSxFQUFFRixRQUFoRjtBQUFBO0FBQUE7QUFBQTtBQUFBO0FBQUE7QUFBQTtBQUFBLEtBQ0ksTUFBQywwQ0FBRCxDQUFPLFFBQVA7QUFDSSxTQUFLLEVBQUVQLElBRFg7QUFFSSxZQUFRLEVBQUVFLFlBRmQ7QUFHSSxhQUFTLEVBQUUsR0FIZjtBQUlJLGVBQVcsRUFBQyx3RUFKaEI7QUFBQTtBQUFBO0FBQUE7QUFBQTtBQUFBO0FBQUE7QUFBQSxJQURKLEVBT0k7QUFBQTtBQUFBO0FBQUE7QUFBQTtBQUFBO0FBQUE7QUFBQSxLQUNJO0FBQU8sUUFBSSxFQUFDLE1BQVo7QUFBbUIsWUFBUSxNQUEzQjtBQUE0QixVQUFNLE1BQWxDO0FBQUE7QUFBQTtBQUFBO0FBQUE7QUFBQTtBQUFBO0FBQUEsSUFESixFQUVJLE1BQUMsMkNBQUQ7QUFBQTtBQUFBO0FBQUE7QUFBQTtBQUFBO0FBQUE7QUFBQSw2Q0FGSixFQUdJLE1BQUMsMkNBQUQ7QUFBUSxRQUFJLEVBQUMsU0FBYjtBQUF1QixTQUFLLEVBQUU7QUFBRSxlQUFPO0FBQVQsS0FBOUI7QUFBa0QsWUFBUSxFQUFDLFFBQTNEO0FBQUE7QUFBQTtBQUFBO0FBQUE7QUFBQTtBQUFBO0FBQUEsb0JBSEosQ0FQSixFQVlJO0FBQUE7QUFBQTtBQUFBO0FBQUE7QUFBQTtBQUFBO0FBQUEsS0FDS04sVUFBVSxDQUFDYyxHQUFYLENBQWUsVUFBQ0MsQ0FBRCxFQUFPO0FBQ25CO0FBQUssU0FBRyxFQUFFQSxDQUFWO0FBQWEsV0FBSyxFQUFFO0FBQUVDLGVBQU8sRUFBRTtBQUFYLE9BQXBCO0FBQUE7QUFBQTtBQUFBO0FBQUE7QUFBQTtBQUFBO0FBQUEsT0FDSTtBQUFLLFNBQUcsRUFBRUQsQ0FBVjtBQUFhLFdBQUssRUFBRTtBQUFFRSxhQUFLLEVBQUU7QUFBVCxPQUFwQjtBQUF3QyxTQUFHLEVBQUVGLENBQTdDO0FBQUE7QUFBQTtBQUFBO0FBQUE7QUFBQTtBQUFBO0FBQUEsTUFESixFQUVJO0FBQUE7QUFBQTtBQUFBO0FBQUE7QUFBQTtBQUFBO0FBQUEsT0FDSSxNQUFDLDJDQUFEO0FBQUE7QUFBQTtBQUFBO0FBQUE7QUFBQTtBQUFBO0FBQUEsc0JBREosQ0FGSjtBQU1ILEdBUEEsQ0FETCxDQVpKLENBREo7QUF5QkgsQ0FyQ0Q7O0dBQU1uQixRO1VBRXFCQyx1RCxFQUNOSyx1RDs7O0tBSGZOLFE7QUF1Q1NBLHVFQUFmIiwiZmlsZSI6InN0YXRpYy93ZWJwYWNrL3N0YXRpY1xcZGV2ZWxvcG1lbnRcXHBhZ2VzXFxpbmRleC5qcy45MDhmN2Y4ZGVlNDE1NGIwYzk1Ni5ob3QtdXBkYXRlLmpzIiwic291cmNlc0NvbnRlbnQiOlsiXHJcbmltcG9ydCBSZWFjdCwgeyB1c2VDYWxsYmFjaywgdXNlU3RhdGUgfSBmcm9tICdyZWFjdCc7XHJcbmltcG9ydCB7IEZvcm0sIElucHV0LCBCdXR0b24gfSBmcm9tICdhbnRkJztcclxuaW1wb3J0IHsgdXNlU2VsZWN0b3IsIHVzZURpc3BhdGNoIH0gZnJvbSAncmVhY3QtcmVkdXgnO1xyXG5cclxuaW1wb3J0IHsgYWRkUG9zdCB9IGZyb20gJy4uL3JlZHVjZXJzL3Bvc3QnXHJcblxyXG5jb25zdCBQb3N0Rm9ybSA9ICgpID0+IHtcclxuXHJcbiAgICBjb25zdCB7IGltYWdlUGF0aHMgfSA9IHVzZVNlbGVjdG9yKChzdGF0ZSkgPT4gc3RhdGUucG9zdCk7XHJcbiAgICBjb25zdCBkaXNwYXRjaCA9IHVzZURpc3BhdGNoKCk7XHJcbiAgICBjb25zdCBbdGV4dCwgc2V0VGV4dF0gPSB1c2VTdGF0ZSgnJyk7XHJcbiAgICBjb25zdCBvbkNoYW5nZVRleHQgPSB1c2VDYWxsYmFjaygoZSkgPT4ge1xyXG4gICAgICAgIHNldFRleHQoZS50YXJnZXQudmFsdWUpO1xyXG4gICAgfSwgW10pXHJcbiAgICBjb25zdCBvblN1Ym1pdCA9IHVzZUNhbGxiYWNrKCgpID0+IHtcclxuICAgICAgICBkaXNwYXRjaChhZGRQb3N0KTtcclxuICAgIH0sIFtdKTtcclxuXHJcbiAgICByZXR1cm4gKFxyXG4gICAgICAgIDxGb3JtIHN0eWxlPXt7IG1hcmdpbjogJzEwcHggMCAyMHB4JyB9fSBlbmNUeXBlPVwibXVsdGlwYXJ0L2Zvcm0tZGF0YVwiIG9uRmluaXNoPXtvblN1Ym1pdH0+XHJcbiAgICAgICAgICAgIDxJbnB1dC5UZXh0QXJlYVxyXG4gICAgICAgICAgICAgICAgdmFsdWU9e3RleHR9XHJcbiAgICAgICAgICAgICAgICBvbkNoYW5nZT17b25DaGFuZ2VUZXh0fVxyXG4gICAgICAgICAgICAgICAgbWF4TGVuZ3RoPXsxNDB9XHJcbiAgICAgICAgICAgICAgICBwbGFjZWhvbGRlcj1cIuyWtOuWpCDsi6DquLDtlZwg7J287J20IOyeiOyXiOuCmOyalD9cIlxyXG4gICAgICAgICAgICAvPlxyXG4gICAgICAgICAgICA8ZGl2PlxyXG4gICAgICAgICAgICAgICAgPGlucHV0IHR5cGU9XCJmaWxlXCIgbXVsdGlwbGUgaGlkZGVuIC8+XHJcbiAgICAgICAgICAgICAgICA8QnV0dG9uPuydtOuvuOyngCDsl4XroZzrk5w8L0J1dHRvbj5cclxuICAgICAgICAgICAgICAgIDxCdXR0b24gdHlwZT1cInByaW1hcnlcIiBzdHlsZT17eyBmbG9hdDogJ3JpZ2h0JyB9fSBodG1sVHlwZT1cInN1Ym1pdFwiPuynueynuTwvQnV0dG9uPlxyXG4gICAgICAgICAgICA8L2Rpdj5cclxuICAgICAgICAgICAgPGRpdj5cclxuICAgICAgICAgICAgICAgIHtpbWFnZVBhdGhzLm1hcCgodikgPT4ge1xyXG4gICAgICAgICAgICAgICAgICAgIDxkaXYga2V5PXt2fSBzdHlsZT17eyBkaXNwbGF5OiAnaW5saW5lLWJsb2NrJyB9fT5cclxuICAgICAgICAgICAgICAgICAgICAgICAgPGltZyBzcmM9e3Z9IHN0eWxlPXt7IHdpZHRoOiAnMjAwcHgnIH19IGFsdD17dn0gLz5cclxuICAgICAgICAgICAgICAgICAgICAgICAgPGRpdj5cclxuICAgICAgICAgICAgICAgICAgICAgICAgICAgIDxCdXR0b24+7KCc6rGwPC9CdXR0b24+XHJcbiAgICAgICAgICAgICAgICAgICAgICAgIDwvZGl2PlxyXG4gICAgICAgICAgICAgICAgICAgIDwvZGl2PlxyXG4gICAgICAgICAgICAgICAgfSl9XHJcbiAgICAgICAgICAgIDwvZGl2PlxyXG4gICAgICAgIDwvRm9ybT5cclxuICAgIClcclxufVxyXG5cclxuZXhwb3J0IGRlZmF1bHQgUG9zdEZvcm07Il0sInNvdXJjZVJvb3QiOiIifQ==