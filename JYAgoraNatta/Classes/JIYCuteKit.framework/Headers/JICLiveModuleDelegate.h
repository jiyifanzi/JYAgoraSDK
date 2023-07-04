

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JICLModuleEventWithUserInfoType) {
    JICLModuleEventWithUserInfoType_EnterTextChat   = 0,
    JICLModuleEventWithUserInfoType_EnterDetailInfo = 1,
    
};

@protocol JICLiveModuleDelegate <NSObject>
@optional
- (void)jif_outsideModuleDestroy;

/// 事件名：game_ball_click
/// 直播间销毁
- (void)jif_outsideModuleThinkingType:(JILOutDataSourceThinkingEventType)type eventName:(NSString *)eventName dic:(NSDictionary * __nullable)dic;

/// 点击游戏悬浮球埋点：由主包判断是在什么模块 参考数数统计表格 1.5新增
/// Firebase统计
/// 关闭游戏的方法(语聊房SDK的方法) 1.5新增
- (void)jif_outsideModuleTongjiGameBallClick:(NSInteger)gameId;
///   - type: 类型
///   - dic: 信息（直接一整个丢进去）

- (void)jif_outsideModuleChatRoomShowGame;


/// - Parameters:
- (void)jif_outsideModuleViewWillAppear;
///   - dic: 信息（需要重新拼装信息，具体看枚举的注释）
- (void)jif_outsideModuleFirebaseType:(JILOutDataSourceFirebaseEventType)type dic:(NSDictionary * __nullable)dic;

///   - type: 类型

- (void)jif_outsideModuleViewWillDisappear;


/// 参数：from(点击位置) - live，multibeam，private，other   gameid(游戏id) - 传给你们的游戏id
/// - Parameters:

/// 数数统计
- (void)jif_outsideModuleChatRoomCloseGame;
/// 打开游戏的方法(语聊房SDK的方法) 1.5新增
///   - eventName: 事件名称
@required
///   - state: bool值状态
/// 需要主包更新金币（主包调接口刷新金币 然后再通知直播间）1.5新增

///   - isNeedJH: 是否需要鉴黄 yes：需要鉴黄 no：不需要鉴黄


/// 提醒充值Svip（跳转SVIP之前 需要先调直播间最小化方法）
/// 进入充值页面
/// 更新用户剩余金币
/// - Parameter text: 需要被处理的原文案 如果外面的包不需要做敏感词判断的话 就return text
- (void)jif_userBlockAnchor:(NSInteger)anchorID isBlock:(BOOL)isBlock completion:(void(^)(void))completion;
///   - image: 图片对象

/// 刷新首页live模块列表（产品需求：刷新的时候需要直接回到顶部）

/// 以后主包都会要有敏感词替换的需求，各自的主包总是要封一个方法的，所以给你们传需要处理的文案，替换好了之后再传过来。别再问为什么直播间内部不处理了 = =
- (void)jif_outsideModuleReloadHomeList;

///   - configModel: 内购总模型

/// 内购充值（外部直接调pg的内购方法。埋点等逻辑也在外面处理）
///   - nickname: 昵称
///   - isAnchor: 是否是主播号
/// 因为！！！在直播间外面关注/取关主播，直播间也是需要同步刷新UI的！！！ 所以最好外面写一个统一的方法，然后调直播间方法jif_followAnchor更新。如果外面打算在十几个关注的地方调方法更新，那我道歉，确实没考虑过这种情况。
- (void)jif_outsideModuleLoading:(BOOL)isShow;

/// - Parameters:




///   - anchorID: 主播ID

/// 显示禁止录屏的弹窗  （需要外部监听录屏通知 自行dismiss）



- (void)jif_outsideModuleUpdateUserMedal:(JICLModuleEventLabelModel *)medalModel;

- (void)jif_outsideModuleEnterRechargeVC;
/// - Parameters:
///   - displayID: 展示ID
/// - Parameter roomID: 房间ID
/// - Parameter superView: 弹窗的父视图
/// 更改本地布尔值状态
///   - model: 内购产品模型
- (void)jif_outsideModuleUploadImage:(UIImage *)image isNeedJH:(BOOL)isNeedJH completion:(void(^)(BOOL success, NSString *photoUrl))completion;
///   - isFollow: 是否是关注
/// 敏感词处理（需要返回处理之后的文案）敏感词的获取：config接口 -> 解密 -> filterWordsUrl -> 对应的json地址 -> 拿敏感词 -> 存本地。

