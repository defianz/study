import React from 'react';
import Head from 'next/head';
import { useSelector } from 'react-redux';

import AppLayout from '../components/AppLayout';
import NicknameEditForm from '../components/NicknameEditForm';
import FollowList from '../components/FollowList'


const Profile = () => {
    const { me } = useSelector((state) => state.user);
    return (
        <>
            <Head>
                <meta charSet='utf-8'></meta>
                <title>내 프로필 | Nodebird</title>
            </Head>
            <AppLayout>
                <NicknameEditForm />
                <FollowList header="팔로잉 목록" data={me.Followings} />
                <FollowList header="팔로워 목록" data={me.Followers} />
            </AppLayout>
        </>
    )
};

export default Profile;