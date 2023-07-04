
#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLiveModuleAnchorModel : JICLiveModuleBaseModel


/// 粉丝
/// 年龄
/// 头像
/// 主播标签
/// 个人描述
/// 黑名单状态
/// 展示id
/// 点踩数
/// 活动标签
/// 性别
/// 是否关注对方
/// 账号ID
/// 昵称
/// 默认活动标签
/// 点赞数
/// 关注
@property (nonatomic, copy) NSString *jib_defaultEventLabel;
@property (nonatomic, copy) NSString *jib_nickName;
@property (nonatomic, copy) NSString *jib_mood;
@property (nonatomic, copy) NSString *jib_avatar;
@property (nonatomic, assign) NSInteger jib_accountId;
@property (nonatomic, copy) NSString *jib_gender;
@property (nonatomic, assign) NSInteger jib_commentDown;
@property (nonatomic, assign) NSInteger jib_followings;
@property (nonatomic, copy) NSString *jib_displayAccountId;
@property (nonatomic, assign) BOOL jib_isFollow;
@property (nonatomic, assign) NSInteger jib_commentUp;
@property (nonatomic, strong) NSArray <NSString *> *jib_lables;
@property (nonatomic, assign) NSInteger jib_flag;
@property (nonatomic, assign) NSInteger jib_followers;
@property (nonatomic, assign) JILModuleBlackListStatusType jib_blockType;
@property (nonatomic, assign) NSInteger jib_age;
@end

NS_ASSUME_NONNULL_END
