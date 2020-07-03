import axios from 'axios'

export function getPhones() {
    return axios.get('http://localhost:5000/phones')
}

export function addPhone(param) {
    return axios({
        method: 'post',
        url: 'http://localhost:5000/addPhone',
        data: param
    })
}

export function deletePhone(param) {
    return axios({
        method: 'post',
        url: 'http://localhost:5000/deletePhone',
        data: param
    })
}

export function updatePhone(param) {
    return axios({
        method: 'post',
        url: 'http://localhost:5000/updatePhone',
        data: param
    })
}