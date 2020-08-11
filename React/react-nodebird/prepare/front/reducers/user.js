
export const initialState = {
    isLoggingIn: false, // 로그인 시도중
    isLoggedIn: false,
    isLogInError: null,
    isLoggingOut: false, // 로그아웃 시도중
    isLoggedOut: false,
    isLogOutError: null,
    isSigningUp: false, // 회원가입 시도중
    isSignedUp: false,
    isSignUpError: null,
    changeNicknameLoading: false, //닉네임 변경 시도중
    changeNicknameDone: false,
    changeNicknameError: null,
    me: null,
    signUpData: {},
    loginData: {},
}

export const LOG_IN_REQUEST = 'LOG_IN_REQUEST';
export const LOG_IN_SUCCESS = 'LOG_IN_SUCCESS';
export const LOG_IN_FAILURE = 'LOG_IN_FAILURE';

export const LOG_OUT_REQUEST = 'LOG_OUT_REQUEST';
export const LOG_OUT_SUCCESS = 'LOG_OUT_SUCCESS';
export const LOG_OUT_FAILURE = 'LOG_OUT_FAILURE';

export const SIGN_UP_REQUEST = 'SIGN_UP_REQUEST';
export const SIGN_UP_SUCCESS = 'SIGN_UP_SUCCESS';
export const SIGN_UP_FAILURE = 'SIGN_UP_FAILURE';

export const CHANGE_NICKNAME_REQUEST = 'CHANGE_NICKNAME_REQUEST';
export const CHANGE_NICKNAME_SUCCESS = 'CHANGE_NICKNAME_SUCCESS';
export const CHANGE_NICKNAME_FAILURE = 'CHANGE_NICKNAME_FAILURE';

export const FOLLOW_REQUEST = 'FOLLOW_REQUEST';
export const FOLLOW_SUCCESS = 'FOLLOW_SUCCESS';
export const FOLLOW_FAILURE = 'FOLLOW_FAILURE';

export const UNFOLLOW_REQUEST = 'UNFOLLOW_REQUEST';
export const UNFOLLOW_SUCCESS = 'UNFOLLOW_SUCCESS';
export const UNFOLLOW_FAILURE = 'UNFOLLOW_FAILURE';

export const ADD_POST_TO_ME = 'ADD_POST_TO_ME';
export const REMOVE_POST_OF_ME = 'REMOVE_POST_OF_ME';


const dummyUser = (data) => ({
    ...data,
    nickname: '데피안',
    id: 1,
    Posts: [{ id: 1 }],
    Followings: [{ nickname: 'defian' }, { nickname: 'kim' }, { nickname: 'hck' },],
    Followers: [{ nickname: 'defian' }, { nickname: 'kim' }, { nickname: 'hck' },],
})

export const loginRequestAction = (data) => {
    return {
        type: LOG_IN_REQUEST,
        data,
    }
}


export const logoutRequestAction = () => {
    return {
        type: LOG_OUT_REQUEST,
    }
}


const reducer = (state = initialState, action) => {
    switch (action.type) {
        case LOG_IN_REQUEST:
            return {
                ...state,
                isLoggingIn: true,
                isLogInError: null,
                isLoggedIn: false,
            };
        case LOG_IN_SUCCESS:
            return {
                ...state,
                isLoggingIn: false,
                isLoggedIn: true,
                me: dummyUser(action.data)
            };
        case LOG_IN_FAILURE:
            return {
                ...state,
                isLoggingIn: false,
                isLogInError: action.error,
            };
        case LOG_OUT_REQUEST:
            return {
                ...state,
                isLoggingOut: true,
                isLoggedOut: false,
                isLogOutError: null,
            }
        case LOG_OUT_SUCCESS:
            return {
                ...state,
                isLoggingOut: false,
                isLoggedOut: true,
            }
        case LOG_OUT_FAILURE:
            return {
                ...state,
                isLoggingOut: false,
                isLogOutError: action.error,
            }
        case SIGN_UP_REQUEST:
            return {
                ...state,
                isSigningUp: true,
                isSignedUp: false,
                isSignUpError: null,
            }
        case SIGN_UP_SUCCESS:
            return {
                ...state,
                isSigningUp: false,
                isSignedUp: true,
            }
        case SIGN_UP_FAILURE:
            return {
                ...state,
                isSigningUp: false,
                isSignUpError: action.error,
            }
        case CHANGE_NICKNAME_REQUEST:
            return {
                ...state,
                changeNicknameLoading: true,
                changeNicknameDone: false,
                changeNicknameError: null,
            }
        case CHANGE_NICKNAME_SUCCESS:
            return {
                ...state,
                changeNicknameLoading: false,
                changeNicknameDone: true,
            }
        case CHANGE_NICKNAME_FAILURE:
            return {
                ...state,
                changeNicknameLoading: false,
                changeNicknameError: action.error,
            }
        case ADD_POST_TO_ME:
            return {
                ...state,
                me: {
                    ...state.me,
                    Posts: [{ id: action.data }, ...state.me.Posts],
                },
            };
        case REMOVE_POST_OF_ME:
            return {
                ...state,
                me: {
                    ...state.me,
                    Posts: state.me.Posts.filter((v) => v.id !== action.data),
                },
            };
        default:
            return state;
    }
};


export default reducer;