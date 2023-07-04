
#ifndef JICAPIDef_h
#define JICAPIDef_h

#pragma mark - 房间相关
/// 加入房间
#define kJIL_Request_JoinRoomWithAnchorID @"/api/VideoChatRoom/JoinRoomByHostId"
/// 离开房间
#define kJIL_Request_LeaveRoom @"/api/VideoChatRoom/LeaveRoom"
/// 获取房间信息
#define kJIL_Request_RoomInfo @"/api/VideoChatRoom/GetRoomInfo"
/// 获取视频聊天室列表
#define kJIL_Request_RoomList @"/api/VideoChatRoom/GetRoomList"
/// 获取PK送礼粉丝排行榜
#define kJIL_Request_PKTopList @"/api/VideoChatRoom/GetVideoChatRoomPKTopFanList"
/// 用户送礼
#define kJIL_Request_SendGift @"/api/VideoChatRoom/UserSendGift"
/// 设置礼物已阅
#define kJIL_Request_SeeGift @"/api/VideoChatRoom/SetGiftViewed"
/// 发文字消息
#define kJIL_Request_SendText @"/api/VideoChatRoom/SendTextMsg"
/// 获取房间禁言列表
#define kJIL_Request_MutedList @"/api/VideoChatRoom/GetMutedMembers"
/// 用户带走主播
#define kJIL_Request_TakeAnchor @"/api/VideoChatRoom/UserTakeHost"

#pragma mark - 用户相关
/// 用户资料
#define kJIL_Request_UserInfo @"/api/VideoChatRoom/GetVideoChatRoomUserInfo"
/// 主播资料
#define kJIL_Request_AnchorInfo @"/api/VideoChatRoom/GetVideoChatRoomAnchorInfo"
/// 获取活动标签列表
#define kJIL_Request_LabelList @"/api/Account/GetEventLabelList"
/// 设置默认活动标签
#define kJIL_Request_ConfigDefaultLabel @"/api/Account/SetDefaultEventLabel"
/// 举报用户
#define kJIL_Request_ReportUser @"/api/Account/Report"
/// 拉黑
#define kJIL_Request_BlockUser @"/api/Account/Block"
/// 取消拉黑
#define kJIL_Request_CancelBlockUser @"/api/Account/CancelBlock"

#pragma mark - UGC相关
/// 加入房间
#define kJIL_Request_UGCJoinRoomWithUserID  @"/api/UgcVideoChatRoom/JoinRoomByHostId"
/// 离开房间
#define kJIL_Request_UGCLeaveRoom           @"/api/UgcVideoChatRoom/LeaveRoom"
/// 用户送礼
#define kJIL_Request_UGCSendGift            @"/api/UgcVideoChatRoom/UserSendGift"
/// 获取视频聊天室列表
#define kJIL_Request_UGCRoomList            @"/api/UgcVideoChatRoom/GetRoomList"
/// 获取房间信息
#define kJIL_Request_UGCRoomInfo            @"/api/UgcVideoChatRoom/GetRoomInfo"
/// 用户资料
#define kJIL_Request_UGCUserInfo            @"/api/UgcVideoChatRoom/GetVideoChatRoomUserInfo"
/// 举报房间
#define kJIL_Request_UGCReportRoom          @"/api/UgcVideoChatRoom/ReportRoom"
/// 获取房间禁言列表
#define kJIL_Request_UGCMutedList           @"/api/UgcVideoChatRoom/GetMutedMembers"

#pragma mark - 错误码
/// 该账号已在黑名单
static const short kJILHasBlocked = -9;

/// 该账号不在黑名单
static const short kJILHasNotBlocked = -10;

#endif /* JICAPIDef_h */
