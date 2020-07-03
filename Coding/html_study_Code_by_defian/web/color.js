var Links = {
    setColor: function (color) {
        // var tmp = document.querySelectorAll('a');
        // for (var i = 0; i < tmp.length; i++) {
        //     tmp[i].style.color = color;
        // }
        $('a').css("color", color);
    }

}

var Body = {
    setColor: function (color) {
        // document.querySelector('body').style.co(lor = color;
        $('body').css('color', color);
    },
    setBackgroundColor: function (color) {
        // document.querySelector('body').style.backgroundColor = color;
        $('body').css('backgroundColor', color);
    }
}

function nightDayHandler(self) {
    var target = document.querySelector('body');
    if (self.value === 'night') {
        self.value = 'day';
        Body.setColor('white');
        Body.setBackgroundColor('black');
        Links.setColor('powderblue')
    } else {
        self.value = 'night';
        Body.setColor('black');
        Body.setBackgroundColor('white');
        Links.setColor('blue')
    }
}
