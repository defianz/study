import React, { useRef, useState } from 'react';
import Try from './Try.jsx';

function getNumbers(){ //숫자 네개를 겹치지않고 뽑음
    const candidate = [1,2,3,4,5,6,7,8,9];
    const array = [];
    for(let i = 0; i< 4; i += 1){
        const choosen = candidate.splice(Math.floor(Math.random()*(9-i)),1)[0];
        array.push(choosen);
    }
    return array;
}

const NumberBaseball = () => {
    const [result,setResult] = useState('');
    const [value,setValue] = useState('');
    const [answer,setAnswer] = useState(getNumbers());
    const [tries, setTries] = useState([]);
    const inputEl = useRef(null);

    const onSubmitForm = (e) => {
        // const { result, value, answer, tries } = state;
        e.preventDefault();
        if(value === answer.join('')){
            setResult('홈런');
            setTries((prevTries)=>
               [...prevTries, {try:value, result:'홈런!'}]
            )
            alert('게임을 다시 시작합니다!');
            setValue('');
            setAnswer(getNumbers());
            setTries([]);
        }else{
            const answerArray = value.split('').map((v)=>parseInt(v));
            let strike =0;
            let ball =0;
            if(tries.length >= 9){
                setResult('10번 넘게 틀려서 실패! 답은 '+answer.join(",")+'였습니다!');
                alert('게임을 다시 시작합니다!');
                setValue('');
                setAnswer(getNumbers());
                setTries([]);

            } else {
                for (let i =0; i<4 ;i+=1){
                    if(answerArray[i] === answer[i]){
                        strike += 1;
                    } else if (answer.includes(answerArray[i])){
                        ball += 1;
                    }
                }
            }
                setValue('');
                setTries((prevTries)=>
                   [...prevTries, { try:value, result: strike +'스트라이크,'+ ball +'볼 입니다.'}]
                )
        }
        // input.focus();
        inputEl.current.focus();
    };

    const onChangeInput = (e) => {
        setValue(e.target.value);
    };

    return (
        <>
        <h1>{result}</h1>

        <form onSubmit={onSubmitForm}>
            <input ref={inputEl} maxLength={4} value={value} onChange={onChangeInput}/>
            <button>입력</button>
        </form>
        <div>시도: {tries.length} </div>
        <ul>
            {tries.map((v,i) =>{
                    return (
                        <Try key={`${i+1}차 시도 : `} tryInfo={v}/>
                    )
                }
            )}
        </ul>
        </>
    );
};

export default NumberBaseball; // import NumberBaseball;


// export const hello = 'hello'; // import { hello }
// export const bye = 'hello'; // import { hello, bye }

// const React = require('react');
// exports.hello = 'hello';
// module.exports = NumberBaseball;
