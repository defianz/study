import React, { useEffect } from "react";
import Head from "next/head";
import { useSelector, useDispatch } from "react-redux";

import AppLayout from "../components/AppLayout";
import NicknameEditForm from "../components/NicknameEditForm";
import FollowList from "../components/FollowList";
import Router from "next/router";
import {
  LOAD_FOLLOWERS_REQUEST,
  LOAD_FOLLOWINGS_REQUEST,
} from "../reducers/user";

const Profile = () => {
  const { me } = useSelector((state) => state.user);
  const dispatch = useDispatch();

  useEffect(() => {
    dispatch({
      type: LOAD_FOLLOWERS_REQUEST,
    }),
      dispatch({
        type: LOAD_FOLLOWINGS_REQUEST,
      });
  }, []);

  useEffect(() => {
    if (!(me && me.id)) {
      Router.push("/");
    }
  }, [me && me.id]);

  if (!me) {
    return null;
  }
  return (
    <>
      <Head>
        <meta charSet="utf-8"></meta>
        <title>내 프로필 | Nodebird</title>
      </Head>
      <AppLayout>
        <NicknameEditForm />
        <FollowList header="팔로잉 목록" data={me.Followings} />
        <FollowList header="팔로워 목록" data={me.Followers} />
      </AppLayout>
    </>
  );
};

export default Profile;
