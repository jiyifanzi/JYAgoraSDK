
#import <UIKit/UIKit.h>
@class JICModulePushMessageModel;
@class JICLModuleEnterConfigModel;
@class JICLModuleRoomTotalModel, JICLModuleBroadcastModel;
NS_ASSUME_NONNULL_BEGIN

@interface JICLiveModuleVC : UIViewController

#pragma mark - Readonly

#pragma mark - Getter











/// 仅pop直播页面
/// 当前房间是否是UGC房间
/// 初始化
/// 关闭房间或者最小化房间
/// 当前主播ID(项目中都用get方法 在数据管理类 =>获取当前模型 => 拿到当前主播ID)
/// 进入直播间配置模型
/// 当前主播ID(fixbug 极限情况下调两次进入方法，进入方法没有拦住的bug
/// 处理推送消息
/// 当前房间模型
/// 控制列表能否滑动
/// 使用：在初始化时就赋值，在更换房间时，就会维护赋值。目前只在进入方法中拦截判断使用
/// 关闭直播间
/// 点击横幅进入其他房间
- (void)jif_handleOpcode3Data:(JICModulePushMessageModel *)model;
- (void)jif_enterOtherRoomByBroadcast:(JICLModuleBroadcastModel *)model;
- (instancetype)initWithAnchorID:(NSInteger)anchorID;
- (void)jif_closeSelf:(BOOL)isNeedPopVC;
- (void)jif_closeSelfOrChangeFloatState;
- (void)jif_tableViewIsEnable:(BOOL)isEnable;
- (void)jif_onlyPopSelf;
@property (nonatomic, assign) NSInteger jip_currentAnchorID;
@property (nonatomic, strong) JICLModuleRoomTotalModel *jip_currentTotalModel;
@property (nonatomic, assign) BOOL jip_isUGC;
@property (nonatomic, strong) JICLModuleEnterConfigModel *jip_configModel;
@property (nonatomic, assign) NSInteger jip_compairCurrentHostID;
@end

NS_ASSUME_NONNULL_END
