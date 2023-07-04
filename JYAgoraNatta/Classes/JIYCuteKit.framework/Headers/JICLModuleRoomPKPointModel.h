

#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleRoomPKPointModel : JICLiveModuleBaseModel


/// 积分
/// 前三守护用户头像
/// 主持人Id
@property (nonatomic, assign) NSInteger jib_points;
@property (nonatomic, strong) NSArray *jib_topThreeAvatars;
@property (nonatomic, assign) NSInteger jib_accountID;
@end

NS_ASSUME_NONNULL_END
