import shortId from 'shortid';
import postSaga from '../sagas/post';


export const initialState = {
    mainPosts: [{
        id: 1,
        User: {
            id: 1,
            nickname: '데피안',
        },
        content: '첫번째 게시글 #해시태그 #익스프레시',
        Images: [
            {
                id: shortId.generate(),
                src: "https://2.bp.blogspot.com/-bD9iB6eEFNc/WXdfMahDf-I/AAAAAAAAEX0/Jr2V9cPvrJITSZkTmwt2k1PBZ_m830A5wCLcBGAs/s1600/image1.png",
            }, {
                id: shortId.generate(),
                src: "https://miro.medium.com/proxy/1*xNQHxXBX-1RQCPM3LYa3wA.png",
            },
            {
                id: shortId.generate(),
                src: "https://lc-gold-cdn.xitu.io/c526b2d51541a40e7043.png",
            }
        ],
        Comments: [{
            id: shortId.generate(),
            User: {
                id: shortId.generate(),
                nickname: 'zero',
            },
            contents: '우와 멋있다.'
        },
        {
            User: {
                id: shortId.generate(),
                nickname: 'hero',
            },
            contents: '우와 멋있다2222'
        }
        ]
    }],
    imagePaths: [],
    addPostLoading: false,
    addPostDone: false,
    addPostError: null,
    removePostLoading: false,
    removePostDone: false,
    removePostError: null,
    addCommentLoading: false,
    addCommentDone: false,
    addCommentError: null,
}


export const ADD_POST_REQUEST = "ADD_POST_REQUEST";
export const ADD_POST_SUCCESS = "ADD_POST_SUCCESS";
export const ADD_POST_FAILURE = "ADD_POST_FAILURE";

export const REMOVE_POST_REQUEST = "REMOVE_POST_REQUEST";
export const REMOVE_POST_SUCCESS = "REMOVE_POST_SUCCESS";
export const REMOVE_POST_FAILURE = "REMOVE_POST_FAILURE";

export const ADD_COMMENT_REQUEST = "ADD_COMMENT_REQUEST";
export const ADD_COMMENT_SUCCESS = "ADD_COMMENT_SUCCESS";
export const ADD_COMMENT_FAILURE = "ADD_COMMENT_FAILURE";


export const addPost = (data) => ({
    type: ADD_POST_REQUEST,
    data,
});

export const addComment = (data) => ({
    type: ADD_COMMENT_REQUEST,
    data,
});

const dummyPost = (data) => ({
    id: data.id,
    content: data.content,
    User: {
        id: 1,
        nickname: '데피안',
    },
    Images: [],
    Comments: [],
});

const dummyComment = (data) => ({
    id: shortId.generate(),
    contents: data,
    User: {
        id: 1,
        nickname: '데피안',
    },
})

const reducer = (state = initialState, action) => {
    switch (action.type) {
        case ADD_POST_REQUEST:
            return {
                ...state,
                addPostLoading: true,
                addPostDone: false,
                addPostError: null,
            }
        case ADD_POST_SUCCESS:
            return {
                ...state,
                mainPosts: [dummyPost(action.data), ...state.mainPosts],
                addPostLoading: false,
                addPostDone: true,
            };
        case ADD_POST_FAILURE:
            return {
                ...state,
                addPostLoading: false,
                addPostError: action.error,
            };
        case REMOVE_POST_REQUEST:
            return {
                ...state,
                removePostLoading: true,
                removePostDone: false,
                removePostError: null,
            }
        case REMOVE_POST_SUCCESS:
            return {
                ...state,
                mainPosts: state.mainPosts.filter((v) => v.id !== action.data),
                removePostLoading: false,
                removePostDone: true,
            };
        case REMOVE_POST_FAILURE:
            return {
                ...state,
                removePostLoading: false,
                removePostError: action.error,
            };
        case ADD_COMMENT_REQUEST:
            return {
                ...state,
                addCommentLoading: true,
                addCommentDone: false,
                addCommentError: null,
            };
        case ADD_COMMENT_SUCCESS: {
            //action.data.contents post userid
            const postIndex = state.mainPosts.findIndex((v) => v.id === action.data.postId);
            const post = { ...state.mainPosts[postIndex] };
            post.Comments = [dummyComment(action.data.contents), ...post.Comments];
            const mainPosts = [...state.mainPosts];
            mainPosts[postIndex] = post;
            return {
                ...state,
                mainPosts,
                addCommentLoading: false,
                addCommentDone: true,
            };
        }
        case ADD_COMMENT_FAILURE:
            return {
                ...state,
                addCommentLoading: false,
                addCommentError: action.error,
            };
        default:
            return state;
    }
};


export default reducer;