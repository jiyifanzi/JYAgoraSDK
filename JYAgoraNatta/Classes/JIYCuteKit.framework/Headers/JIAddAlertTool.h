
#import <Foundation/Foundation.h>

@class JIBanner, JIGiftPublicityView;

NS_ASSUME_NONNULL_BEGIN

@protocol JIAddAlerToolDelegate <NSObject>
@required
/** 显示充值弹窗 */

- (NSString *) jif_currentHostAvatar;
- (void) jif_chooseGiftAlertYChanged:(double) jip_y;

- (void) jif_showSendGiftAlert;

- (void) jif_sendHiToHost;

/** 是否被当前直播间禁言了 */
- (void) jif_clickBarrageNickname:(NSInteger) jip_accoundId andType:(JICLModuleMessageUserType) jip_type;

- (void) jif_clickedGift:(JICLModuleGiftInfoModel *) gift;
- (BOOL) jif_isFollowedHostInCurrentRoom;

/** 获取VC的view*/
/** 弹出礼物是的弹窗y */
/** 是否关注了当前主播 */



- (UIView *) jif_getVCView;
/** 当前主播的头像 */
/** 进入房间60s 弹关注弹窗*/

- (void) jif_showFollowAlert;
/** 是否在当前直播间送过礼物 */

/** 点击弹幕用户名字 */
- (BOOL) jif_isSendBarrageInCurrentRoom;



- (BOOL) jif_isSendGiftInCurrentRoom;
- (void) jif_followCurrentHost;
- (void) jif_jumpToSpecialPage;

/** 打开送礼界面 */
/** 去svip页面 */
/** 关注当前主播 */
- (void) jif_showRechargeView;

/** 发送Hi */
/** 点击礼物 */
- (BOOL) jif_isBeMutedInCurrentRoom;
/** 是否在当前直播间发送过弹幕 */

@end

@interface JIAddAlertTool : NSObject



































/////*****************************     礼物列表 part     *******************************//////
/**
 显示礼物列表弹窗
*/
/////*****************************     弹幕 part     *******************************//////
/** 收到礼物显示容器 */
/**
 刷新礼物列表数据
 @param ggArray banner数组
*/
/////*****************************     其他 part     *******************************//////
/**
 播放完成目标svg
 @param jip_showView 添加supperview
 @param jip_name 主播昵称
 */
/**
 添加显示弹幕信息
 @param jip_msg 弹幕消息数据
 @param jip_isImmediately 是否是需要立即插入的消息
*/
/**
 购买svip后刷新礼物列表
*/
/** 小banner */
/** 离开前销毁定时器及UI控件 */
/** 是否关注了当前主播 */
/////*****************************     内部方法     *******************************//////
/////*****************************     banner part     *******************************//////
/** 开始新的直播间(RTM连接成功) */
/** 进入后激活定时器 */
/**
 礼物发送成功后转换
 @param gift 礼物模型
 @param blindId 盲盒id 不是盲盒的话传0
*/
/**
 播放svip进入房间svg
 @param jip_showView 添加supperview
 @param jip_avatar 用户头像
 @param jip_name 用户昵称
 */
/** 清理上一个直播间的显示数据 */
/**
 添加小banner
 @param showView 添加supperview
*/
/**
 添加礼物送出显示容器
 @param showView 添加supperview
*/
/** 是否在当前直播间发送过弹幕 */
/** 通过礼物id查找礼物url */
/**
 修改弹幕区域位置
 @param jip_rect 弹幕frame
 @param jip_isRefresh 是否需要刷新
*/
/** 当前主播头像 */
/**
 显示送礼物弹窗
 @param msg 礼物消息数据
*/
/////*****************************     礼物送出显示 part     *******************************//////
/**
 添加弹幕显示容器
 @param showView 添加supperview
*/
/** 单例 */
/** 是否在当前直播间送过礼物 */
/**
 初始化礼物列表view
 @param showView 添加supperview
 @param ggArray 礼物数组
*/
- (void) jif_refreshGiftViewAfterBuy;
- (void) jif_addAchieveGoalsSvgTo:(UIView *) jip_showView andName:(NSString *) jip_name;
- (void) jif_showSendGiftEffectWith:(JICLModuleMessageModel *) msg;
- (void) jif_showGiftAlert;
- (JICLModuleMessageModel *) jif_convertMessageModelWith:(JICLModuleGiftInfoModel *) gift andBlindId:(NSInteger) blindId;
+ (instancetype)shareInstance;
- (void) jif_addJoinRoomSvgTo:(UIView *) jip_showView andAvatar:(NSString *) jip_avatar andName:(NSString *) jip_name;
- (void) jif_addSmallBannerToView:(UIView *) showView;
- (void) jif_addBarrageShowView:(UIView *) showView;
- (void) jif_showOneBarrageEffectWith:(JICLModuleMessageModel *) jip_msg andImmediatelyMsg:(BOOL)jip_isImmediately;
- (void) jif_refreshBarragePartFrame:(CGRect) jip_rect andIsRefresh:(BOOL)jip_isRefresh;
- (void) jif_addSendGiftShowView:(UIView *) showView;
- (void) jif_addGiftChooseToView:(UIView *) showView andDataArray:(NSArray *) ggArray;
- (void) jif_clearAllData;
- (JICLModuleGiftInfoModel *) jif_inquireGiftModelWith:(NSInteger) jip_giftId;
- (void) jif_startNewRoom;
- (void) jif_activationTimer;
- (void) jif_destroyTimer;
- (void) jif_refreshGiftArray:(NSArray *) ggArray;
@property (nonatomic, strong, readonly) JIGiftPublicityView * jip_receiveGiftView;
@property (nonatomic, strong, readonly) JIBanner * jip_banner;
@property (nonatomic, copy) NSString * jif_hostAvatar;
@property (nonatomic, assign) BOOL jif_hasSendGift;
@property (nonatomic, assign) BOOL jif_hasSendBarrage;
@property (nonatomic, assign) BOOL jif_hasFollowed;
@property (nonatomic, weak) id<JIAddAlerToolDelegate> jip_delegate;
@end

NS_ASSUME_NONNULL_END
