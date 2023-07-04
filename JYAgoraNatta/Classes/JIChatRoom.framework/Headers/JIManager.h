
#import <Foundation/Foundation.h>
#import "JIRTMModel.h"
NS_ASSUME_NONNULL_BEGIN

@protocol JIRTMPushMessageDelegate <NSObject>
@required

/// 收到文字消息
///主播上麦
- (void)ji_rtmPushAnchorOnMicTimeUpdated:(JIRTMModel *)message;
/// 主持人强制老板下麦
/// 上麦主播倒计时更新
- (void)ji_rtmPushHostCoinsChange:(JIRTMModel *)message;
- (void)ji_rtmPushPerfectMatch:(JIRTMModel *)message;
- (void)ji_rtmPushHostBanAnchorMic:(JIRTMModel *)message;
///老板下麦
/// 开启新的语聊室
///主持人编辑了房间标题
/// 房间成员数更新
- (void)ji_rtmPushRechageCoins:(JIRTMModel *)message;
- (void)ji_rtmPushAnchorPutOnMic:(JIRTMModel *)message;
/// 收到有人配对成功
///语音聊天室目标更新
///主持人禁言主播

///房间销毁
- (void)ji_rtmPushChatRoomGoalDone:(JIRTMModel *)message;
- (void)ji_rtmPushReceivedTextMessage:(JIRTMModel *)message;
- (void)ji_rtmPushUserSendGift:(JIRTMModel *)message;
- (void)ji_rtmPushHostForceBossPutOffMic:(JIRTMModel *)message;
- (void)ji_rtmPushjUserJoinEffect:(JIRTMModel *)message;
- (void)ji_rtmPushHostForceAnchorPutOffMic:(JIRTMModel *)message;
- (void)ji_rtmPushChatRoomGoalUpdated:(JIRTMModel *)message;
- (void)ji_rtmPushBossPutOnMic:(JIRTMModel *)message;
///主播上麦时间快结束
- (void)ji_rtmPushHostBanMemberText:(JIRTMModel *)message;
///加金币
- (void)ji_rtmPushHostEditRoomInfo:(JIRTMModel *)message;
/// 主持人强制主播下麦
/// 关闭老的语聊室
///主持人解禁主播
- (void)ji_rtmPushBossPutOffMic:(JIRTMModel *)message;
- (void)ji_rtmPushAnchorPrivateSwitch:(JIRTMModel *)message;
///主播私聊开关变化
///老板上麦
- (void)ji_rtmPushHaveCloseVoiceChatRoom:(JIRTMModel *)message;
- (void)ji_rtmPushRoomDestroy:(JIRTMModel *)message;
///主持人禁止成员发文字消息
- (void)ji_rtmPushHaveNewVoiceChatRoom:(JIRTMModel *)message;

///主持人金币更新
///语音聊天室目标达成
- (void)ji_rtmPushRoomMemberUpdated:(JIRTMModel *)message;
///主播下麦
- (void)ji_rtmPushHostUnbanAnchorMic:(JIRTMModel *)message;
- (void)ji_rtmPushAnchorPutOffMic:(JIRTMModel *)message;
///送礼推送
- (void)ji_rtmPushAnchorOnMicTimeUp:(JIRTMModel *)message;
@end

@protocol JIRTMVoiceChatRoomMessageDelegate <NSObject>
@required
- (void)ji_rtmCRUserSendGift:(JIRTMModel *)message;
///获取语聊房列表
- (void)ji_rtmCRBossBilling:(JIRTMModel *)message;
///用户送礼
///加入语聊房
///提醒老板充值
///用户带走主播
///离开语聊房
- (void)ji_rtmCRJoinRoom:(JIRTMModel *)message;
- (void)ji_rtmCRUserTakeAnchor:(JIRTMModel *)message;

- (void)ji_rtmCRRemindBossToRecharge:(JIRTMModel *)message;

- (void)ji_rtmCRGetVoiceChatRoomList:(JIRTMModel *)message;
- (void)ji_rtmCRLeaveRoom:(JIRTMModel *)message;
///老板金币消费
@end




@interface JIManager : NSObject
































































