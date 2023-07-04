
#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLiveModuleUserModel : JICLiveModuleBaseModel


/// 粉丝
/// 昵称
/// 账号ID
/// 用户等级
/// 关注
/// 个人描述
/// 年龄
/// 礼物消耗
/// 活动标签
/// 是否是Svip
/// 默认活动标签
/// 展示id
/// 性别
/// 黑名单状态
/// 是否关注对方
/// 头像
@property (nonatomic, copy) NSString *jib_defaultEventLabel;
@property (nonatomic, assign) BOOL jib_isSvip;
@property (nonatomic, copy) NSString *jib_mood;
@property (nonatomic, assign) NSInteger jib_giftCost;
@property (nonatomic, strong) NSArray <NSString *> *jib_lables;
@property (nonatomic, copy) NSString *jib_nickName;
@property (nonatomic, copy) NSString *jib_avatar;
@property (nonatomic, assign) NSInteger jib_accountId;
@property (nonatomic, assign) NSInteger jib_followers;
@property (nonatomic, assign) NSInteger jib_age;
@property (nonatomic, assign) BOOL jib_isFollow;
@property (nonatomic, assign) NSInteger jib_level;
@property (nonatomic, assign) NSInteger jib_followings;
@property (nonatomic, copy) NSString *jib_gender;
@property (nonatomic, copy) NSString *jib_displayAccountId;
@property (nonatomic, assign) JILModuleBlackListStatusType jib_blockType;
@end

NS_ASSUME_NONNULL_END
