
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JICLModuleDataSourceManagerDelegate <NSObject>
@required

- (void)jif_liveDataSourceManagerUpdateCurrentAnchorID:(NSInteger)anchorID;
/// 需要刷新列表（tableview reloadData）

- (void)jif_liveDataSourceManagerResumeRoom:(JICLModuleRoomTotalModel *)resumeModel isNeedCleanPK:(BOOL)isNeedCleanPK;
///   - fromWay: 点击来源
/// 更新当前房间详情模型（在此处刷新控制层模型）
- (void)jif_liveDataSourceManagerEnterOtherRoom:(BOOL)isAlreadyHasRoom
                                        fromWay:(JILOutDataSourceEnterRoomType)fromWay;
/// 刷新当前主播ID
///   - isAlreadyHasRoom: 当前列表中是否已经有这个数据
- (void)jif_liveDataSourceManagerRefreshList;
- (void)jif_liveDataSourceManagerOperateData:(NSInteger)index isDelete:(BOOL)isDelete;
/// 插入或删除列表某个数据
/// 跳转到对面直播间

/// 刷新恢复的房间（如果恢复的房间为当前房间才会走这个回调）

/// - Parameters:


- (void)jif_liveDataSourceManagerUpdateCurrentRoomDetailModel;

@end

@interface JICLModuleDataSourceManager : NSObject

#pragma mark - 属性





#pragma mark - 方法











/// 滑动更新当前下标
/// 通过横幅进入其他房间
/// 初始化数据管理类（只在进入vc时调用）
/// 代理
/// 当前房间的模型
/// 当前房间的下标
/// 当前房间列表（tableview列表中的数据）
/// 更新房间异常状态（只在joinRoom接口失败调用）
/// 滑动停止之后更新列表
/// 删除房间
/// 添加房间
/// 数据源
/// 进入对方房间
/// 恢复房间
/// 请求列表
/// 更新房间详情信息（只在joinRoom接口调用）
- (void)jif_updateRoomDetailInfoModel:(JICLModuleRoomDetailModel *)model;
- (void)jif_setupDataManagerWithConfigModel:(JICLModuleEnterConfigModel *)configModel;
- (void)jif_resumeRoom:(JICLModuleRoomDetailModel *)room;
- (void)jif_switchChangeCurrentIndex:(NSInteger)index fromWay:(JILOutDataSourceEnterRoomType)fromWay;
- (void)jif_updateRoomUnnormalState:(BOOL)isUnnormal anchorID:(NSInteger)anchorID;
- (void)jif_enterOtherRoom;
- (void)jif_deleteRoom:(JICLModuleRoomDetailModel *)room;
- (void)jif_requestRoomList:(BOOL)isUGCRoom;
- (void)jif_refreshListAfterScrollStop:(NSInteger)currentIndex;
- (void)jif_enterOtherRoomByBroadcast:(JICLModuleBroadcastModel *)model;
- (void)jif_addRoom:(JICLModuleRoomDetailModel *)room;
@property (nonatomic, strong, readonly) NSMutableArray *jip_currentRoomList;
@property (nonatomic, strong, readonly) JICLModuleRoomTotalModel *jip_currentModel;
@property (nonatomic, weak) id <JICLModuleSubManagerDataSource> dataSource;
@property (nonatomic, assign, readonly) NSInteger jip_currentIndex;
@property (nonatomic, weak) id <JICLModuleDataSourceManagerDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
