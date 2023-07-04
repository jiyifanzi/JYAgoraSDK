
#import <Foundation/Foundation.h>
#import "JIChatRoom.h"

NS_ASSUME_NONNULL_BEGIN


@protocol JIChatRoomSDKDataSource <NSObject>
@optional


//多语言（en/ar/tr）
- (BOOL)ji_haveOneCoinsModule;
- (NSString *)ji_localizableCode;
- (BOOL)ji_sliderRemind;
///使用主包svg文件
- (BOOL)ji_haveGameModule;
/////是否有粉丝测试模块

- (BOOL)ji_broadcastState;
///是否有UGC模块
///获取主包svg文件路径
///直播间语聊房上划提示是否展示过（YES已经显示过，no未显示过），不实现默认为No
///yes展示过  no 未展示

- (BOOL)ji_oneCoinsSY;
- (NSDictionary *)ji_getLiveCurrentGameInfo;
//- (BOOL)ji_haveFanTestModule;
- (BOOL)ji_haveUGCModule;
- (NSString *)ji_getSVGPathWithUrl:(NSString *)ji_url;
//- (BOOL)ji_stanGuideShow;

- (BOOL)ji_turntableShow;
/////铁粉引导是否展示过（YES已经显示过，no未显示过），不实现默认为No


///获取直播间当前开启的游戏  没有就为nil
- (NSInteger)ji_timeAmendmentSeconds;
- (BOOL)ji_useMainSVGPath;
///时间修正秒数 (服务器时间戳-当前时间戳)
///1金币测试模块实验组
///是否是1金币测试模块
@required
///进场动画是否开启（appconfig中）
///资源压缩包密码，无传nil
- (BOOL)ji_networkEnable;




- (NSDictionary *)ji_globalParam;
- (NSString *)ji_ar_sensitiveWords;
- (NSInteger)ji_coins;
- (NSString *)ji_emoji_sensitiveWords;
- (AgoraRtcEngineKit *)ji_rtcEngineKit;

- (NSString *)ji_zipPassword;
- (UIImage *)ji_getDefault_avatar;
- (NSDictionary *)ji_accountInfo;
- (NSString *)ji_session;


///静止录屏提示view（不可主动关闭，13.2以下显示）
///当前金币
///登录session
/// 主包的rtc单例

///当前网络是否能用，如果返回NO
///全局配置
- (BOOL)ji_joinEffectSwitch;
//敏感词文本（空格分割的）
///默认头像
///登录用户信息
- (UIView *)ji_getScreenCaptureRemindPopView;
- (NSString *)ji_en_sensitiveWords;
@end



@protocol JIChatRoomSDKDelegate <NSObject>
@optional
- (void)ji_viewWillAppear;
- (void)ji_stanGuideDidShow;
- (void)ji_viewWillDisappear;

///展示转盘UI
///滑动提示框已显示
- (void)ji_multibeamGameViewDidUnfold:(NSString *)ji_gameId;
/// 内购粉丝团
- (void)ji_showTurntablePopView;
///   - ji_product: 粉丝团产品


- (void)ji_svgDownloadSuccess;
- (void)ji_liveGameViewClose;

///游戏浮球小窗展开
///svg全部下载完成


/// - Parameters:
- (void)ji_buyStanProuduct:(JIProductModel *)ji_product payConfig:(JIPayConfigModel *)ji_payConfig hostId:(NSInteger)ji_hostId completion:(void(^)(BOOL success, JIEventLabelModel * stanLabelModel))completion;
- (void)ji_sliderViewDidShow;
///
- (void)ji_broadcastStateChange:(BOOL)on;
///铁粉引导已显示

///语聊房创建的游戏浮球展开（用于埋点game_ball_click 事件，from ：需要自己判断位置，语聊房、直播间、私聊、other）
///游戏浮球小窗关闭



- (void)ji_liveGameViewUnfold;
///   - ji_hostId: 对应主播id

///   - completion: 结果回调
///   - ji_payConfig: apple
@required



