
#import <Foundation/Foundation.h>
#import "JICLModuleBottomFunctionManager.h"
#import "JICLModuleGamePopView.h"
@class JICLiveModuleVC, JICModulePushMessageModel;
NS_ASSUME_NONNULL_BEGIN

#define JICLModuleInsideManagerShared ([JICLModuleInsideManager shareInstance])

@interface JICLModuleInsideManager : NSObject
















#pragma mark - 单例

#pragma mark - 处理外部推送

#pragma mark - 关闭房间



#pragma mark - 其他方法


#pragma mark - Getter

/// vc
/// 是否需要刷新首页列表
/// 是否充值过
/// 是否正在带走
/// 当前房间模型
/// -1：停止
/// 处理外部推送
/// 游戏视图
/// 底部功能管理类
/// 关闭或最小化
/// 关闭房间
/// 仅返回页面
/// 是否需要自动展示充值弹窗
/// 当前语言
/// 是否用主包的svg路径
/// 是否在本次启动app中充值过
/// 当前房间ID
/// 移除连击视图
/// 当前房间ID
/// 控制列表是否能滑动
/// 当前是否是阿语
/// 是否支持新进场特效
- (void)jif_tableViewCanScroll:(BOOL)scrollEnabled;
- (BOOL)jif_hasRecharge;
- (void)jif_removeComboView;
- (void)jif_insideHandleOpcode3Data:(JICModulePushMessageModel *)model;
- (void)jif_insideCloseOrFloatWindow;
- (void)jif_insideCloseLivePage:(BOOL)isPopVC;
+ (instancetype)shareInstance;
- (void)jif_insideOnlyPopLiveVC;
@property (nonatomic, strong) JICLModuleGamePopView * _Nullable jip_gamePopView;
@property (nonatomic, assign) NSInteger jip_currentRoomID;
@property (nonatomic, strong) NSString *jip_currentLanguage;
@property (nonatomic, strong, nullable) JICLiveModuleVC *jip_vc;
@property (nonatomic, assign) BOOL jip_isNeedRefreshHomeList;
@property (nonatomic, strong) JICLModuleRoomTotalModel *jip_currentModel;
@property (nonatomic, assign) BOOL jip_hasRechargeInThisLife;
@property (nonatomic, assign) NSInteger jip_hostID;
@property (nonatomic, assign) BOOL jip_shouldShowAutoDiscountView;
@property (nonatomic, assign) BOOL jip_isTakingAnchor;
@property (nonatomic, assign) BOOL jip_isRTL;
@property (nonatomic, assign) NSInteger comboing;
@property (nonatomic, strong) JICLModuleBottomFunctionManager *jip_bottomManager;
@property (nonatomic, assign) BOOL jip_useMainSVGPath;
@property (nonatomic, assign) BOOL jip_isShowNewEnterEffect;
@end

NS_ASSUME_NONNULL_END
