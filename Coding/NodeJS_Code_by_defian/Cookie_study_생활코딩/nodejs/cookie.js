var http = require('http')
var cookie = require('cookie')

http.createServer(function (request, response) {
    console.log(request.headers.cookie);
    var cookies = {};

    if (request.headers.cookie !== undefined) {
        var cookies = cookie.parse(request.headers.cookie);
    }

    console.log(cookies);
    console.log(cookies.yummy_cookie);
    response.writeHead(200, {
        'Set-Cookie': [
            'yummy_cookie=choco'
            , 'tasty_cookie=strawberry'
            , `Permanent=cookies; Max-age=${60 * 60 * 24 * 30}`
            ,
        ]
    });


    response.end('Cookie!');
}).listen(3000);