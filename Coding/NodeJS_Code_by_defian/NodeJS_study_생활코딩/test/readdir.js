var fs = require("fs");
var testFolder = '../test/';

// fs.readdir(testFolder, (err, files) => {
//     files.forEach(file => {
//         console.log(file);
//     })
// }
// )


fs.readdir(testFolder, function (err, files) {
    files.forEach(function (file) {
        console.log(file);
    }
    )
})