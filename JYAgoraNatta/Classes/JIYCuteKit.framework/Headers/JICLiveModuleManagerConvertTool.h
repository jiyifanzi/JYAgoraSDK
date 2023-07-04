

#import <Foundation/Foundation.h>
#import "JICLModuleBannerInfoModel.h"
#define JICLConvertToolShared ([JICLiveModuleManagerConvertTool shareInstance])

NS_ASSUME_NONNULL_BEGIN

@interface JICLiveModuleManagerConvertTool : NSObject

#pragma mark - 单例

#pragma mark - 属性

#pragma mark - Getter
#pragma mark 用户信息









#pragma mark 配置信息















#pragma mark RTC/RTM


#pragma mark 其他信息












#pragma mark - 方法


































/// SSE状态
/// 用户ID
/// 当前语聊房游戏模型
/// 无网提示
/// 需要主包更新金币
/// 当前语言
/// 主包的PAG路径
/// PK比分URL
/// 用户是否是特权用户（消息内用）
/// 用户sesstion
/// 隐藏loading
/// 更新金币数量
/// 获取当前VC
/// 关注、取关主播
/// 进入私聊页面
/// 关闭游戏的方法(语聊房SDK的方法)
/// 用户整体信息
/// 是否仅有main
/// 获取内购模型
/// 用户拉黑主播
///   - isBlock: 是否拉黑
/// 是否为阿语
/// 头像占位图
/// 是否支持私聊功能
/// 显示loading
/// 是否显示转盘
/// 获取当前窗口
/// 是否使用主包的svg路径
/// 改变广播状态
/// 用户头像
/// 显示禁止录屏
/// - Parameters:
/// 获取铁粉内购项模型
/// 已经显示过铁粉提示
/// 显示成功提示
/// 显示信息提示
/// 判断是否无网（并弹无网提示）YES 无网 NO 有网
/// 标签高度
/// 进入个人中心的充值页面
/// 进入语聊房
/// 根据礼物ID获取礼物
/// 获取性别类型
/// 显示错误提示
/// 直播间礼物信息
/// 上传图片
/// 携带信息的点击事件
/// 已经显示过滑动提示
/// banner信息
/// 是否显示过滑动提示
/// 用户是否是Svip
/// 统计点击游戏悬浮窗事件
/// 销毁直播间
/// 跳转到视频私聊页面
/// 更新用户标签
/// 用户昵称
/// RTM实例
/// 标签URL
/// 当前是否是无网络状态
/// 提醒充值SVIP
/// 刷新首页
/// 标签标题
/// 是否关闭广播
/// 进入个人主页
/// 网络层接口请求失败的错误提示
/// 用户余额
/// 弹充值弹窗
/// 是否开启铁粉功能
/// 敏感词处理
///   - anchorID: 主播id
/// 打开游戏的方法(语聊房SDK的方法)
/// 是否是绿号
/// 获取未购买过的内购折扣数组
/// 标签宽度
/// RTC实例
/// 用户充值总额
/// 获取进入方式字符串
/// 是否显示过滑动引导
- (NSString *)jif_userName;
- (JILOutDataSourceGenderType)jif_getGenderType:(NSString *)genderStr;
- (AgoraRtcEngineKit *)jif_rtcKit;
- (NSString *)jif_wordFilter:(NSString *)text;
- (void)jif_insideShowRechargeView:(UIView *)superView;
- (BOOL)jif_isShowPrivateChat;
- (void)jif_showNotiTip:(NSString *)tip;
- (NSString *)jif_currentLanguage;
- (void)jif_showSuccessTip:(NSString *)tip;
- (NSString *)jif_configTagTitle;
- (void)jif_enterSingleChatVCWithAccountID:(NSInteger)accountID
                                  nickname:(NSString *)nickname
                                    avatar:(NSString *)avatar
                                 displayID:(NSString *)displayID
                                  isAnchor:(BOOL)isAnchor;
