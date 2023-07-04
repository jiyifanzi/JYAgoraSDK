

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleAccountDetailInfoModel : NSObject

#pragma mark - Public

#pragma mark - User

#pragma mark - Anchor

#pragma mark - 初始化


/// 性别
/// 根据主播模型转换成详情模型
/// 年龄
/// 礼物消耗
/// 昵称
/// 根据用户模型转换成详情模型
/// 是否是主播
/// 头像
/// 用户等级
/// 点赞数
/// 活动标签
/// 个人描述
/// 账号ID
/// 是否是Svip
/// 默认活动标签
/// 关注
/// 黑名单状态
/// 点踩数
/// 展示id
/// 主播标签
/// 粉丝
/// 是否关注对方
+ (JICLModuleAccountDetailInfoModel *)jif_configModelWithUser:(JICLiveModuleUserModel *)model;
+ (JICLModuleAccountDetailInfoModel *)jif_configModelWithAnchor:(JICLiveModuleAnchorModel *)model;
@property (nonatomic, assign) NSInteger jip_level;
@property (nonatomic, assign) JILModuleBlackListStatusType jip_blockType;
@property (nonatomic, assign) NSInteger jip_followers;
@property (nonatomic, assign) NSInteger jip_age;
@property (nonatomic, assign) NSInteger jip_commentUp;
@property (nonatomic, copy) NSString *jip_avatar;
@property (nonatomic, assign) NSInteger jip_followings;
@property (nonatomic, copy) NSString *jip_mood;
@property (nonatomic, assign) NSInteger jip_giftCost;
@property (nonatomic, assign) BOOL jip_isFollow;
@property (nonatomic, assign) NSInteger jip_accountId;
@property (nonatomic, copy) NSString *jip_defaultEventLabel;
@property (nonatomic, assign) NSInteger jip_flag;
@property (nonatomic, strong) NSArray <NSString *> *jip_lables;
@property (nonatomic, copy) NSString *jip_nickName;
@property (nonatomic, assign) BOOL jip_isSvip;
@property (nonatomic, copy) NSString *jip_gender;
@property (nonatomic, copy) NSString *jip_displayAccountId;
@property (nonatomic, assign) NSInteger jip_commentDown;
@property (nonatomic, assign) BOOL jip_isAnchor;
@end

NS_ASSUME_NONNULL_END
