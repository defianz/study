
// var fs = require('fs');

// fs.readFile('sample.txt', 'utf8', function (err, data) {
//     console.log(data);
// })

// var res = { 'role': 'hi' };

// for (var name in res) {
//     console.log('key is', name, 'value is', res[name]);
// }




var f = function () {
    console.log(1 + 1);
    console.log(1 + 2);
}

var a = {
    'func': f,
    'hi': 'aa'
}
a.func();

console.log(a.hi);