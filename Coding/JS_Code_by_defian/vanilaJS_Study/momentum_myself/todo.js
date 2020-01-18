const toDoForm = document.querySelector('.js-todoform'), toDoloaded = document.querySelector('#toDoLoaded'),
    toDoInput = toDoForm.querySelector('input');
const TODO_LS = 'toDoList_LS';

let toDos = [];

function deleteTodos(event) {
    event.preventDefault();
    console.log("삭제");
    const btn = event.target;
    const delli = btn.parentNode;
    toDoloaded.removeChild(delli);
    const cleanTodos = toDos.filter(function (element) {
        return element.id !== parseInt(delli.id);
    })
    toDos = cleanTodos;
    saveTodos();
}

function paintToDo(value) {
    const li = document.createElement('li');
    const span = document.createElement('span');
    const delBtn = document.createElement('button');
    const newId = toDos.length + 1;
    li.id = newId;
    delBtn.innerHTML = "❌";
    delBtn.addEventListener('click', deleteTodos);
    span.innerText = value;
    li.appendChild(delBtn);
    li.appendChild(span);
    toDoloaded.appendChild(li);
    const toDoObj = {
        text: value,
        id: newId
    }

    toDos.push(toDoObj);
    saveTodos();
}

function handleToDoSubmit(event) {
    event.preventDefault();
    const inputdata = toDoInput.value;
    paintToDo(inputdata);
    toDoInput.value = '';
}

function saveTodos() {
    localStorage.setItem(TODO_LS, JSON.stringify(toDos));

}

function loadData() {
    const currTodo = localStorage.getItem(TODO_LS);
    if (currTodo !== null) {
        //load data;
        const loadeddata = JSON.parse(localStorage.getItem(TODO_LS));
        loadeddata.forEach(function (element) {
            paintToDo(element.text);
        });
    }
}

function init() {
    loadData();
    toDoForm.addEventListener("submit", handleToDoSubmit);
}

init();