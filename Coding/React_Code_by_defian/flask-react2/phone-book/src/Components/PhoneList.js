import React, { Fragment, Component } from 'react';
import PhoneForm from './PhoneForm'
import PhoneInfo from './PhoneInfo'
import { Table, Button, Input, Modal } from 'antd'

import * as api from '../lib/lib';

const { confirm } = Modal;

class PhoneList extends Component {
    id = 2
    state = {
        tmpName: "",
        tmpPhone: "",
        editable: -1,
        information: []
    }
    componentDidMount() {
        this.getPhones()
    }
    getPhones = async () => {

        try {
            const response = await api.getPhones()
            console.log(response)

            this.setState({
                information: response.data
            })

        } catch (e) {
            console.log(e)
        }
    }
    addPhone = async (data) => {

        const tmp = {
            name: data.name,
            phone: data.phone,
            id: this.id++,
            // id : this.state.information[this.state.information.length-1].id + 1
        }

        try {
            const response = await api.addPhone(data)
            console.log(response)
            this.getPhones()
        } catch (e) {
            console.log(e)
        }
    }

    deletePhone = async (targetId) => {
        const tmp = { 'targetId': targetId }

        try {
            const response = await api.deletePhone(tmp)
            console.log(response)
            this.getPhones()
        } catch (e) {
            console.log(e)
        }
    }
    toggleDelete = (event, text) => {

        const deletePhone = this.deletePhone
        const targetId = parseInt(event.target.name)

        Modal.confirm(
            {
                title: '경고',
                content: '정말 삭제하시겠습니까?',
                onOk() {
                    deletePhone(targetId)
                },
                onCancel() {

                }
            }
        );

        return;
    }

    toggleEdit = (e) => {

        const targetId = parseInt(e.target.name)

        this.setState({
            editable: targetId,
            tmpName: this.state.information.filter(item => item.id === targetId)[0].name,
            tmpPhone: this.state.information.filter(item => item.id === targetId)[0].phone
        })


    }
    cancelEdit = () => {
        this.setState({
            editable: -1
        })
    }
    handleTextChange = (e) => {
        this.setState({
            [e.target.name]: e.target.value
        })
    }
    onSave = async (e) => {

        const targetId = parseInt(e.target.name, 10)

        const tmp = {
            'targetId': targetId,
            'name': this.state.tmpName,
            'phone': this.state.tmpPhone
        }

        try {
            const response = await api.updatePhone(tmp)
            console.log(response)
            this.getPhones()

            this.setState({
                editable: -1
            })

        } catch (e) {
            console.log(e)
        }

    }

    render() {
        console.log(this.state.information)
        const columns = [
            { title: 'ID', dataIndex: 'id', key: 'id', },

            {
                title: '이름', dataIndex: 'name', key: 'name',
                render: (text, record) => this.state.editable === record.id ?
                    <Input value={this.state.tmpName}
                        onChange={this.handleTextChange}
                        name="tmpName" /> : text
            },

            {
                title: '전화번호', dataIndex: 'phone', key: 'phone',
                render: (text, record) => this.state.editable === record.id ?
                    <Input value={this.state.tmpPhone}
                        onChange={this.handleTextChange}
                        name="tmpPhone" /> : text
            },


            {
                title: '', dataIndex: 'id', action: 'delete', key: 'delete',
                render: id =>


                    <Fragment>
                        <Button type="danger"
                            name={id}
                            onClick={this.toggleDelete}
                        >
                            삭제</Button>{" "}

                        {
                            this.state.editable === id ?
                                <Fragment>
                                    <Button name={id} onClick={this.cancelEdit}> 취소 </Button>
                                    {" "}
                                    <Button type="primary" name={id} onClick={this.onSave}> 저장 </Button>
                                </Fragment>

                                :
                                <Button type="primary" name={id} onClick={this.toggleEdit}> 수정 </Button>
                        }

                    </Fragment>
            }


        ]
        return (
            <Fragment >
                <PhoneForm addPhone={this.addPhone} />
                <Table rowKey="id" columns={columns}
                    dataSource={this.state.information} />
                {/*
                <div>
                    {arr}
                </div>

                <div>
                    {arr.concat(6)}
                </div>

                <div>
                    {arr.filter(item => item % 2 === 0)}
                </div>

                <div>
                    {arr.find(item => item % 2 === 0)}
                </div>

                <div>
                    {arr.slice(0, 3)}
                </div>

                <div>
                    { arr.map(item => item * 2) }
                </div>
                */}

            </Fragment>
        );
    }
}

export default PhoneList;
