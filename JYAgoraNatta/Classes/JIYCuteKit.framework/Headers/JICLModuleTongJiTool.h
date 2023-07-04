
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleTongJiTool : NSObject

#pragma mark - Thinking











#pragma mark - Firebase

#pragma mark - 埋点公共参数

/// 点击小窗回到房间
/// 送礼点击事件
/// 进入到离开单个直播的时间(该事件为计时事件/秒)
/// 成功进入某直播间
/// 带from的埋点事件
/// 时间事件埋点
/// 不带额外参数的埋点事件
/// 游戏按钮点击
/*
 sendGift:送礼（送礼接口调成功）
 live-private:直播间带走
 activity:活动扣费
 */
/// 金币减少
/// 带走通话事件
/// 进入PK到退出PK的时长（秒）处于双人直播画面
/// 点击小窗关闭房间
+ (void)jif_thinkingTimeForOneLive:(JICLModuleRoomTotalModel *)totalModel;
+ (void)jif_thinkingMiniReturnRoom;
+ (void)jif_thinkingStartCall;
+ (void)jif_thinkingWithTimeEventName:(NSString *)eventName;
+ (void)jif_firebaseSpendCoin:(NSInteger)coins spendWay:(NSString *)spendWay;
+ (NSMutableDictionary *)jif_addBasicInfo;
+ (void)jif_thinkingClickGameIconWithGameID:(NSInteger)gameID;
+ (void)jif_thinkingWithName:(NSString *)eventName;
+ (void)jif_thinkingTimeForOnePK:(JICLModuleRoomTotalModel *)totalModel;
+ (void)jif_thinkingMiniCloseRoom;
+ (void)jif_thinkingFromWithName:(NSString *)eventName;
+ (void)jif_thinkingSengGift:(JICLModuleGiftInfoModel *)model isPrivate:(BOOL)isPrivate isFast:(BOOL)isFast;
+ (void)jif_thinkingEnterRoomSuccess:(JICLModuleRoomDetailModel *)detailModel fromWay:(JILOutDataSourceEnterRoomType)fromWay;
@end


#pragma mark - 直播间特有事件
static NSString * const JILThinkingEventEnterRoomSuccess = @"enter_liveroom_success";
static NSString * const JILThinkingEventTimeForOneLive = @"time_for_one_live";
static NSString * const JILThinkingEventTimeForOnePK = @"time_for_one_pk";
static NSString * const JILThinkingEventClickHostAvatar = @"click_host_avatar_in_live";
static NSString * const JILThinkingEventClickPrivateButton = @"click_private_button_in_live";
static NSString * const JILThinkingEventClickPKRankList = @"click_gift_rank_in_pk";
static NSString * const JILThinkingEventClickMsgAutoSayHi = @"click_auto_say_hi_in_live";
static NSString * const JILThinkingEventClickMsgAutoFollow = @"click_auto_follow_in_live";
static NSString * const JILThinkingEventClickMsgAutoSendGift = @"click_auto_send_gift_in_live";


#pragma mark - 直播间语聊房通用事件
static NSString * const JILThinkingEventCloseRoomByMinimize = @"click_close_room_by_minimize";
static NSString * const JILThinkingEventReturnRoomByMinimize = @"click_return_room_by_minimize";
static NSString * const JILThinkingEventClickGiftsButton = @"click_gifts_button";
static NSString * const JILThinkingEventShowKeyboard = @"click_input_open_keyboard";
static NSString * const JILThinkingEventClickSendMsg = @"click_send_barrage_button";
static NSString * const JILThinkingEventClickCloseButton = @"click_close_button";
static NSString * const JILThinkingEventEnterPureMode = @"enter_pure_mode";
static NSString * const JILThinkingEventClickAudienceList = @"click_audience_list";
static NSString * const JILThinkingEventClickBanner = @"click_banner";
static NSString * const JILThinkingEventClickQuota = @"click_quota";

static NSString * const JILThinkingEventClickBarrage = @"barrage_button_click";
static NSString * const JILThinkingEventClickMore = @"more_button_click";
static NSString * const JILThinkingEventClickGame = @"game_button_click";
static NSString * const JILThinkingEventClickGameIcon = @"game_icon_button_click";
static NSString * const JILThinkingEventClickGameBall = @"game_ball_click";
static NSString * const JILThinkingEventClickGameBanner = @"game_banner_click";
static NSString * const JILThinkingEventClickFastGift = @"fast_gift_button_click";
static NSString * const JILThinkingEventClickRecharge = @"recharge_button_click";

#pragma mark - 礼物
static NSString * const JILThinkingEventSendGiftSuccess = @"send_gift_success";

#pragma mark - 通话
static NSString * const JILThinkingEventStartCall = @"start_call";

#pragma mark - 铁粉
static NSString * const JILThinkingEventClickBuyFreeMsg = @"click_buy_freemsg";
static NSString * const JILThinkingEventClickGetFreeMsg = @"click_get_freemsg";

NS_ASSUME_NONNULL_END
