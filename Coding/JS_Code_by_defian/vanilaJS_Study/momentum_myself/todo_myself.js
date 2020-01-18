const todoForm = document.querySelector(".js-todo"), todoInput = todoForm.querySelector("input"), jstodoList = document.querySelector("#toDoList");

const TODO_LS = "toDoList";
let toDos = [];
 
function saveToDos(){
	localStorage.setItem(TODO_LS,JSON.stringify(toDos));
}

function deleteToDo(event){
	console.log(event.target);
	let btnTarget = event.target;
	let liTarget = btnTarget.parentElement;
	jstodoList.removeChild(liTarget);
	const cleanToDos = toDos.filter(function(toDo){
		return toDo.id !== parseInt(liTarget.id);
	});
	toDos= cleanToDos;
	saveToDos();
	
}

function paintToDo(currTodo){
	const li = document.createElement("li");
	const delBtn = document.createElement("button");
	const span = document.createElement("span");
	const newId = toDos.length +1;
	
	delBtn.innerHTML = "❌";
	delBtn.addEventListener("click",deleteToDo);
	span.innerText = currTodo;
	li.appendChild(delBtn);
	li.appendChild(span);
	li.id = newId;
	console.log(li);
	jstodoList.appendChild(li);
	const todoOjb = {
			text : currTodo,
			id : newId
	}
	toDos.push(todoOjb);
	saveToDos()	
}


function handleSubmit(event){
	console.log("hg");
	event.preventDefault();
	const currTodo = todoInput.value;
	paintToDo(currTodo);
	todoInput.value="";
	
}

function loadData(){
	console.log("hg");
	const loadedDoList = localStorage.getItem(TODO_LS);
	if(loadedDoList !== null){
		const parseData = JSON.parse(loadedDoList);
		parseData.forEach(function(toDo){
			paintToDo(toDo.text);
		})
	}
}


function init(){
	loadData();
	todoForm.addEventListener("submit",handleSubmit);
}

init();