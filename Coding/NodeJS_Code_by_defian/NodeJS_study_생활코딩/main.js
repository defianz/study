var http = require('http');
var fs = require('fs');
var url = require('url');

function templateHTML(title, list, body) {
  var template = `
          <!doctype html>
          <html>
          <head>
            <title>WEB- ${title}</title>
            <meta charset="utf-8">
          </head>
          <body>
            <h1><a href="/">WEB</a></h1>
            ${list}
            <a href='/create'>create</a>
            ${body}
          </body>
          </html>
          `;
  return template;
}

function templateLIST(filelist) {
  var list = '<ul>';
  var i = 0;
  while (i < filelist.length) {
    list = list + `<li><a href="/?id=${filelist[i]}">${filelist[i]}</a></li>`;
    i = i + 1;
  }
  list = list + '</ul>';
  return list;
}

var app = http.createServer(function (request, response) {
  var _url = request.url;
  var queryData = url.parse(_url, true).query;
  var pathname = url.parse(_url, true).pathname;
  if (pathname === '/') {
    if (queryData.id === undefined) {

      fs.readdir('./data', function (error, filelist) {
        var title = 'Welcome';
        var description = 'Hello, Node.js';
        var list = templateLIST(filelist);
        var template = templateHTML(title, list, `<h2>${title}</h2><p>${description}</p>`);
        response.writeHead(200);
        response.end(template);
      })
    } else {
      fs.readdir('./data', function (error, filelist) {
        var title = 'Welcome';
        var description = 'Hello, Node.js';
        var list = templateLIST(filelist);
        fs.readFile(`data/${queryData.id}`, 'utf8', function (err, description) {
          var title = queryData.id;
          var template = templateHTML(title, list, `<h2>${title}</h2><p>${description}</p>`);
          response.writeHead(200);
          response.end(template);
        });
      });
    }
  } else if (pathname === '/create') {
    fs.readdir('./data', function (error, filelist) {
      var title = 'Web - create';
      var description = 'Hello, Node.js';
      var list = templateLIST(filelist);
      fs.readFile(`data/${queryData.id}`, 'utf8', function (err, description) {
        var title = queryData.id;
        var template = templateHTML(title, list, `
        <form action='http://localhost:3000/process_create' method='post'>
          <p><input type='text' name='title' placeholder='title'/></p>
          <p><textarea name='description' placeholder='description22'></textarea></p>
          <p>
          <input type="submit">
          </p>
        </form>
        `);
        response.writeHead(200);
        response.end(template);
      });
    });
  } else if (pathname === "/process_create") {
    response.write("성공");
    response.writeHead(200);
    response.end("성공");
  } else {
    response.writeHead(404);
    response.end('Not found');
  }



});
app.listen(3000);