///最新的
///全局配置
///登录用户信息
//敏感词文本（,分割的）
///最新的
/// 主包的rtc单例
- (void)ji_remindToRechager:(NSInteger)duration;
- (NSDictionary *)ji_accountInfo;
- (void)ji_broadcastStateChange:(BOOL)on;
- (NSString *)ji_zipPassword;
- (void)ji_buySvipPopView;
- (void)ji_rtcEngineKit;
+ (instancetype)manager;
- (UIView *)ji_screenCaptureRemindPopView;
- (NSString *)ji_emoji_sensitiveWords;
- (void)ji_needUpdateCoins;
- (void)ji_takeAnchorToPrivateAnchorWith:(JITakePrivateModel *)ji_takeModel;
- (void)ji_requestMethod:(JIRequestMethod)method api:(NSString *)api query:(nullable NSDictionary *)query body:(nullable NSDictionary *)body success:(void(^)(JIRespondObj * responseObj))success failure:(void(^) (NSString * __nullable error))failure;
- (void)ji_showHUD;
- (NSDictionary *)ji_globalParam;
- (BOOL)ji_haveUGCModule;
- (void)ji_turntablePopView;
- (void)ji_hideHUD;
- (void)ji_followingAnchor:(NSInteger)ji_accountId following:(BOOL)ji_following;
- (NSString *)ji_ar_sensitiveWords;
- (void)ji_downloadAsset;
- (JIGameItemModel *)ji_liveCurrentGameModel;
- (BOOL)ji_haveFanTestModule;
- (void)ji_svgDownloadSuccess;
- (BOOL)ji_oneCoinsSY;
- (NSInteger)ji_coins;
- (void)onReceiveRTMMessage:(NSDictionary *)response;
- (void)ji_updateUserDefaultLabel:(nullable JIEventLabelModel *)ji_label;
- (void)ji_updatedMemberCoins:(NSInteger)ji_coins;
- (void)ji_liveGameViewClose;
- (void)ji_stanGuideDidShow;
- (void)ji_errorMessage:(NSString *)msg;
- (void)ji_eventType:(JIChatRoomEventType)ji_type trackWithName:(NSString *)ji_name parameter:(nullable NSDictionary *)ji_para;
- (void)ji_chatRoomClose;
- (void)ji_showScreenShotRemindPopView;
- (NSString *)ji_en_sensitiveWords;
- (NSInteger)ji_timeAmendmentSeconds;
- (void)ji_liveGameViewUnfold;
- (void)ji_uploadImage:(UIImage *)ji_image imageName:(NSString *)ji_name success:(void(^)(NSString * imageUrl))success failure:(void(^) (NSString * __nullable error))failure;
- (UIImage *)ji_default_avatar;
- (void)ji_tipsMessage:(NSString *)msg;
- (void)ji_sliderViewDidShow;
- (void)ji_rechargePopView;
- (void)ji_jumpToDetailWithType:(NSInteger)ji_type accountID:(NSInteger)ji_accountID avatar:(nullable NSString *)ji_avatar name:(nullable NSString *)ji_name;
- (void)ji_multibeamGameViewDidUnfold:(NSString *)ji_gameId;
- (BOOL)ji_haveOneCoinsModule;
- (void)ji_jumpToLiveOrUGCWithRoomId:(NSInteger)ji_roomId anchorId:(NSInteger)ji_anchorId isLive:(BOOL)ji_isLive;
- (void)ji_uncompressAsset;
- (BOOL)ji_networkEnable;
- (BOOL)ji_haveGameModule;
- (BOOL)ji_turntableShow;
- (JIEventLabelModel *)ji_defaultEventLabel;
- (void)ji_sendMessageToAnchorId:(NSInteger)ji_accountId displayId:(NSInteger)ji_displayId name:(NSString *)ji_name avatar:(NSString *)ji_avatar;
- (NSString *)ji_getSvgPathWithUrl:(NSString *)ji_url;
- (void)ji_buyStanProuduct:(JIProductModel *)ji_product payConfig:(JIPayConfigModel *)ji_payConfig hostId:(NSInteger)ji_hostId completion:(void(^)(BOOL success, JIEventLabelModel * stanLabelModel))completion;
- (void)ji_successMessage:(NSString *)msg;
@property (nonatomic, strong, readonly) JIGlobalParam * globalParam;
@property (nonatomic, assign) BOOL useMainSVG;
@property (nonatomic, strong, readonly) JIMember * member;
@property (nonatomic, strong, readonly) NSString * session;
@property (nonatomic, weak) id<JIRTMPushMessageDelegate> pushDelegate;
@property (nonatomic, assign) BOOL ji_inMultibeam;
@property (nonatomic, weak) id<JIRTMVoiceChatRoomMessageDelegate> voiceDelegate;
@end

NS_ASSUME_NONNULL_END
