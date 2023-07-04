

#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleMemberModel : JICLiveModuleBaseModel


/// 展示id
/// 性别
/// 是否是神秘人
/// 是否是主持人
/// 账号ID
/// 昵称
/// 礼物消耗（用户）
/// 头像
/// 是否是VIP
/// 点赞数（主播）
/// 年龄
/// 用户类型
/// 用户等级
/// 是否是SVIP
@property (nonatomic, assign) JILModuleMemberType jip_roleType;
@property (nonatomic, copy) NSString *jip_avatar;
@property (nonatomic, copy) NSString *jip_nickName;
@property (nonatomic, copy) NSString *jip_gender;
@property (nonatomic, assign) NSInteger jip_level;
@property (nonatomic, assign) NSInteger jip_commentUp;
@property (nonatomic, assign) NSInteger jip_giftCost;
@property (nonatomic, assign) BOOL jip_isMysteriousMan;
@property (nonatomic, assign) NSInteger jip_age;
@property (nonatomic, copy) NSString *jip_displayAccountId;
@property (nonatomic, assign) BOOL jip_isVip;
@property (nonatomic, assign) BOOL jip_isAdmin;
@property (nonatomic, assign) NSInteger jip_accountId;
@property (nonatomic, assign) BOOL jip_isSVip;
@end

NS_ASSUME_NONNULL_END
