const greetingform = document.querySelector('.js-greeting'), nameInput = greetingform.querySelector("input");
greeting = document.querySelector('.js-name');
const NAME_LS = 'userNameLS';

function paintName(name) {
    console.log(name);
    greeting.classList.add('showing');
    greeting.innerText = `Hello, ${name}`;
    greetingform.classList.remove('showing');
}

function handleSubmit(event) {
    event.preventDefault();
    localStorage.setItem(NAME_LS, nameInput.value);
    paintName(nameInput.value);
}


function saveName() {
    console.log("안녕");
    greetingform.addEventListener("submit", handleSubmit);
}

function loadName() {
    const currentName = localStorage.getItem(NAME_LS);
    if (currentName !== null) {
        paintName(currentName);
    } else {
        // save the name
        saveName();
    }
}

function init() {
    loadName();
}

init();