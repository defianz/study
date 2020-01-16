const form = document.querySelector(".js-form"),
	input = document.querySelector("input"),
	greeting = document.querySelector(".js-greetings")
	
const USER_LS = 'currentUser',
SHOWING_CN = "showing";


function handleSubmit(event){
	event.preventDefault();
	const currentValue = input.value;
	paintGreeting(currentValue);
	saveName(currentValue);
}

function saveName(text){
	localStorage.setItem(USER_LS,text);
}

function askForName(){
	form.classList.add(SHOWING_CN);
	form.addEventListener("submit",handleSubmit)
}

function paintGreeting(text){
	form.classList.remove(SHOWING_CN);
	greeting.classList.add(SHOWING_CN);
	greeting.innerText = `Hello ${text}`;
}

function loadName(){
	const currentUser = localStorage.getItem(USER_LS);
	if(currentUser === null){
		// she is not
		askForName();
	} else {
		// she is 
		paintGreeting(currentUser);
	}
}
	
function init() {
	
	loadName();
}

init();