///刷新首页列表（语聊房有更新,或退出）
/// 需要主包更新金币
///   - ji_following: 是否关注

///   - success: 成功（responseObj 为 json返回格式下，接口返回的完整数据）
- (void)ji_showRemindToRechargeView:(NSInteger)duration;
/// - Parameters:
/// 跳转聊天
///   - ji_accountId: 账号id

///   - ji_failure:    失败
///   - ji_avatar: 头像

/// - Parameters:
- (void)ji_showRechargePopView;
///展示静止截屏提示（可主动关闭，13.2以下显示）
///语聊房被关闭
/// 主包上传图片接口 ， 不做剑皇
- (void)ji_takeAnchorToPrivateAnchorWith:(JITakePrivateModel *)ji_takeModel;

- (void)ji_showScreenShotRemindPopView;
- (void)ji_updateUserDefaultLabel:(JIEventLabelModel * _Nullable)ji_label;
/// - Parameter ji_label: 当前标签
///   - ji_type: 1 用户 2 主播

- (void)ji_tipsMessage:(NSString *)ji_message type:(JITipsType)ji_type;
- (void)ji_jumpToDetailWithType:(NSInteger)ji_type accountID:(NSInteger)ji_accountID avatar:(NSString *)ji_avatar name:(NSString *)ji_name;
- (void)ji_requestMethod:(JIRequestMethod)ji_method api:(NSString *)ji_api query:(NSDictionary *)ji_query body:(NSDictionary *)ji_body success:(void(^)(id responseObj))ji_success failure:(void(^) (NSString * __nullable error))ji_failure;
/// 跳转详情
- (void)ji_sendMessageToAnchorId:(NSInteger)ji_accountId displayId:(NSInteger)ji_displayId name:(NSString *)ji_name avatar:(NSString *)ji_avatar;
/// - Parameter ji_coins: 当前金币

- (void)ji_uploadImage:(UIImage *)ji_image imageName:(NSString *)ji_name success:(void(^)(NSString * imageUrl))ji_success failure:(void(^) (NSString * __nullable error))ji_failure;
///   - ji_para: 参数
/// 埋点
/// 更新金币

/// - Parameters:
- (void)ji_showBuySVipPopView;
/// 顶部消息弹窗提示
/// - Parameters:
/// - Parameters:
- (void)ji_needUpdatedMemberCoins;

///   - ji_type: 类型
///   - ji_name: 主播name
- (void)ji_hideHUD;
- (void)ji_showHUD;


///   - failure: 失败
///   - ji_avatar: 主播头像
///   - method: 请求方式
///   - ji_name: 时间名称
///   - ji_anchorId: 主播id
///当在老板位上金币不足时，提醒去充值的弹窗
///   - body: body parmai
///   - ji_Live：yes = 直播间，no = ugc
///   - query: query string
- (void)ji_chatRoomClose;
/// 私聊带走

/// - Parameters:
///展示充值弹窗
///   - ji_name: image的name

- (void)ji_refreshHomeList;
/// - Parameters:
- (void)ji_jumpToLiveOrUGCWithRoomId:(NSInteger)ji_roomId anchorId:(NSInteger)ji_anchorId isLive:(BOOL)ji_isLive;
/// - Parameters:
///   - ji_avatar: 主播头像
///   - ji_name: name
- (void)ji_followingAnchor:(NSInteger)ji_accountId following:(BOOL)ji_following;
///   - ji_message: 内容
/// - Parameters:
///   - ji_success: 成功
- (void)ji_eventType:(JIChatRoomEventType)ji_type trackWithName:(NSString *)ji_name parameter:(NSDictionary *)ji_para;



/// 关注更新
///   - ji_roomId: 房间id
///   - ji_name: 主播name
///duration 剩余通话分钟
///   - ji_accountID: 账号id
/// banner跳转直播间或者UGC
///   - ji_accountId: 主播id
/// 更新用户弹幕标签
/// 使用主包网络请求
- (void)ji_updatedMemberCoins:(NSInteger)ji_coins;
///   - ji_image: 上传image
///   - ji_accountId: 主播id
///购买svip弹窗

