var sanitizeHTML = require('sanitize-html');

module.exports = {
  HTML: function (title, list, body, control) {
    var tmp = `
              <!doctype html>
              <html>
              <head>
                <title>WEB2- ${sanitizeHTML(title)}</title>
                <meta charset="utf-8">
                <style>
                textarea{
                  width:500px;
                  height:200px;
                }
                </style>
              </head>
              <body>
              
                <h1><a href="/">WEB</a></h1>
                <a href="/author">author</a>
                ${list}
                ${control}
                ${body}
              </body>
              </html>
              `;
    return tmp;
  },
  LIST: function (topics) {
    var tmp = '<ul>';
    var i = 0;
    while (i < topics.length) {
      tmp = tmp + `<li><a href="/?id=${topics[i].id}">${sanitizeHTML(topics[i].title)}</a></li>`;
      i = i + 1;
    }
    tmp = tmp + '</ul>';
    return tmp;
  },
  authorSelect: function (authors, author_id) {
    var tmp = '';
    authors.forEach(function (author) {
      var selected = '';
      if (author.id === author_id) {
        selected = ` selected`;
      }
      tmp += `<option value="${author.id}"${selected}>${sanitizeHTML(author.name)}</option>`
    });
    return `<p>
    <select name="author">
      ${tmp}
    </select>
  </p>`;
  },
  authorList: function (authors) {
    var tmp = '<table>';
    authors.forEach(function (author) {
      tmp += `<tr>
                <td>${sanitizeHTML(author.name)}</td>
                <td>${sanitizeHTML(author.profile)}</td>
                <td><a href='/author/update?id=${author.id}'>update</a></td>
                <td>
                <form action="/author/delete_process" method="post">
                  <input type="hidden" name="id" value="${author.id}"/>
                  <input type="submit" value="Delete"/>
                </form>
                </td>
              </tr>
              `
    })
    tmp += '</table>';
    return tmp;
  }
}