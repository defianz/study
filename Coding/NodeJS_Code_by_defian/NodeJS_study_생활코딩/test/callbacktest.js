


function a() {
    console.log('A');
};


var a = function () {
    console.log("B");
}

function slowfunc(callback) {
    callback();
}

slowfunc(a);