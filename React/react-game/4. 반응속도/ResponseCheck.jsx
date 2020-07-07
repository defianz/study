import React, { Component } from 'react';
import Average from './average';


class ResponseCheck extends Component {
    state = {
        state : 'waiting',
        message: '클릭해서 시작하세요.',
        result : [],
    };

    timeout;
    startTime;

    onClickScreen = () => {
        const { state, message, result } = this.state;
        if( state === 'waiting' ){
            this.setState({
                state:'ready',
                message:'초록색이 되면 클릭하세요',
            });
            this.timeout = setTimeout(()=>{
                this.setState({
                    state:'now',
                    message:'지금 클릭하세요',
                })
                this.startTime = new Date();
            }, Math.floor(Math.random()*1000)+ 2000);
        } else if (state==='ready'){// 성급하게 클릭
            this.setState({
                state:'waiting',
                message:'잘못 눌렀습니다. 클릭해서 시작하세요.'
            })
            clearTimeout(this.timeout);

        } else if (state ==='now'){ //반응속도 체크
            const time = new Date()-this.startTime;
            console.log(time+"ms");
            this.setState((prevState)=>{
                return {state:'waiting',
                message:'성공입니다.',
                result : [...prevState.result, time]
                }
            })
            
            // this.renderAverage();
        }
    }

    onReset = () => {
        this.setState({
            result: [],
        })
    }

    renderAverage = () => {
        const { result } = this.state;
        return result.length === 0 
            ? null
            : <>
            <div> 평균 시간 : {this.state.result.reduce((a,c) => 
                 a+c
                ) / this.state.result.length } ms</div>
            <button onClick={this.onReset}>리셋</button>
            </>
    }

    render() {
        const { state, message, result } = this.state;
        return(
            <>
            <div
                id="screen"
                className={state}
                onClick = {this.onClickScreen}
            >
                {message}
            </div>
            {this.renderAverage()}
            {/* <Average avaerageInfo={result}/> */}
            </>
        );
    };
}

export default ResponseCheck;