import React, { Fragment, Component } from 'react';
import { Input, Button } from 'antd'
class PhoneForm extends Component {
    state = {
        name: "",
        phone: ""
    }
    handleChange = (event) => {
        this.setState({
            [event.target.name]: event.target.value
        })
    }
    handleCreate = () => {
        this.props.addPhone(this.state)
    }
    render() {
        return (
            <Fragment >
                <Input
                    placeholder="이름"
                    name="name"
                    onChange={this.handleChange}
                    value={this.state.name}
                />
                <Input
                    placeholder="전화번호"
                    name="phone"
                    onChange={this.handleChange}
                    value={this.state.phone}
                />
                <Button onClick={this.handleCreate}>추가</Button>


            </Fragment>
        );
    }
}
export default PhoneForm;