- (NSString *)jif_outsideModuleFilterWord:(NSString *)text;
/// 📢注意：直播间 & 私聊：840*480  24fps。直播间内部会改分辨率和帧数，虽然私聊和直播间是一样的参数，但是语聊房的参数不一样，外面的包在进入私聊模块的时候要注意设置。
///   - avatar: 头像

- (void)jif_liveModuleRequstApi:(JICLModuleRequestApiModel *)requestModel completionHandler:(nullable void (^)(NSDictionary * _Nullable responseDic,  NSError * _Nullable error))completionHandler;
///   - accountID: 账号ID
/// 请求接口
/// 进入语聊房
/// 1.接口请求需要用到大家统一处理错误码的逻辑（比如session过期 比如挤号之类的逻辑，这些逻辑是需要保留的）
/// 更新用户标签



/// 拉黑/取消拉黑主播（外部需要封装一个拉黑方法！！！类似于关注、取关那样）
///   - completion: 完成回调。不管成功失败都要给回调。小票接口调成功才算成功
///   - otherInfo: 其他信息
/// 显示顶部弹窗(内部已经放在主线程回调给你们的 放心食用(*^▽^*))
/// 进入视频私聊页面（传给你们的是进入私聊的字典，用进入视频私聊房间的模型去解析。参考文档“app操作推送码” 操作码2 子操作码8。也可以搜索一下“initialPrice”）
/// 携带用户信息的事件类型（挑了一些基本的信息 传出来给外面跳页面的时候用。如果为空的话 不会传nil出去 会传空字符串。）
/// 上传图片（错误提示 成功提示 都要在你们的方法中实现）

- (void)jif_userFollowAnchor:(NSInteger)anchorID isFollow:(BOOL)isFollow completion:(void(^)(BOOL followState))completion;

///   - isBlock: 是否是拉黑
///   - requestModel: 请求的模型参数


/// 关注/取关主播（外部不需要判断是否在直播间中，直接调用就行了。）
///   - completionHandler: 请求回调
- (void)jif_outsideModuleEnterPrivateVideoChat:(NSDictionary *)dic;
- (void)jif_outsideModuleChangeLocalBoolState:(BOOL)state type:(JILNeedChangeBoolInfoType)type;
/// - Parameters:
/// - Parameters:
/// - Parameters:
/// 弹充值弹窗（购买啊 埋点的逻辑 都在外面各自的主包中实现，这边只负责弹弹窗）



- (void)jif_needUpdateUserCoins;
- (void)jif_outsideModuleRemindRechargeSVIP;
/// - Parameters:


/// 累了。每次都要解释为什么要单独开一个关注/取关主播。


///   - type: 事件类型

/*
 接口调成功 或者 接口掉失败但是错误码为-53：followState = isFollow（传给你们的isFollow状态 说明状态改成功了）
 其余情况 followState = !isFollow(传给你们的isFollow状态取反 说明没改成功）
 */
- (void)jif_outsideModuleUpdateUserLeftCoin:(NSInteger)leftCoin;

/// - Parameters:

///   - completion: 完成回调 followState 最终关注状态

///   - completion: 完成回调（不管成功失败都要回调）
- (void)jif_outsideModuleJoinChatRoom:(NSInteger)roomID;
- (void)jif_outsideModuleShowRechargeView:(UIView *)superView;
///   - type: 更改类型

- (void)jif_outsideModuleShowTopAlert:(JILOutDataSourceTopAlertType)type text:(NSString *)text;
- (void)jif_outsideModuleEventWithUserInfoType:(JICLModuleEventWithUserInfoType)type
                                     accountID:(NSInteger)accountID
                                      nickname:(NSString *)nickname
                                        avatar:(NSString *)avatar
                                     displayID:(NSString *)displayID
                                      isAnchor:(BOOL)isAnchor;
///   - anchorID: 主播ID
- (void)jif_outsideModuleShowNoScreenView;
///   - completion: 完成回调 （不管成功失败都要给回调哈 内部需要消loading）
/// 显示/消失loading（中间的那种loading）
- (void)jif_outsideModulePay:(JICLModuleProductModel *)model
                 configModel:(JICLModulePayModel *)configModel
                   otherInfo:(JICLModulePayOtherInfoModel *)otherInfo
                  completion:(void(^)(BOOL success))completion;
/// 📢特别注意：！！进私聊的时候 需要把rtc的代理抢回去
/// 2.在请求接口底层的成功/错误的顶部提示弹窗逻辑 及 loading逻辑需要去掉
@end

NS_ASSUME_NONNULL_END
