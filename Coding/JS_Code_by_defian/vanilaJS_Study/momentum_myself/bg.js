const bgDocu = document.querySelector('body');

const bgNum = 5;


function paintBg(imgNumber) {
    const image = new Image();
    image.src = `images/${imgNumber}.jpg`;
    image.classList.add('bgImage');
    bgDocu.appendChild(image);
}

function init() {
    const imgNumber = Math.floor(Math.random() * bgNum) + 1;
    paintBg(imgNumber);
}

init();