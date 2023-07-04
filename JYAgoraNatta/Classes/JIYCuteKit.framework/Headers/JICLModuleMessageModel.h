
#import "JICLiveModuleBaseModel.h"
@class JICLModuleMessageModel, JICLModuleRoomDetailModel, JICLModuleGiftInfoModel, JICLModuleEnterPrivateChatModel;

typedef NS_ENUM(NSUInteger, JICLModuleMessageType) {
    JICLModuleMessageType_SystemTip         = 1,
    JICLModuleMessageType_JoinRoom          = 2,
    JICLModuleMessageType_TextMessage       = 3,
    JICLModuleMessageType_SendGift          = 4,
    JICLModuleMessageType_MuteUser          = 5,
    JICLModuleMessageType_CancelMuteUser    = 6,
    JICLModuleMessageType_UpdateRoomInfo    = 7,
    JICLModuleMessageType_UserTakeAnchor    = 8,
    JICLModuleMessageType_MatchPKSuccess    = 9,
    JICLModuleMessageType_FinishPK          = 10,
    JICLModuleMessageType_UpdatePKGoals     = 11,
    JICLModuleMessageType_PKTimeUp          = 12,
    JICLModuleMessageType_PKAgain           = 13,
    JICLModuleMessageType_PKRunAway         = 14,
    JICLModuleMessageType_PrivateOpenState  = 15,
    JICLModuleMessageType_UpdateMemberList  = 16,
    JICLModuleMessageType_OppsiteVideo      = 17,
    JICLModuleMessageType_TurntableInfo     = 18,
    JICLModuleMessageType_MutedMembersInfo  = 19,
};

typedef NS_ENUM(NSUInteger, JICLModuleMessageUserType) {
    JICLModuleMessageUserType_Anchor        = 0,
    JICLModuleMessageUserType_User          = 1,
};

typedef NS_ENUM(NSUInteger, JICLModuleMessageSystemType) {
    JICLModuleMessageSystemType_Hint = 0,
    JICLModuleMessageSystemType_PkEnd = 1,
};

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleMessageModel : JICLiveModuleBaseModel


#pragma mark - 方法

#pragma mark - 初始化









/// 弹幕类型
/// 1.系统提示消息
/// 昵称
/// 是否需要显示到消息列表上
/// 头像
/// 用户类型
/// 是否SVIP
/// 标签宽
/// 3.文本消息
/// 1.1PK结束消息
/// 是否是盲盒
/// 0：hint；1：pkEnd
/// 19.禁言列表
/// 是否VIP
/// 内容（jsonString）
/// 标签高
/// combo数
/// 16.刷新观众列表
/// 4.礼物消息
/// 特权
/// 用户ID（AccountId）
/// 礼物ID
/// 8.带走消息
/// 7.房间消息
/// 2.加入直播间消息
/// 弹幕标签地址
+ (JICLModuleMessageModel *)jif_getTakeAnchorMsg:(JICLModuleGiftInfoModel *)gift
                                privateVideoDict:(NSDictionary *)privateVideoDict;
+ (JICLModuleMessageModel *)jif_getSendGiftMsg:(JICLModuleGiftInfoModel *)gift giftNum:(NSInteger)giftNum;
+ (JICLModuleMessageModel *)jif_getSystemTipMsg;
+ (JICLModuleMessageModel *)jif_getUpdateMemberListMsg:(NSArray *)memberList;
+ (JICLModuleMessageModel *)jif_getUpdateInfoMsg:(JICLModuleRoomDetailModel *)room;
+ (JICLModuleMessageModel *)jif_getMutedMembersInfoMsg:(NSArray *)muteList;
+ (JICLModuleMessageModel *)jif_getJoinRoomMsg;
+ (JICLModuleMessageModel *)jif_pkEndTipMsg;
- (BOOL)jif_isShowInMessageList;
+ (JICLModuleMessageModel *)jif_getTextMessage:(NSString *)text;
@property (nonatomic, assign) NSInteger jib_accountID;
@property (nonatomic, assign) BOOL jib_isSVipUser;
@property (nonatomic, copy) NSString *jib_nickname;
@property (nonatomic, copy) NSString *jib_text;
@property (nonatomic, assign) NSInteger jib_isblindGift;
@property (nonatomic, assign) JICLModuleMessageType jib_msgType;
@property (nonatomic, assign) BOOL jib_isPrivilegeUser;
@property (nonatomic, assign) NSInteger jib_giftCombo;
@property (nonatomic, assign) BOOL jib_isVipUser;
@property (nonatomic, assign) CGFloat jib_tagHeight;
@property (nonatomic, copy) NSString *jib_avatar;
@property (nonatomic, assign) JICLModuleMessageUserType jib_userType;
@property (nonatomic, assign) JICLModuleMessageSystemType jib_systemType;
@property (nonatomic, assign) NSInteger jib_giftID;
@property (nonatomic, copy) NSString *jib_tagUrl;
@property (nonatomic, assign) CGFloat jib_tagWidth;
@end

NS_ASSUME_NONNULL_END
