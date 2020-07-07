import React, { useState, useRef, useEffect, useMemo, useCallback } from 'react'
import Ball from './Ball.jsx'

function getWinNumbers() {
    console.log('getWinNumber');
    const candidate = Array(45).fill().map((v, i) => i + 1);
    const shuffle = [];
    while (candidate.length > 0) {
        shuffle.push(candidate.splice(Math.floor(Math.random() * candidate.length), 1)[0]);
    }
    const bonusNumber = shuffle[shuffle.length - 1];
    const winNumbers = shuffle.slice(0, 6).sort((p, c) => p - c);
    return [...winNumbers, bonusNumber];
}


const Lotto = () => {
    const lottoNumber = useMemo(() => getWinNumbers(), []);
    const [winNumbers, setWinNumbers] = useState(lottoNumber);
    const [winBalls, setWinballs] = useState([]);
    const [bonus, setBonus] = useState(null);
    const [redo, setRedo] = useState(false);
    const timeouts = useRef([]);

    useEffect(() => {
        console.log('useEffect');
        for (let i = 0; i < winNumbers.length - 1; i++) {
            timeouts.current[i] = setTimeout(() => {
                setWinballs((prevBalls) => {
                    return [...prevBalls, winNumbers[i]]
                })
            }, (i + 1) * 1000);
        }
        timeouts.current[6] = setTimeout(() => {
            setBonus(winNumbers[6]);
            setRedo(true);
        }, 7000);
        return () => {
            timeouts.current.forEach((v) => {
                clearTimeout(v);
            });
        };
    }, [timeouts.current]) // 빈 배열이면 componentDidMount 와 동일
    // 배열에 요소가 있으면 componentDidMount랑 componentDidUpdate 둘 다 수행


    const onClickRedo = useCallback(() => {
        console.log(winNumbers);
        setWinNumbers(getWinNumbers());
        setWinballs([]);
        setBonus(null);
        setRedo(false);
        timeouts.current = [];
    }, [winNumbers])


    return (
        <>
            <div>당첨 숫자</div>
            <div id="결과창">
                {winBalls.map((v) => <Ball key={v} number={v} />)}
            </div>
            <div>보너스!</div>
            {bonus && <Ball number={bonus} onClick={onClickRedo} />}
            {redo && <button onClick={onClickRedo}>한 번 더!</button>}
        </>
    );
}

export default Lotto;