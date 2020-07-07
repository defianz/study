const formName = document.querySelector(".js-userName"),
			input=document.querySelector("input"),
			greeting = document.querySelector(".js-greetings");

const NAME_LS = "userName", NAME_CN="showing";

function paintName(currentValue){
	formName.classList.remove(NAME_CN);
	greeting.innerText = `Hi, Get the fuck off ${currentValue}`;
	greeting.classList.add(NAME_CN);
	
}

function handleSubmit(event){
	event.preventDefault();
	const currentValue = input.value;
	paintName(currentValue);
	localStorage.setItem(NAME_LS,currentValue);
}

function askForName(){
	formName.classList.add(NAME_CN);
	formName.addEventListener("submit",handleSubmit);
}

function findName(){
	const userName =localStorage.getItem(NAME_LS);
	if (userName === null){
		askForName();
	} else{
		paintName(userName);
		
	}
}


function init(){
	findName();
}

init();