@end





@interface JIChatRoomSDK : NSObject














///   - ji_from: 从哪里进入语聊房（用于统计）
/// 方便跳转 （用于语聊房内跳转，比如跳转详情，点击通知跳转直播间等）
///对外给出语聊房横幅是否开启（YES开启，no关闭）
///   - ji_roomID: 房间ID
///   - ji_accountId: 主播ID
///   - destory: 是否销毁语聊房
///消息页面购买粉丝调用（需先设置global的默认标签）
///对外给出是否显示滑动的状态（YES已经显示过，no未显示过）
///在语聊房
/// - Parameters:
/// - Parameters:
///对外给出是否显示铁粉引导的状态（YES已经显示过，no未显示过）
///是否是在Boss位
///展开语聊房游戏弹窗
///是否正在带走主播
///语聊房取消静音
///从请求开始到加入语聊房失败或者退出语聊房这个过程为YES， 其他为no，避免卡临界值
///账号登录成功后
///   - ji_following: 关注状态
///在小窗模式
///所有的rtm消息
///小窗模式下隐藏小窗（主包按需调用）
///   - operation: 回调(vc不为空再跳转)
///当前房间主持人的id（不为0时有效）
/// - Parameters:
///   - vc: 目标vc
/// 主播关注状态是否变化（仅需在语聊房且状态变化调用）
///用户信息变更后（资料）调用（金币更新不用调用），充值后也建议更新用户信息，然后调用该方法（充值后用户充值金额字段会变）
///语聊房静音
///金币更新
///关闭语聊房游戏弹窗
///小窗模式下展示小窗（主包按需调用）
///更新一金币活动状态
///语聊房到小窗
///获取语聊房当前开启的游戏 没有则为nil
///小窗到语聊房
+ (void)ji_chatRoomAudioMute;
+ (BOOL)ji_taking;
- (void)ji_followingAnchor:(NSInteger)ji_accountId following:(BOOL)ji_following;
+ (BOOL)ji_inMultibeam;
- (void)ji_userInfoUpdate;
- (void)ji_chatRoomGameViewClose;
- (void)ji_updatedOneCoinsState;
- (void)ji_pushToViewController:(UIViewController *)vc destoryChatRoom:(BOOL)destory;
- (void)ji_chatRoomReturnSmallView;
+ (instancetype)shared;
+ (void)ji_netwokingEnable:(BOOL)ji_enable;
+ (BOOL)ji_inChatRoom;
+ (BOOL)ji_getBroadcastState;
+ (void)ji_rtmMessage:(NSDictionary *)ji_message;
- (void)ji_destoryChatRoom:(void(^)(void))completion;
+ (void)ji_chatRoomAudioUnmute;
- (void)ji_chatRoomGameViewUnfold;
- (NSDictionary *)ji_chatRoomCurrentGameInfo;
+ (void)ji_loadSDK;
+ (BOOL)ji_isSmall;
- (NSDictionary *)ji_chatRoomTrackPublicParament;
+ (BOOL)ji_isBOSS;
- (void)ji_smallViewShow;
- (void)ji_becomeStanWithAnchor:(NSInteger)anchorId;
- (void)ji_smallViewHide;
- (void)ji_joinChatRoomWithRoomID:(NSInteger)ji_roomId from:(JIChatRoomFromType)ji_from operation:(void(^)( UIViewController * _Nullable vc))operation;
+ (BOOL)ji_getSliderRemind;
- (void)ji_coinUpdate;
+ (BOOL)ji_getStanGuideState;
- (void)ji_pushChatRoomFromSmallView;
+ (NSInteger)ji_currentHostId;
@property (nonatomic, weak) id<JIChatRoomSDKDataSource> dataSource;
@property (nonatomic, weak) id<JIChatRoomSDKDelegate> delegate;
@end

NS_ASSUME_NONNULL_END

