import PropTypes from 'prop-types';
import { useSelector } from 'react-redux';
import { Card, Popover, Button, Avatar } from 'antd';
import { RetweetOutlined, HeartOutlined, MessageOutlined, EllipsisOutlined, HeartTwoTone } from '@ant-design/icons';

import PostImages from './PostImages';
import { useCallback, useState } from 'react';

const PostCard = ({ post }) => {
    const [liked, setLiked] = useState(false);
    const [commentFormOpened, setCommentFormOpened] = useState(false);
    const id = useSelector((state) => state.user.me?.id);
    // ?. 옵셔널 체이닝 : 없으면 undeined

    const onToggleLike = useCallback(() => {
        setLiked((prev) => !prev);
    }, []);
    const onToggleComment = useCallback(() => {
        setCommentFormOpened((commentFormOpened) => !commentFormOpened);
    })
    return (
        <div style={{ marginBottom: 20 }}>
            <Card
                cover={post.Images[0] && <PostImages images={post.Images} />}
                actions={[
                    <RetweetOutlined key="retweet" />,
                    liked
                        ? <HeartTwoTone twoToneColor="#eb2f96" key="heart" onClick={onToggleLike} />
                        : <HeartOutlined key="heart" onClick={onToggleLike} />,

                    <MessageOutlined key="comment" onClick={onToggleComment} />,
                    <Popover key="more" content={(
                        <Button.Group>
                            {id && post.User.id === id
                                ? (
                                    <>
                                        <Button>수정</Button>
                                        <Button type="danger">삭제</Button>
                                    </>
                                ) : <Button>신고</Button>}
                        </Button.Group>
                    )} >
                        <EllipsisOutlined />
                    </Popover>
                ]}
            >
                <Card.Meta
                    avatar={<Avatar>{post.User.nickname[0]}</Avatar>}
                    title={post.User.nickname}
                    description={post.content}
                />
            </Card>
            {commentFormOpened && (
                <div>
                    댓글부분
                </div>
            )}
            {/* <Comments /> */}
        </div >
    );
};

PostCard.propTypes = {
    post: PropTypes.shape({
        id: PropTypes.number,
        User: PropTypes.object,
        content: PropTypes.string,
        createdAt: PropTypes.object,
        Comments: PropTypes.arrayOf(PropTypes.object),
        Images: PropTypes.arrayOf(PropTypes.object),
    }).isRequired,
}


export default PostCard;