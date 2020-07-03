import React from 'react';
import ReactDom from 'react-dom';
import { hot } from 'react-hot-loader/root';

//import ResponseCheck from './ResponseCheck.jsx';
//import NumberBaseball from './RenderTest.jsx';
import RSP from './RSP.jsx';


const Hot = hot(RSP);

ReactDom.render(<RSP/>, document.querySelector('#root'));