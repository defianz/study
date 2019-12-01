import React, {Component, Fragment} from 'react';



class MyName extends Component{
  
    static defaultProps={
        team :"기본팀",
        name:"기본이름"
    }

  render(){
    return (

    <Fragment>
        
        <div>
            Hello React {this.props.team} : {this.props.name}
        </div>
        
    </Fragment>
  
    );

  }

}

export default MyName;


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