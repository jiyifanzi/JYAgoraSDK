
#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleEnterPrivateChatModel : JICLiveModuleBaseModel


/// 主播性别
/// 用户账号Id
/// 带走价格
/// 是否已关注她
/// 剩余金币
/// 主播头像
/// 房间Id
/// 主播昵称
/// 用户头像
/// 角色类型（1：用户 2：主播）
/// 计费单价
/// 主播账号Id
/// 开始计时的时间戳 （从UTC+0时区 2017-01-01 00:00:00 开始到现在的秒数）
/// 用户昵称
/// 主播年龄
@property (nonatomic, assign) BOOL jib_isFollow;
@property (nonatomic, assign) NSUInteger jib_anchorAccountID;
@property (nonatomic, copy) NSString *jib_userAvatar;
@property (nonatomic, assign) NSUInteger jib_userAccountID;
@property (nonatomic, copy) NSString *jib_anchorName;
@property (nonatomic, assign) NSUInteger jib_callTime;
@property (nonatomic, assign) NSUInteger jib_anchorAge;
@property (nonatomic, copy) NSString *jib_anchorSex;
@property (nonatomic, assign) NSUInteger jib_takePrice;
@property (nonatomic, copy) NSString *jib_anchorAvatar;
@property (nonatomic, assign) NSUInteger jib_roleType;
@property (nonatomic, assign) NSUInteger jib_leftCoins;
@property (nonatomic, copy) NSString *jib_userName;
@property (nonatomic, assign) NSUInteger jib_initialPrice;
@property (nonatomic, assign) NSUInteger jib_roomID;
@end

NS_ASSUME_NONNULL_END
