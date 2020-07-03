import React, { useState, useRef } from 'react';


const ResponseCheck = () => {
    const [state,setState] = useState("waiting");
    const [message,setMessage] = useState("클릭해서 시작하세요.");
    const [result,setResult] = useState([]);
    const timeOut = useRef(null);
    const startTime = useRef();
    const endTime = useRef();

    const onClickScreen = () => {
        if( state === 'waiting' ){
            setState('ready');
            setMessage('초록색이 되면 클릭하세요');

            timeOut.current = setTimeout(()=>{
                setState('now');
                setMessage('지금 클릭하세요');
                startTime.current = new Date();
            }, Math.floor(Math.random()*1000)+ 2000);
        } else if (state==='ready'){// 성급하게 클릭
            setState('waiting');
            setMessage('잘못 눌렀습니다. 클릭해서 시작하세요.');
            clearTimeout(timeOut);

        } else if (state ==='now'){ //반응속도 체크
            endTime.current = new Date();
            const time = endTime.current -startTime.current ;
            console.log(time+"ms");
            setState('waiting');
            setMessage('성공입니다.');
            setResult((prevResult) => [...prevResult,time]);
        }
    }

    const onReset = () => {
        setResult([]);
    }

    const renderAverage = () => {
        return result.length === 0 
            ? null
            : <>
            <div> 평균 시간 : {result.reduce((a,c) => 
                 a+c
                ) / result.length } ms</div>
            <button onClick={onReset}>리셋</button>
            </>
    }

    return (
        <>
        <div
            id="screen"
            className={state}
            onClick = {onClickScreen}
        >
            {message}
        </div>
        {renderAverage()}
        {/* <Average avaerageInfo={result}/> */}
        </>
    );
}

export default ResponseCheck;