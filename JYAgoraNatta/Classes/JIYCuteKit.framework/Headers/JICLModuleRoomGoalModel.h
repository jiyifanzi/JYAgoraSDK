
#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleRoomGoalModel : JICLiveModuleBaseModel



/// 房间号
/// 获取当前目标进度
/// 目标描述
/// 目标收入
/// 当前收入
- (double)jif_getCurrentProgress;
@property (nonatomic, assign) NSInteger jib_goalCoin;
@property (nonatomic, assign) NSInteger jib_roomId;
@property (nonatomic, copy) NSString *jib_desc;
@property (nonatomic, assign) NSInteger jib_currentCoin;
@end

NS_ASSUME_NONNULL_END
