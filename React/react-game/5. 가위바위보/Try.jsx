
import React, { Component, PureComponent, memo, useState } from 'react';

class Try extends PureComponent {
    constructor(props){
        console.log(props);
        super(props);
    };

    render(){
        const tryInfo = this.props.tryInfo;
        return(
        
        <li>
            <div>{tryInfo.try}</div>
            <div>{tryInfo.result}</div>
        </li>
        );
    }
}

// const Try = memo(({ tryInfo }) => {
//     const [result, setResult] = useState(tryInfo.result);

//     const onClick = () => {
//         setResult('1');
//     };

//     return (
//         <li>
//             <div>{tryInfo.try}</div>
//             <div onClick={onClick}>{result}</div>
//         </li>
//     )
// })

export default Try;