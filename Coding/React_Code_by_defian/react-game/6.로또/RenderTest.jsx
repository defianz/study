import React, { Component, PureComponent } from 'react';

class Test extends PureComponent {
    state = {
        counter : 0,
        array:[],
    }

    // shouldComponentUpdate(nextProps, nextState, nextContext){
    //     if(this.state.counter !== nextState.counter){
    //         return true;
    //     }
    //         return false;
    // }

    onClick = () => {
        console.log("여기")
        // this.setState({
        //     array : [...this.state.array,1]
        // })
        this.setState({
            array:[...this.state.array,1]
        })
    };

    render() {
        console.log('렌더링',this.state);
        return (
            <div>
                <button onClick={this.onClick}>클릭</button>
            </div>
        )
    }
}

export default Test;  