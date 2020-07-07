var db = require('./db.js');
var templateFN = require('./template.js');
var url = require('url');
var qs = require('querystring');
var sanitizeHTML = require('sanitize-html');

exports.home = function (request, response) {
    db.query(`SELECT * FROM topic`, function (error, topics) {
        var title = 'Welcome';
        var description = 'Hello, Node.js';
        var list = templateFN.LIST(topics);
        var template = templateFN.HTML(title, list
            , `<h2>${title}</h2><p>${description}</p>`
            , `<a href='/create'>create</a>`
        );
        response.writeHead(200);
        response.end(template);
    });
}

exports.page = function (request, response) {
    var _url = request.url;
    var queryData = url.parse(_url, true).query;
    db.query(`SELECT * FROM topic`, function (error, topics) {
        if (error) {
            throw error;
        }
        db.query(`SELECT * FROM topic LEFT JOIN author on topic.author_id=author.id WHERE topic.id=?`, [queryData.id], function (error2, topic) {
            if (error2) {
                throw error2;
            }
            var title = topic[0].title;
            var description = topic[0].description;
            var list = templateFN.LIST(topics);
            var template = templateFN.HTML(title, list
                , `<h2>${sanitizeHTML(title)}</h2>
            <p>${sanitizeHTML(description)}</p>
            <p>by ${sanitizeHTML(topic[0].name)}</p>`
                , `<a href=' /create'>create</a> 
            <a href='/update?id=${queryData.id}'>update</a>
            <form action='/delete_process' method='post'>
             <input type='hidden' name='id' value='${queryData.id}'/>
             <input type='submit' value='delete'/>
            </form>`);
            response.writeHead(200);
            response.end(template);
        });
    });
}

exports.create = function (request, response) {
    db.query('SELECT * FROM topic', function (error, topics) {
        db.query(`SELECT * FROM author`, function (error2, authors) {

            var tag = templateFN.authorSelect(authors);
            var title = 'Web - create';
            var list = templateFN.LIST(topics);
            var template = templateFN.HTML(sanitizeHTML(title), list, `
          <form action='/process_create' method='post'>
            <p><input type='text' name='title' placeholder='title'/></p>
            <p><textarea name='description' placeholder='description22'></textarea></p>
            ${tag}
            <p>
            <input type="submit">
            </p>
          </form>
          `
                , `<a href='/create'>create</a>`
            );
            response.writeHead(200);
            response.end(template);
        });
    });
}

exports.create_process = function (request, response) {
    var body = '';
    request.on('data', function (data) {
        body += data;
    })
    request.on('end', function () {
        var post = qs.parse(body);
        // console.log(post.title);
        var title = post.title;
        var description = post.description;
        db.query(`INSERT INTO TOPIC (title,description,created,author_id) 
      VALUES(?,?,NOW(),?)`,
            [title, description, post.author],
            function (error, result) {
                if (error) {
                    throw error;
                }
                response.writeHead(302, { Location: `/?id=${result.insertId}` });
                response.end()
            }
        );


    });

}

exports.update = function (request, response) {
    var _url = request.url;
    var queryData = url.parse(_url, true).query;
    db.query(`SELECT * FROM topic`, function (error, topics) {
        if (error) {
            throw (error);
        }
        // fs.readFile(`data/${filteredId}`, 'utf8', function (err, description) {
        db.query(`SELECT * FROM topic where id=?`, [queryData.id], function (error2, topic) {
            if (error2) {
                throw (error2);
            }
            db.query(`SELECT * FROM author`, function (error2, authors) {
                var list = templateFN.LIST(topics);
                var template = templateFN.HTML(topic[0].title, list
                    , `
                <form action='/update_process' method='post'>
                <input type='hidden' name='id' value='${topic[0].id}'/>
                  <p><input type='text' name='title' placeholder='title' value='${sanitizeHTML(topic[0].title)}'/></p>
                  <p><textarea name='description' placeholder='description22'>${sanitizeHTML(topic[0].description)}</textarea></p>
  
                    ${templateFN.authorSelect(authors, topic[0].author_id)}
  
                  <p>
                  <input type="submit">
                  </p>
                </form>
                `
                    , `<a href='/create'>create</a> <a href='/update?id=${topic[0].id}'>update</a>`);
                response.writeHead(200);
                response.end(template);
            });
        });
    });
}

exports.update_process = function (request, response) {
    var body = '';
    request.on('data', function (data) {
        body += data;
    })
    request.on('end', function () {
        var post = qs.parse(body);
        var title = post.title;
        var description = post.description;
        db.query(`UPDATE topic set title=?,description=?,author_id=? WHERE id=?`, [title, description, post.author, post.id], function (error2, result) {
            response.writeHead('302', { Location: `/?id=${post.id}` });
            response.end()
        })

    })
}

exports.delete_process = function (request, response) {
    var body = '';
    request.on('data', function (data) {
        body += data;
    })
    request.on('end', function () {
        var post = qs.parse(body);
        db.query(`DELETE FROM topic where id=?`, [post.id], function (error, result) {
            response.writeHead('302', { Location: `/` });
            response.end()
        });
    })
}