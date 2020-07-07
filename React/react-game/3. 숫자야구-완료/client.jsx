import React from 'react';
import ReactDom from 'react-dom';
import { hot } from 'react-hot-loader/root';

import NumberBaseball from './NumberBaseball.jsx';

const Hot = hot(NumberBaseball);

ReactDom.render(<NumberBaseball />, document.querySelector('#root'));