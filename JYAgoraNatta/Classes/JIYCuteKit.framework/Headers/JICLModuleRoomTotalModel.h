

#import "JICLiveModuleBaseModel.h"
#import "JICLModuleRoomTempModel.h"
#import "JICLModuleRoomDetailModel.h"
@class JICLModuleBroadcastModel;

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleRoomTotalModel : JICLiveModuleBaseModel

#pragma mark - Setter

#pragma mark - Getter









/// 房间ID
/// 在数组中的下标（注：此下标不维护！不要在其他地方使用，仅用于遍历时，赋值该模型在对应列表的哪个位置，返回值的时候使用！！！！）
/// 根据房间详情模型创建一个房间模型
/// 根据广播模型生成一个房间模型（在跳转到对方页面时使用）
/// 是否加入房间异常（仅对当前房间有效 划走之后状态会重置）
/// 获取房主ID
/// 更新房间ID
/// 根据pk模型生成一个房间模型（在跳转到对方页面时使用）
/// 更新封面
/// 完整房间数据
/// 声网ID
/// 房间的基本信息：留用快速预览及供加入房间
/// 是否是UGC房间
- (NSString *)jif_getRTCRoomID;
+ (JICLModuleRoomTotalModel *)jif_configModelWithPkPlayerModel:(JICLModuleRoomPKPlayerModel *)pkModel;
- (void)jif_updateCover:(NSString *)cover;
+ (JICLModuleRoomTotalModel *)jif_configModelWithBroadcastModel:(JICLModuleBroadcastModel *)broadcastModel;
- (void)jif_updateRoomID:(NSInteger)roomID;
- (NSInteger)jif_getRoomID;
- (NSInteger)jif_getOwnerID;
+ (JICLModuleRoomTotalModel *)jif_configModelWithDetail:(JICLModuleRoomDetailModel *)detailModel;
@property (nonatomic, assign) BOOL jip_isUnnormalJoin;
@property (nonatomic, assign) NSInteger jip_indexInList;
@property (nonatomic, assign) BOOL jip_isUGCRoom;
@property (nonatomic, strong) JICLModuleRoomTempModel *jip_tempModel;
@property (nonatomic, strong) JICLModuleRoomDetailModel * _Nullable jip_detailModel;
@end

NS_ASSUME_NONNULL_END
