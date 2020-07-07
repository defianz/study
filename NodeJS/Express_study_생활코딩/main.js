const express = require("express")
const app = express();
var fs = require("fs");
var template = require('./lib/template.js');

var qs = require('querystring')
var bodyParser = require("body-parser");
var compression = require("compression");

var helmet = require('helmet')
var session = require('express-session')
var FileSotre = require('session-file-store')(session)
var flash = require('connect-flash')

app.use(helmet());

app.use(express.static('public'));
app.use(bodyParser.urlencoded({ extended: false }));
app.use(compression());
app.use(session({
  secret: 'asdfjnaskdfnj',
  resave: false,
  saveUninitialized: true,
  store: new FileSotre()
}))
app.use(flash());

app.get('/flash', function (req, res) {
  req.flash('msg', 'Flash is back!')
  res.send("flash")
})

app.get('/flash-display', function (req, res) {
  var fmsg = req.flash();
  res.send(fmsg);
  // res.render('index', { message: req.flash('info') });
})


var passport = require('./lib/passport')(app);


app.get('*', function (request, response, next) {
  fs.readdir('./data', function (error, filelist) {
    request.list = filelist;
    next();
  })
})

var topicRouter = require('./routes/topic');
var indexRouter = require('./routes/index');
var authRouter = require('./routes/auth')(passport);

app.use('/', indexRouter);
app.use('/topic', topicRouter);
app.use('/auth', authRouter);


app.use(function (request, response) {
  response.status(404).send("Sorry cant find that!");
})

app.use(function (err, req, res, next) {
  console.error(err.stack)
  res.status(500).send("Something broke!")
})

app.listen(3000, () => console.log("Example app listening on port 3000"))
