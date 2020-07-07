module.exports = function (app) {
    var authData = {
        email: 'hckim@hyundai-autoever.com',
        password: 'P@ssw0rd9',
        nickname: 'kim'
    }


    var passport = require('passport')
        , LocalStrategy = require('passport-local');
    app.use(passport.initialize());
    app.use(passport.session());

    passport.serializeUser(function (user, done) {
        done(null, user.email);
    })

    passport.deserializeUser(function (id, done) {
        done(null, authData);
    })

    passport.use(new LocalStrategy(
        {
            usernameField: 'email',
            passwordField: 'pwd'
        },
        function (username, password, done) {
            if (username === authData.email) {
                if (password === authData.password) {
                    return done(null, authData);
                } else {
                    return done(null, false, {
                        message: 'Incorrect password'
                    })
                }
            } else {
                return done(null, false, {
                    message: 'Incorrect username.'
                })
            }
        }
    ));
    return passport;
}