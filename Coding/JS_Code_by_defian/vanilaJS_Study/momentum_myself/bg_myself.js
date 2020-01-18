const bodyBg = document.querySelector("bdoy")


const IMG_NUM = 4;


function paintBg(num){
	const img = new Image();
	img.src = `image/${num.+1}.jpg`;
	body.appendChild(img);
}

function init(){
	const randomnumber = genRandom();
	paintBg(randomnumber);
}

init();