- (void)jif_enterRechargeVC;
- (AgoraRtmKit *)jif_rtmKit;
- (JICLModuleGiftInfoModel *)jif_getGiftModel:(NSInteger)giftID;
- (void)jif_showNoScreenView;
- (JICLModuleProductModel *)jif_getFanProductModel;
- (void)jif_needUpdateUserCoins;
- (NSString *)jif_pkFlagURL;
- (NSDictionary *)jif_userAccountDic;
- (void)jif_updateUserLabel:(JICLModuleEventLabelModel *)label;
- (void)jif_closeChatRoomGame;
- (void)jif_showErrorTip:(NSString *)tip;
- (void)jif_enterChatRoom:(NSInteger)roomID;
- (BOOL)jif_isRTL;
- (BOOL)jif_isShowRandomTable;
- (NSString *)jif_configTagUrl;
- (void)jif_jumpToPrivateVideoChat:(NSDictionary *)dic;
- (float)jif_userTotalRecharge;
- (NSString *)jif_getSVGPath:(NSString *)url;
- (BOOL)jif_userIsSvip;
- (NSString *)jif_userSession;
- (void)jif_userFollowAnchor:(NSInteger)anchorID isFollow:(BOOL)isFollow completion:(void(^)(BOOL followState))completion;
- (void)jif_showNetworkErrowTip:(NSString *)tip;
- (UIWindow *)jif_keyWindow;
- (NSInteger)jif_sseStatus;
- (void)jif_destroyModule;
- (BOOL)jif_isCloseBroadcast;
- (BOOL)jif_isUseMainSVGPath;
- (BOOL)jif_userIsPrivilege;
- (BOOL)jif_isGreen;
- (void)jif_hadShowFanTip;
- (BOOL)jif_noNetwork;
- (UIViewController *)jif_getCurrentVC;
- (void)jif_tongjiGameBallClick:(NSInteger)gameID;
- (BOOL)jif_isJustMain;
- (void)jif_insideEventWithUserInfoType:(JICLModuleEventWithUserInfoType)type
                              accountID:(NSInteger)accountID
                               nickname:(NSString *)nickname
                                 avatar:(NSString *)avatar
                              displayID:(NSString *)displayID
                               isAnchor:(BOOL)isAnchor;
- (NSMutableArray *)jif_discountList;
- (void)jif_hideLoading;
- (NSInteger)jif_userAccountID;
- (void)jif_changeBroadcastState:(BOOL)isClose;
- (void)jif_updateUserCoins:(NSInteger)coins;
- (BOOL)jif_isOpenFanClub;
- (void)jif_showNoNetworkTip;
- (void)jif_hadShowScrollTip;
- (NSInteger)jif_configTagHeight;
- (BOOL)jif_isShowScrollTip;
- (NSString *)jif_getEnterRoomWayStr:(JILOutDataSourceEnterRoomType)type;
- (JICLModuleGameConfigModel *)jif_chatCurrentGameModel;
- (NSInteger)jif_configTagWidth;
- (void)jif_updateImage:(UIImage *)image isNeedJH:(BOOL)isNeedJH completion:(void(^)(BOOL success, NSString *photoUrl))completion;
- (NSInteger)jif_userCoins;
- (NSString *)jif_userAvatar;
- (JICLModulePayModel *)jif_getPayConfigModel;
- (BOOL)jif_judgeNoNetworkAndShowNoNetTip;
+ (instancetype)shareInstance;
- (void)jif_showLoading;
- (void)jif_insideRefreshHomepage;
- (BOOL)jif_isShowFanGuideTip;
- (void)jif_remindRechargeSvip;
- (void)jif_insideUserBlockAnchor:(NSInteger)anchorID
                          isBlock:(BOOL)isBlock;
- (UIImage *)jif_userPlaceHolder;
- (void)jif_showChatRoomGame;
- (void)jif_enterUserDetailVCWithAccountID:(NSInteger)accountID
                                  nickname:(NSString *)nickname
                                    avatar:(NSString *)avatar
                                 displayID:(NSString *)displayID
                                  isAnchor:(BOOL)isAnchor;
@property (nonatomic, strong) JICLModuleBannerInfoModel *jip_bannerInfo;
@property (nonatomic, strong) JICLModuleGiftListModel *jip_giftInfo;
@end

NS_ASSUME_NONNULL_END
