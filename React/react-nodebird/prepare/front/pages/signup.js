import React, { useCallback , useState} from 'react';
import AppLayout from '../components/AppLayout';
import Head from 'next/head';
import {Form,Input,Checkbox, Button} from 'antd';
import styled from 'styled-components';
import useinput from '../hooks/useinput';

const ErrorMessasge = styled.div`
    color:red;
`

const Signup = () => {

    const [id,onChangeId] = useinput('');
    const [nickname,onChangeNickname] = useinput('');
    const [password,onChangePassword] = useinput('');
    const [passwordCheck, setPasswordCheck] = useState('');
    const [passwordError, setPasswordError] = useState(false);
    const onChangePasswordCheck = useCallback((e) => {
        setPasswordCheck(e.target.value);
        setPasswordError(e.target.value !== password );
    },[passwordCheck]);
    
    const [term, setTerm] = useState(false);
    const [termError, setTermError] = useState(false);
    const onChangeTerm = useCallback((e) => {
        setTerm(e.target.checked);
        setTermError(false);
    },[]);

    const onSubmit = useCallback(() => {
        if(password !== passwordCheck){
            return setPasswordError(true);
        }
        if(!term){
            return setTermError(true);
        }
        console.log(id,nickname,password,term);
    },[password,passwordCheck,term]);


    return (
        <AppLayout>
            <Head>
                <title> 회원 가입| NodeBird</title>
            </Head>
            <Form onFinish={onSubmit}>
        <div>
            <label htmlFor="user-id"> 아이디 </label>
            <br/>
            <input name="user-id" value={id} required onChange={onChangeId} />
        </div>
        <div>
            <label htmlFor="user-nick"> 닉네임 </label>
            <br/>
            <input name="user-nick" value={nickname} required onChange={onChangeNickname} />
        </div>
        <div>
            <label htmlFor="user-password"> 패스워드 </label>
            <br/>
            <input name="user-password" type="password" value={password} required onChange={onChangePassword} />
        </div>
        <div>
            <label htmlFor="user-password-check"> 패스워드 체크 </label>
            <br/>
            <input name="user-password-check" type="password" value={passwordCheck} required onChange={onChangePasswordCheck} />
            {passwordError && <ErrorMessasge>비밀번호가 일치하지 않습니다.</ErrorMessasge>}
        </div>
        <div>
            <label htmlFor="user-term"> 약관 체크 </label>
            <br/>
            <Checkbox name="user-term" value={term} onChange={onChangeTerm} >데피안의 말을 잘 들을것을 동의합니다.</Checkbox>
            {termError && <ErrorMessasge>약관에 동의하지 않습니다.</ErrorMessasge>}
        </div>
        <div style={{marginTop:20}}>
            <Button type='primary' htmlType="submit">가입</Button>
        </div>
            </Form>
        </AppLayout>
    )
};

export default Signup;