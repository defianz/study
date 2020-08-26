import shortId from "shortid";
import postSaga from "../sagas/post";
import produce from "immer";
import faker from "faker";

export const initialState = {
  mainPosts: [],
  imagePaths: [],
  hasMorePosts: true,
  likePostLoading: false,
  likePostDone: false,
  likePostError: null,
  unlikePostLoading: false,
  unlikePostDone: false,
  unlikePostError: null,
  loadPostsLoading: false,
  loadPostsDone: false,
  loadPostsError: null,
  addPostLoading: false,
  addPostDone: false,
  addPostError: null,
  removePostLoading: false,
  removePostDone: false,
  removePostError: null,
  addCommentLoading: false,
  addCommentDone: false,
  addCommentError: null,
};

// export const generateDummyPost = (number) =>
//   Array(20)
//     .fill()
//     .map(() => ({
//       id: shortId.generate(),
//       User: {
//         id: shortId.generate(),
//         nickname: faker.name.findName(),
//       },
//       content: faker.lorem.paragraph(),
//       Images: [{ src: faker.image.image() }],
//       Comments: [
//         {
//           id: shortId.generate(),
//           contents: faker.lorem.sentence(),
//           User: {
//             id: shortId.generate(),
//             nickname: faker.name.findName(),
//           },
//         },
//       ],
//     }));

// initialState.mainPosts = initialState.mainPosts.concat(generateDummyPost(10));

export const LIKE_POST_REQUEST = "LIKE_POST_REQUEST";
export const LIKE_POST_SUCCESS = "LIKE_POST_SUCCESS";
export const LIKE_POST_FAILURE = "LIKE_POST_FAILURE";

export const UNLIKE_POST_REQUEST = "UNLIKE_POST_REQUEST";
export const UNLIKE_POST_SUCCESS = "UNLIKE_POST_SUCCESS";
export const UNLIKE_POST_FAILURE = "UNLIKE_POST_FAILURE";

export const LOAD_POSTS_REQUEST = "LOAD_POSTS_REQUEST";
export const LOAD_POSTS_SUCCESS = "LOAD_POSTS_SUCCESS";
export const LOAD_POSTS_FAILURE = "LOAD_POSTS_FAILURE";

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

// const dummyPost = (data) => ({
//   id: data.id,
//   content: data.content,
//   User: {
//     id: 1,
//     nickname: "데피안",
//   },
//   Images: [],
//   Comments: [],
// });

