import React from 'react';
import ReactDom from 'react-dom';
import { hot } from 'react-hot-loader/root';

//import ResponseCheck from './ResponseCheck.jsx';
//import NumberBaseball from './RenderTest.jsx';
//import RSP from './RSP.jsx';
import TicTacToe from './TicTacToe.jsx';

const Hot = hot(TicTacToe);

ReactDom.render(<TicTacToe/>, document.querySelector('#root'));