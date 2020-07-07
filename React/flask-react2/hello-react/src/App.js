import React, {Component, Fragment} from 'react';
import Counter from './Counter'
import MyName from './MyName'



class App extends Component{

  render(){
    const myName = "김형철"
    let myTeam ="인프라기술팀"

    return (
    <Fragment>
      <MyName name={"아이고"} team={"데이고"} />
      <Counter />
    </Fragment>
  
    );

  }

}

export default App;


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