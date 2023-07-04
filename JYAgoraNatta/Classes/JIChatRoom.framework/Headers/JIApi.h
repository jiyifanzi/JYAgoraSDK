
#ifndef JIApi_h
#define JIApi_h

/// 聊天室关注列表
static NSString * const JIApiVoiceChatRoomFollowingAnchorList =  @"/api/VoiceChatRoomV2/GetVoiceChatRoomFollowingAnchorList";
/// 聊天室列表
static NSString * const JIApiVoiceChatRoomList = @"/api/VoiceChatRoomV2/GetLivingVoiceChatRoomList";
/// 房间信息
static NSString * const JIApiVoiceChatRoomInfo =  @"/api/VoiceChatRoomV2/GetRoomInfo";
/// 加入房间
static NSString * const JIApiVoiceChatRoomJoinRoom = @"/api/VoiceChatRoomV2/JoinRoom";
/// 加入房间
static NSString * const JIApiVoiceChatRoomJoinRoomByRoomId = @"/api/VoiceChatRoomV2/JoinRoomByRoomId";
/// 离开房间
static NSString * const JIApiVoiceChatRoomLeaveRoom =  @"/api/VoiceChatRoomV2/LeaveRoom";
/// 用户关注主播
static NSString * const JIApiFollow = @"/api/Account/Follow";
/// 取消关注
static NSString * const JIApiCancelFollow = @"/api/Account/CancelFollow";

static NSString * const JIApiCloseMic = @"/api/VoiceChatRoomV2/MemberCloseMic";

static NSString * const JIApiOpenMic = @"/api/VoiceChatRoomV2/MemberOpenMic";

/// 用户送礼
static NSString * const JIApiVoiceChatRoomUserSendGift = @"/api/VoiceChatRoomV2/UserSendGift";
/// 老板上麦
static NSString * const JIApiVoiceChatRoomUserApplyBeBoss = @"/api/VoiceChatRoomV2/UserApplyBeBoss";
/// 老板下麦
static NSString * const JIApiVoiceChatRoomBossPutOffMic =  @"/api/VoiceChatRoomV2/BossPutOffMic";
/// 用户带走主播
static NSString * const JIApiVoiceChatRoomTakeAnchor = @"/api/VoiceChatRoomV2/TakeAnchor";
/// 发消息
static NSString * const JIApiVoiceChatRoomSendTextMsg = @"/api/VoiceChatRoomV2/SendTextMsg";
/// 活动标签列表
static NSString * const JIApiVoiceChatRoomEventLabelList = @"/api/Account/GetEventLabelList";
///设置默认标签
static NSString * const JIApiVoiceChatRoomSetDefaultEventLabel =  @"/api/Account/SetDefaultEventLabel";
///活动标签排序
static NSString * const JIApiVoiceChatRoomSetEventLabelSequence =  @"/api/Account/SetEventLabelSequence";
///
static NSString * const JIApiVoiceChatRoomSetGiftViewed = @"/api/VoiceChatRoomV2/SetGiftViewed";
///请求语聊房主播信息
static NSString * const JIApiVoiceChatRoomAnchorInfo = @"/api/VoiceChatRoomV2/GetVoiceChatRoomAnchorInfo";
///请求语聊房用户信息
static NSString * const JIApiVoiceChatRoomUserInfo = @"/api/VoiceChatRoomV2/GetVoiceChatRoomUserInfo";

//拉黑
static NSString * const JIApiVoiceChatRoomBlockAnchor = @"/api/Account/Block";
//取消拉黑
static NSString * const JIApiVoiceChatRoomCancelBlockAnchor = @"/api/Account/CancelBlock";

static NSString * const JIApiVoiceChatRoomReport = @"/api/Account/Report";

static NSString * const JIApiVoiceChateRoomGiftViewed = @"/api/VoiceChatRoomV2/SetGiftViewed";

#endif /* JIApi_h */
