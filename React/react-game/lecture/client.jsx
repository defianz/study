import React from 'react';
import ReactDom from 'react-dom';
import { hot } from 'react-hot-loader/root';

//import ResponseCheck from './ResponseCheck.jsx';
//import NumberBaseball from './RenderTest.jsx';
//import RSP from './RSP.jsx';
// import Lotto from './Lotto.jsx';
import MineSearch from './MineSearch.jsx'

const Hot = hot(MineSearch);

ReactDom.render(<MineSearch/>, document.querySelector('#root'));