// const dummyComment = (data) => ({
//   id: shortId.generate(),
//   contents: data,
//   User: {
//     id: 1,
//     nickname: "데피안",
//   },
// });
// 이전 상태를 액션을 통해 다음 상태로 만들어내는 함수(불변성은 지키면서)
const reducer = (state = initialState, action) => {
  return produce(state, (draft) => {
    switch (action.type) {
      case LIKE_POST_REQUEST:
        draft.likePostLoading = true;
        draft.likePostDone = false;
        draft.likePostError = null;
        break;
      case LIKE_POST_SUCCESS: {
        const post = draft.mainPosts.find((v) => v.id === action.data.postId);
        console.log(post);
        post.Likers.push({ id: action.data.UserId });
        draft.likePostLoading = false;
        draft.likePostDone = true;
        break;
      }
      case LIKE_POST_FAILURE:
        draft.likePostLoading = false;
        draft.likePostError = action.error;
        break;
      case UNLIKE_POST_REQUEST:
        draft.unlikePostLoading = true;
        draft.unlikePostDone = false;
        draft.unlikePostError = null;
        break;
      case UNLIKE_POST_SUCCESS: {
        const post = draft.mainPosts.find((v) => v.id === action.data.postId);
        console.log(post);
        post.Likers = post.Likers.filter((v) => v.id !== action.data.UserId);
        draft.unlikePostLoading = false;
        draft.unlikePostDone = true;
        break;
      }
      case UNLIKE_POST_FAILURE:
        draft.unlikePostLoading = false;
        draft.unlikePostError = action.error;
        break;
      case LOAD_POSTS_REQUEST:
        draft.loadPostsLoading = true;
        draft.loadPostsDone = false;
        draft.loadPostsError = null;
        break;
      case LOAD_POSTS_SUCCESS:
        draft.mainPosts = action.data.concat(draft.mainPosts);
        draft.loadPostsLoading = false;
        draft.loadPostsDone = true;
        draft.hasMorePosts = draft.mainPosts.length < 50;
        break;
      case LOAD_POSTS_FAILURE:
        draft.loadPostsLoading = false;
        draft.loadPostsError = action.error;
        break;
      case ADD_POST_REQUEST:
        draft.addPostLoading = true;
        draft.addPostDone = false;
        draft.addPostError = null;
        break;
      case ADD_POST_SUCCESS:
        draft.mainPosts.unshift(action.data);
        draft.addPostLoading = false;
        draft.addPostDone = true;
        break;
      case ADD_POST_FAILURE:
        draft.addPostLoading = false;
        draft.addPostError = action.error;
        break;
      case REMOVE_POST_REQUEST:
        draft.removePostLoading = true;
        draft.removePostDone = false;
        draft.removePostError = null;
        break;
      case REMOVE_POST_SUCCESS:
        draft.mainPosts = draft.mainPosts.filter((v) => v.id !== action.data);
        draft.removePostLoading = false;
        draft.removePostDone = true;
        break;
      case REMOVE_POST_FAILURE:
        draft.removePostLoading = false;
        draft.removePostError = action.error;
        break;
      case ADD_COMMENT_REQUEST:
        draft.addCommentLoading = true;
        draft.addCommentDone = false;
        draft.addCommentError = null;
        break;
      case ADD_COMMENT_SUCCESS: {
        const post = draft.mainPosts.find((v) => v.id === action.data.PostId);
        post.Comments.unshift(action.data);
        draft.addCommentLoading = false;
        draft.addCommentDone = true;
        break;
        //action.data.contents post userid
        // const postIndex = state.mainPosts.findIndex(
        //   (v) => v.id === action.data.postId
        // );
        // const post = { ...state.mainPosts[postIndex] };
        // post.Comments = [dummyComment(action.data.contents), ...post.Comments];
        // const mainPosts = [...state.mainPosts];
        // mainPosts[postIndex] = post;
        // return {
        //   ...state,
        //   mainPosts,
        //   addCommentLoading: false,
        //   addCommentDone: true,
        // };
      }
      case ADD_COMMENT_FAILURE:
        draft.addCommentLoading = false;
        draft.addCommentError = action.error;
        break;
      default:
        break;
    }
  });

  //   switch (action.type) {
  //     case ADD_POST_REQUEST:
  //       return {
  //         ...state,
  //         addPostLoading: true,
  //         addPostDone: false,
  //         addPostError: null,
  //       };
  //     case ADD_POST_SUCCESS:
  //       return {
  //         ...state,
  //         mainPosts: [dummyPost(action.data), ...state.mainPosts],
  //         addPostLoading: false,
  //         addPostDone: true,
  //       };
  //     case ADD_POST_FAILURE:
  //       return {
  //         ...state,
  //         addPostLoading: false,
  //         addPostError: action.error,
  //       };
  //     case REMOVE_POST_REQUEST:
  //       return {
  //         ...state,
  //         removePostLoading: true,
  //         removePostDone: false,
  //         removePostError: null,
  //       };
  //     case REMOVE_POST_SUCCESS:
  //       return {
  //         ...state,
  //         mainPosts: state.mainPosts.filter((v) => v.id !== action.data),
  //         removePostLoading: false,
  //         removePostDone: true,
  //       };
  //     case REMOVE_POST_FAILURE:
  //       return {
  //         ...state,
  //         removePostLoading: false,
  //         removePostError: action.error,
  //       };
  //     case ADD_COMMENT_REQUEST:
  //       return {
  //         ...state,
  //         addCommentLoading: true,
  //         addCommentDone: false,
  //         addCommentError: null,
  //       };
  //     case ADD_COMMENT_SUCCESS: {
  //       //action.data.contents post userid
  //       const postIndex = state.mainPosts.findIndex(
  //         (v) => v.id === action.data.postId
  //       );
  //       const post = { ...state.mainPosts[postIndex] };
  //       post.Comments = [dummyComment(action.data.contents), ...post.Comments];
  //       const mainPosts = [...state.mainPosts];
  //       mainPosts[postIndex] = post;
  //       return {
  //         ...state,
  //         mainPosts,
  //         addCommentLoading: false,
  //         addCommentDone: true,
  //       };
  //     }
  //     case ADD_COMMENT_FAILURE:
  //       return {
  //         ...state,
  //         addCommentLoading: false,
  //         addCommentError: action.error,
  //       };
  //     default:
  //       return state;
  //   }
};

export default reducer;
