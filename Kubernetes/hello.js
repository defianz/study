var http = require('http');
var content = (req, res) => {
 res.end("Hello World!"+"\n");
 res.writeHead(200);
}
var w = http.createServer(content);
w.listen(8000);
