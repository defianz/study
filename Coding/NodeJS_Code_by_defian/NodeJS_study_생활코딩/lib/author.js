var db = require('./db.js');
var templateFN = require('./template.js');
var qs = require('querystring');
var url = require('url');
var sanitizeHTML = require('sanitize-html');

exports.home = function (request, response) {
    db.query('SELECT * FROM topic', function (error, topics) {
        if (error) {
            throw (error);
        }
        db.query('SELECT * FROM author', function (error2, authors) {
            if (error2) {
                throw (error2);
            }
            var tag = templateFN.authorList(authors);
            var title = 'Author List';
            var list = templateFN.LIST(topics);
            var template = templateFN.HTML(title, list
                , `<h2>${title}</h2>
                ${tag}
                <h1> Author Create </h1>
                <form action="/author/create_process" method='post'>
                    <p><input type='text' name='name' placeholder='Input a new author name'/></p>
                    <p><textarea name='profile' placeholder='Input the author's profile'></textarea>
                    </p>
                    <p><input type='submit' value='author 제출'/></p>
                </form>
                <style>
                table{
                    border-collapse: collapse;
                }
                td{
                    border:1px solid black;
                }
                </style>
                `
                , `<a href='/create'>create</a>`
            );
            response.writeHead(200);
            response.end(template);
        })
    });
}


exports.create_process = function (request, response) {
    var body = '';
    request.on('data', function (data) {
        body += data;
    })
    request.on('end', function () {

        var post = qs.parse(body);
        var name = post.name;
        var profile = post.profile;
        db.query('INSERT INTO author (name,profile) VALUES(?,?)', [name, profile], function (error, result) {
            if (error) {
                throw (error);
            }
            response.writeHead(302, { Location: '/author' });
            response.end();
        });
    });
}

exports.update = function (request, response) {
    var _url = request.url;
    var queryData = url.parse(_url, true).query;
    db.query('SELECT * FROM topic', function (error, topics) {
        if (error) {
            throw (error);
        }
        db.query('SELECT * FROM author', function (error2, authors) {
            if (error2) {
                throw (error2);
            }
            db.query('SELECT * FROM author where id=?', [queryData.id], function (error3, author) {
                if (error3) {
                    throw (error3);
                }
                var tag = templateFN.authorList(authors);
                var title = 'Author List';
                var list = templateFN.LIST(topics);
                var template = templateFN.HTML(title, list
                    , `<h2>${sanitizeHTML(title)}</h2>
                ${tag}
                <h1> Author Update </h1>
                <form action="/author/update_process" method='post'>
                    <input type='hidden' name='id' value='${author[0].id}'/>
                    <p><input type='text' name='name' value='${sanitizeHTML(author[0].name)}' placeholder='Input a new author name'/></p>
                    <p><textarea name='profile' placeholder='Input the author's profile'>${sanitizeHTML(author[0].profile)}</textarea>
                    </p>
                    <p><input type='submit' value='Author Update'/></p>
                </form>
                <style>
                table{
                    border-collapse: collapse;
                }
                td{
                    border:1px solid black;
                }
                </style>
                `
                    , `<a href='/create'>create</a>`
                );

                response.writeHead(200);
                response.end(template);
            })
        })
    })
}

exports.update_process = function (request, response) {
    var body = '';
    request.on('data', function (data) {
        body += data;
    })
    request.on('end', function () {
        var post = qs.parse(body);
        db.query('UPDATE author SET name=?, profile=? where id=?', [post.name, post.profile, post.id], function (error, result) {
            if (error) {
                throw (error);
            }
            response.writeHead(302, { Location: "/author" });
            response.end();
        })
    })
}

exports.delete_process = function (request, response) {
    var body = '';
    request.on('data', function (data) {
        body = body + data;
    });
    request.on('end', function () {
        var post = qs.parse(body);
        db.query('DELETE FROM topic WHERE author_id=?', [post.id], function (error, result) {
            if (error) {
                throw (error);
            }
            db.query('DELETE FROM author where id=?', [post.id], function (error2, result2) {
                if (error2) {
                    throw (error2);
                }
                response.writeHead(302, { Location: '/author' });
                response.end();
            })
        })
    })
}