

#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModulePKTopUserModel : JICLiveModuleBaseModel


/// 头像
/// 账号ID
/// 用户年龄
/// 是否是vip
/// 昵称
/// 分数
/// 是否是svip
@property (nonatomic, assign) BOOL jib_isVipUser;
@property (nonatomic, assign) NSInteger jib_userID;
@property (nonatomic, copy) NSString *jib_nickname;
@property (nonatomic, assign) BOOL jib_userAge;
@property (nonatomic, assign) BOOL jib_isSVipUser;
@property (nonatomic, assign) NSInteger jib_userGoals;
@property (nonatomic, copy) NSString *jib_userAvatar;
@end

NS_ASSUME_NONNULL_END
