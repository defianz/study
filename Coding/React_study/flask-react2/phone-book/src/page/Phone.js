import React, { Fragment, Component } from 'react';
import { Input, Button } from 'antd'
import PhoneList from '../Components/PhoneList'

class Phone extends Component {

    render() {
        return (
            <Fragment >
                <PhoneList />
            </Fragment>
        );
    }
}
export default Phone;
