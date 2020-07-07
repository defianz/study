import React from 'react';
import Head from 'next/head';

import AppLayout from '../components/AppLayout';
import NicknameEditForm from '../components/NicknameEditForm';
import FollowList from '../components/FollowList'

const Profile = () => {
    const followerList = [{ nickname: '데피안' }, { nickname: '바보' }, { nickname: '노드버드오피셜' }];
    const followingList = [{ nickname: '데피안' }, { nickname: '바보' }, { nickname: '노드버드오피셜' }];
    return (
        <>
            <Head>
                <meta charSet='utf-8'></meta>
                <title>내 프로필 | Nodebird</title>
            </Head>
            <AppLayout>
                <NicknameEditForm />
                <FollowList header="팔로잉 목록" data={followingList} />
                <FollowList header="팔로워 목록" data={followerList} />
            </AppLayout>
        </>
    )
};

export default Profile;