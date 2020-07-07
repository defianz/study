const COORDS = "coords";
const API_KEY = "241051bf13976dd3ddf8b8d9f247255e";
const weather = document.querySelector(".js-weather");



function getWeather(lat, lon) {
    fetch(`https://api.openweathermap.org/data/2.5/weather?lat=${lat}&lon=${lon}&appid=${API_KEY}&units=metric`
    ).then(function (response) {
        return response.json();
    }).then(function (json) {
        console.log(json);
        const temperature = json.main.temp;
        const place = json.name;
        weather.innerText = `${temperature} @ ${place}`;
    })
}

function saveCoords(obj) {
    localStorage.setItem(COORDS, JSON.stringify(obj));
}


function handleGeoSucces(value) {

    const latitude = value.coords.latitude;
    const longitude = value.coords.longitude;
    const coordsObj = {
        latitude: latitude,
        longitude: longitude
    };
    saveCoords(coordsObj);
    getWeather(latitude, longitude);
}

function handleGeoError() {
    console.log("날씨를 로드할 수 없습니다.");
}

function askCoords() {
    navigator.geolocation.getCurrentPosition(handleGeoSucces, handleGeoError)
}

function loadWeather() {
    const currCoords = JSON.parse(localStorage.getItem(COORDS));
    if (currCoords === null) {
        askCoords();
    } else {
        getWeather(currCoords.latitude, currCoords.longitude);
    }
}

function init() {
    loadWeather();
}

init();