const toDoForm = document.querySelector(".js-toDoForm"),
	toDoInput = toDoForm.querySelector("input"),
	toDoList = document.querySelector(".js-toDoList");

const TODOS_LS='toDos';

let toDos = [];

function saveToDos(){
	localStorage.setItem(TODOS_LS,JSON.stringify(toDos));
}

function filterFn(toDo){
	return toDo.id === 1;
}

function deleteToDo(){
	const btn = event.target;
	console.log(btn);
	const li = btn.parentNode;
	toDoList.removeChild(li);
	const cleanToDos = toDos.filter(function(toDo){
		return toDo.id !== parseInt(li.id);
	});
//	console.log(cleanToDos);
	toDos = cleanToDos;
	saveToDos();
}


function paintToDo(text){
	const li = document.createElement("li");
	const delBtn = document.createElement("button");
	const span = document.createElement("span");
	const newId = toDos.length +1;
	delBtn.innerHTML = "❌";
	delBtn.addEventListener("click",deleteToDo);
	span.innerText = text;
	li.appendChild(delBtn);
	li.appendChild(span);
	li.id = newId;
	toDoList.appendChild(li);
	const toDoObj = {
			text :text,
			id :newId
	}
	toDos.push(toDoObj);
	saveToDos()
}

function handleSubmit(event){
	event.preventDefault();
	const currentValue = toDoInput.value;
	paintToDo(currentValue);
	toDoInput.value="";
	
}


function loadTodos(){
	const loadedToDos = localStorage.getItem(TODOS_LS);
	if (toDos !== null){
		const parsedToDos = JSON.parse(loadedToDos);
		parsedToDos.forEach(function(toDo){
			paintToDo(toDo.text);
		});
	} 
}

function init(){
	loadTodos();
	toDoForm.addEventListener("submit",handleSubmit);
}

init();