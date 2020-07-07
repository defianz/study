import React, { Fragment, Component } from 'react';

class PhoneInfo extends Component {

    render() {
        return (
            <Fragment >
                <div>{this.props.phone.name}</div>
                <div>{this.props.phone.phone}</div>
            </Fragment>
        );
    }
}

export default PhoneInfo;
