import React, {Component, Fragment} from 'react';




class Counter extends Component{
  


  state = {
    number : 0
  }

  handleIncrease = () => {
    this.setState(
      {
        number : this.state.number +1
      }
    )
  }

  handleDecrease = () => {
    console.log("감소");
    this.state.number >0 &&
    this.setState(
      {
        number : this.state.number -1
      }
    )

    }

  render(){

    console.log("다시그리냐");
    return (
    <Fragment>
        <h1>카운터</h1>
        <div>값 : {this.state.number} </div>
        <button onClick={this.handleIncrease}>+</button>
        <button onClick={this.handleDecrease}>-</button>
    </Fragment>
  
    );

  }

}

export default Counter;


/*
function App() {
  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <p>
          Edit <code>src/App.js</code> and save to reload.
        </p>
        <a
          className="App-link"
          href="https://reactjs.org"
          target="_blank"
          rel="noopener noreferrer"
        >
          Learn React
        </a>
      </header>
    </div>
  );
}
*/