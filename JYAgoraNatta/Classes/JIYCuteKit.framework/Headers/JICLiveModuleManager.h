

#import <Foundation/Foundation.h>
#import "JICLiveModuleDataSource.h"
#import "JICLiveModuleDelegate.h"
#define JICLiveModuleManagerShared ([JICLiveModuleManager shareInstance])

NS_ASSUME_NONNULL_BEGIN

@interface JICLiveModuleManager : NSObject


#pragma mark - 单例


#pragma mark - 进入方法


#pragma mark - 外部接口











#pragma mark - 解压资源（在进入主包的时候就调这个方法 谢谢！）

#pragma mark - 外部推送处理

#pragma mark - 游戏相关(和语聊房联动，在语聊房的delegate/datasource中调用)



/// 最小化或者关闭房间（当跳转到下一个页面的之前 先调用这个方法 切到最小化之后再跳转）
/// 关闭直播间游戏悬浮窗（删号、退出登录、挤号、封号等 也要调用该方法 关闭游戏悬浮窗）
/// 进入直播间之前，需要在外部判断是否在语聊房的boss位上，如果**在boss位就不能跳转到直播间内部**
/// - Parameters:
/// 调用时机：每次打开app，第一次从内购页面返回时调用。（是否充值过的逻辑在sdk内部会判断）
/// - Parameters:
/// 1.内购验证小票接口调成功(包括订单重发时掉接口也算) （买铁粉不算！！！！）
/// 3.打电话：在点击打电话方法之前调用
/// 1.因为各种原因回到登录页（删号、退出登录、挤号、封号等）：在清user账号之前调用，不然内部的退出逻辑用户信息都为空
/// 成功购买vip（成功购买vip的时候 “先更新本地svip状态！！！” 然后再调这个方法用于刷新礼物列表。 注：外部不需要判断是否在直播间内，内部会判断）
/// 进入房间
/// 是否是小窗状态
/// 关注用户（主包外面关注/取关需要调方法通知直播间内部更新UI状态。在外部统一封装的接口中，以下情况调用方法）
/// 2.关注接口调失败 并且 错误码为-53（用户已关注主播）isFollow传YES。其余的接口失败的情况不调这个方法
/// 当前直播间的公共埋点参数
/// 处理外部的推送消息（在SSE推送 及 RTM的messageReceived回调中处理 传一整个字典）
/// 注：不需要判断是否在直播间中，直接调就行了
/// 代理
///   - fromWay: 进入直播间的路径
/// 充值成功 反正就是用户花了真💰的地方。
/// 打开直播间游戏页面
/// 关闭房间（强制退出方法 外部不需要判断逻辑 直接在以下场景跳转页面之前 调用这个方法。
/// 获取当前直播间游戏信息（语聊房delegate中调用）
///   - bgColor: 背景蒙版颜色（主包有需要的自己加，不需要的穿nil）
/// 拉黑用户（主包外面拉黑/取消拉黑需要调方法通知直播间内部更新UI状态。在外部统一封装的接口中，以下情况调用方法）
/// 开关声音的逻辑需要在外面处理，外部不需要判断是否在直播间中，内部会判断
/// 2.hunting：在跳转到hunting页面之前调用
/// 弹出0.99充值优惠弹窗
/// 3.rtm加币消息（注：该消息有两种情况-后台加币/third充值。只需要在充值的时候掉这个方法，外部判断一下productID.length > 0，再调这个方法）
/// 是否正在直播间模块中
///           ②code = -10(该账号不在黑名单)isBlock 传NO
///   - isUGCRoom: 是否是UGC房间
/// 1.关注接口调成功的时候  isFollow传改变之后的状态
///   - stanLabel: 铁粉标签
/// **不要和更新用户金币混淆。是用户充值成功，用于内部消优惠弹窗，不要随便调用！！！**
/// 2.购买svip成功
///   - roomID: 房间ID（没有 就传0）
///   - pushAnimation: 这个回调需外部自行pushVC
/// 成功购买铁粉(本地改完标签信息之后再调用)
///   - targetView: 父视图
/// 2.接口失败： ①code = -9(该账号已在黑名单) isBlock 传YES
/// 更新用户金币
/// 是否正在带走
///   - anchorID: 主播ID（必传！）
/// 4.进入语聊房：在跳转语聊房之前调用
/// 目前想到的逻辑↓（如果各自包有不同需求自行增删）
///   - agoraRoomId: 声网ID(没有 就传空字符串)
/// 加载资源
/// 前提：必须在一进入主包就初始化JICLiveModuleManager这个类 并设置代理。不然就自己写弹窗→_→
/// 1.接口成功 isBlock传改变之后的状态
/// 数据源
/// 隐藏小窗（在小窗模式下 逛其他页面 有时候需要隐藏小窗，离开这个页面之后 再显示。比如 视频详情页面之类的）
/// - Parameters:
///   - anchorID: 主播ID
- (void)jif_compressionResources;
- (void)jif_closeOrFloatLive;
- (void)jif_blockAnchor:(NSInteger)anchorID isBlock:(BOOL)isBlock;
- (void)jif_successBuyFan:(JICLModuleEventLabelModel *)stanLabel anchorID:(NSInteger)anchorID;
- (void)jif_closeGameSmallView;
- (void)jif_rechargeSuccess;
- (NSMutableDictionary *)jif_liveBasicTongjiDic;
- (void)jif_successBuySvip;
- (void)jif_handlePushData:(NSDictionary *)dic;
- (void)jif_updateUserCoins:(NSInteger)coins;
- (void)jif_closeLiveModule;
- (void)jif_enterRoomWithRoomID:(NSInteger)roomID
                    agoraRoomId:(NSString *)agoraRoomId
                       anchorID:(NSInteger)anchorID
                      isUGCRoom:(BOOL)isUGCRoom
                        fromWay:(JILOutDataSourceEnterRoomType)fromWay
                  pushAnimation:(void(^)(UIViewController *vc))pushAnimation;
- (void)jif_showGamePlayView;
- (void)jif_changeFloatState:(BOOL)isHidden;
- (void)jif_show099RechargeView:(UIView *)targetView
                        bgColor:(nullable UIColor *)bgColor;
- (void)jif_followAnchor:(NSInteger)anchorID isFollow:(BOOL)isFollow;
+ (instancetype)shareInstance;
- (NSDictionary *)jif_getCurrentGameInfo;
@property (nonatomic, weak) id <JICLiveModuleDataSource> dataSource;
@property (nonatomic, weak) id <JICLiveModuleDelegate> delegate;
@property (nonatomic, assign) BOOL jip_isFloatState;
@property (nonatomic, assign) BOOL jip_isInLiveModule;
@property (nonatomic, assign) BOOL jip_isTakingAnchor;
@end

NS_ASSUME_NONNULL_END
