var http = require('http');
var fs = require('fs');
var url = require('url');

var app = http.createServer(function (request, response) {
  var _url = request.url;
  var queryData = url.parse(_url, true).query;
  // console.log(queryData.id);
  var title = queryData.id;
  var pathname = url.parse(_url, true).pathname;



  if (pathname === '/') {
    if (queryData.id === undefined) {
      var title = ' Welcome';
      var description = 'Hello, Node.js';
    }
    fs.readFile(`data/${queryData.id}`, 'utf8', function (err, description) {
      var template = `
    <!doctype html>
    <html>
    <head>
    <title>WEB1 - ${title}</title>
    <meta charset="utf-8">
    </head>
    <body>
    <h1><a href="/">WEB</a></h1>
    <ol>
      <li><a href="/?id=html">HTML</a></li>
      <li><a href="/?id=css">CSS</a></li>
      <li><a href="/?id=javascript">JavaScript</a></li>
    </ol>
    <h2>${title}</h2>
    <p>${description}</p>
    </body>
    </html>`;
      response.writeHead(200);
      response.end(template);
    })
  } else {
    response.writeHead(404);
    response.end("Not Found");
  }


  // response.end(fs.readFileSync(__dirname + _url));
});
app.listen(3000);