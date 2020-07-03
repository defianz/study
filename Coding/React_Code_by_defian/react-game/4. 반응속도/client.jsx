import React from 'react';
import ReactDom from 'react-dom';
import { hot } from 'react-hot-loader/root';

import ResponseCheck from './ResponseCheck.jsx';
//import NumberBaseball from './RenderTest.jsx';

const Hot = hot(ResponseCheck);

ReactDom.render(<ResponseCheck />, document.querySelector('#root'));