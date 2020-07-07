var mysql = require('mysql');
var connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'password',
    database: 'opentutorials'
});

connection.connect();

connection.query('SELECT * from topic', function (error, results, field) {
    if (error) {
        conmsole.log(error);
    }
    console.log(results);
});

connection.end();