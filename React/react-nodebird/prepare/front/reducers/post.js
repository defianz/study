
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
                src: "https://2.bp.blogspot.com/-bD9iB6eEFNc/WXdfMahDf-I/AAAAAAAAEX0/Jr2V9cPvrJITSZkTmwt2k1PBZ_m830A5wCLcBGAs/s1600/image1.png",
            }, {
                src: "https://miro.medium.com/proxy/1*xNQHxXBX-1RQCPM3LYa3wA.png",
            },
            {
                src: "https://lc-gold-cdn.xitu.io/c526b2d51541a40e7043.png",
            }
        ],
        Comments: [{
            User: {
                nickname: 'zero',
            },
            contents: '우와 멋있다.'
        },
        {
            User: {
                nickname: 'hero',
            },
            contents: '우와 멋있다2222'
        }
        ]
    }],
    imagePaths: [],
    postAdded: false,
}


const ADD_POST = "ADD_POST";
export const addPost = {
    type: ADD_POST,
}

const dummyPost = {
    id: 2,
    User: {
        id: 1,
        nickname: '데피안',
    },
    Images: [],
    Comments: [],
}

const reducer = (state = initialState, action) => {
    switch (action.type) {
        case ADD_POST:
            return {
                ...state,
                mainPosts: [dummyPost, ...state.mainPosts],
                postAdded: true,
            }
        default:
            return state;
    }
};


export default reducer;