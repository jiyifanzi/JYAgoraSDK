


#import <Foundation/Foundation.h>
#import "JICLiveModuleMainView.h"
#import "JICLModuleVideoContainerView.h"
@class JICModulePushMessageModel, JICLModuleBottomInputView, JICLiveModuleVC, JICLModuleBroadcastModel;

NS_ASSUME_NONNULL_BEGIN

@protocol JICLModuleTotalManagerDelegate <NSObject>
@required
/// 显示引导弹窗

- (void)jif_totalManagerEnterOtherRoom:(BOOL)isAlreadyHasRoom fromWay:(JILOutDataSourceEnterRoomType)fromWay;

- (void)jif_totalManagerChangePopGesture:(BOOL)isEnable;

- (void)jif_totalManagerShowGuideView;
/// 插入或删除cell
/// 刷新列表


- (void)jif_totalManagerRefreshRoomList;
/// 更新当前主播ID
- (void)jif_totalManagerOperateData:(NSInteger)index isDelete:(BOOL)isDelete;
/// 操控滑动手势
- (void)jif_totalManagerUpdateCurrentHostID:(NSInteger)hostID;
/// 进入对方直播间


@end


@interface JICLModuleTotalManager : NSObject

#pragma mark - 属性
#pragma mark Setter

#pragma mark Getter

#pragma mark - 初始化


#pragma mark - 切换房间



#pragma mark - 关闭相关

#pragma mark - 最小化相关


#pragma mark - 退出直播间相关


#pragma mark - 处理推送消息

/// 视频视图
/// 目标视图（也就是直播间VC.view）
/// 是否需要关闭 (在viewDidDisappear的时候 判断是否需要显示小窗，yes就直接关闭直播间 no就显示小窗)
/// 滑动切换房间
/// 处理推送消息
/// 点击横幅进入其他房间
/// 进入房间（ViewDidLoad调用）
/// 获取小窗状态下的视图
/// 当前下标
/// 当前列表
/// 页面最小化
/// 滑动加入房间
/// 退出直播间
/// 目标VC（也就是直播间VC）
/// 退出当前页面
/// 关闭房间或最小化
/// 输入框
/// 点击事件视图
/// 初始化管理类
/// 代理
/// 当前房间
- (void)jif_closeOrFloatWindow;
- (void)jif_joinRoomWithConfigModel:(JICLModuleEnterConfigModel *)configModel;
- (void)jif_setupManager;
- (void)jif_switchJoinRoomWithIndex:(NSInteger)index fromWay:(JILOutDataSourceEnterRoomType)fromWay;
- (void)jif_changeVCToFloatWindow;
- (void)jif_enterOtherRoomByBroadcast:(JICLModuleBroadcastModel *)model;
- (void)jif_switchChangeRoom:(NSInteger)index;
- (UIView *)jif_fetchFloatingView;
- (void)jif_popLiveVC;
- (void)jif_exitLiveRoom:(BOOL)isNeedPopVC;
- (void)jif_handleOpcode3Data:(JICModulePushMessageModel *)model;
@property (nonatomic, assign) BOOL jip_isClose;
@property (nonatomic, strong, readonly) JICLModuleVideoContainerView *jip_videoContainerView;
@property (nonatomic, strong) NSMutableArray *jip_dataSourceRoomList;
@property (nonatomic, assign) JICLModuleRoomTotalModel *jip_currentTotalModel;
@property (nonatomic, strong, nullable) UIViewController *jip_targetVC;
@property (nonatomic, weak) id <JICLModuleTotalManagerDelegate> delegate;
@property (nonatomic, weak) JICLModuleBottomInputView *jip_inputView;
@property (nonatomic, strong, readonly) JICLiveModuleMainView *jip_controlView;
@property (nonatomic, weak) UIView *jip_targetView;
@property (nonatomic, assign) NSInteger jip_currentIndex;
@end

NS_ASSUME_NONNULL_END
