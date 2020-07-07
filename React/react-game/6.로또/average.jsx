import React, { PureComponent } from 'react';


class Average extends PureComponent {
    constructor(props){
        console.log(props);
        super(props);
    }

    render(){
        
        return (this.props.averageInfo.length === 0
            ? null
            : <>
             <div> 평균 시간 : {this.props.averageInfo.reduce((a,c) => 
                 a+c
                ) / this.props.averageInfo.length } ms</div>
            <button >리셋</button>
            </>
        ) 
    }
}

export default Average;