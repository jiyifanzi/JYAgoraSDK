

#import "JICLiveModuleBaseModel.h"
#import "JICLModuleRoomPKPlayerModel.h"
#import "JICLModuleRoomPKPointModel.h"
#import "JICLModuleRoomPKWinnerModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleRoomPKDataModel : JICLiveModuleBaseModel


/// PK开始时间（从UTC+0时区 2017-01-01 00:00:00 开始到现在的秒数）
/// 赢家数据
/// PK最大持续时长（秒）
/// PK剩余时间（秒）
/// 客队得分数据
/// 主队得分数据
/// 客队玩家数据
/// 主队玩家数据
@property (nonatomic, strong) JICLModuleRoomPKPlayerModel *jib_otherPlayer;
@property (nonatomic, strong) JICLModuleRoomPKPlayerModel *jib_ownerPlayer;
@property (nonatomic, strong) JICLModuleRoomPKPointModel *jib_ownerPoint;
@property (nonatomic, strong) JICLModuleRoomPKWinnerModel *jib_winAnchorData;
@property (nonatomic, strong) JICLModuleRoomPKPointModel *jib_otherPoint;
@property (nonatomic, assign) NSInteger jib_leftTime;
@property (nonatomic, assign) NSInteger jib_maxTime;
@property (nonatomic, assign) NSInteger jib_startTime;
@end

NS_ASSUME_NONNULL_END
