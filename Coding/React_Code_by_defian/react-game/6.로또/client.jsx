import React from 'react';
import ReactDom from 'react-dom';
import { hot } from 'react-hot-loader/root';

//import ResponseCheck from './ResponseCheck.jsx';
//import NumberBaseball from './RenderTest.jsx';
//import RSP from './RSP.jsx';
import Lotto from './Lotto.jsx';

const Hot = hot(Lotto);

ReactDom.render(<Lotto/>, document.querySelector('#root'));