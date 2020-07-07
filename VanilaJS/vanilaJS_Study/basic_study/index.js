const title = document.querySelector("#title");
//title.innerHTML="Hi! Froms JS";
//title.style.color= 'red';
//document.title='I own you';
//console.dir(document);
//
//const BASE_COLOR = "red";
//const OTHER_COLOR = "blue";


const CLICKED_CLASS = "clicked";

function handleClick(){
	title.classList.toggle(CLICKED_CLASS);
//	const hasClass = title.classList.contains(CLICKED_CLASS);
//	if(!hasClass){
//		title.classList.add(CLICKED_CLASS);
//	} else{
//		title.classList.remove(CLICKED_CLASS);
//	}
}

//function handleClick(){
//	console.log(event);
//	console.log("i have been resize");
//
//	if(title.style.color === 'blue'){
//		title.style.color='red';
//	} else{
//		title.style.color='blue';
//	}
//	console.log("hadleclick()");
//	const currentColor = title.style.color;
//	if(currentColor === BASE_COLOR){
//		title.style.color = OTHER_COLOR;
//		console.log(title.style.color);
//	} else {
//		title.style.color = BASE_COLOR;
//		console.log("2번쨰"+title.style.color);
//	}
//}
//title.addEventListener("click",handleClick)



function init(){
	title.addEventListener("click",handleClick);
}
init();


// const age = prompt("몇살이니");
// if (age > 18){
//	 console.log("18살이상");
// } else{
//	 console.log("18살이하");
// }