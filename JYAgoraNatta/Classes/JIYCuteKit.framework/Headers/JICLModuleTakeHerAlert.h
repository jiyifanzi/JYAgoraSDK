
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleTakeHerAlert : UIView








/// 初始化
/// @param jip_coin  带走私聊金币数
/** 消失 */
/// @param jip_uAvatar 用户头像
/// @param jip_showView 父视图
/// @param jip_aAvatar 主播头像
/** 弹出带走弹窗 */
/// @param jip_takeHer 带走回调
/**
 更新带走礼物数据
 @param jip_gModel 带走礼物
 */
/// @param jip_dismissBlock 消失回调
/// @param jip_gModel 带走礼物
+ (instancetype)jif_showTakeHerAlertViewWithGift:(JICLModuleGiftInfoModel *)jip_gModel
                                      targetView:(UIView *)jip_showView
                                     andChatCoin:(NSInteger)jip_coin
                                 andAnchorAvatar:(NSString *)jip_aAvatar
                                   andUserAvatar:(NSString *)jip_uAvatar
                                     andSureTake:(void(^)(void))jip_takeHer
                                 andDismissBlock:(void(^)(void))jip_dismissBlock;
- (void)jif_alertPrivateChat;
- (void)jif_dismissView;
- (void)jif_updateTakeGiftData:(JICLModuleGiftInfoModel *)jip_gModel;
@property (nonatomic, copy) void(^jip_sureTakeHer)(void);
@property (nonatomic, copy) void(^jip_dismissBlock)(void);
@property (nonatomic, strong, readonly) JICLModuleGiftInfoModel *jip_giftModel;
@end

NS_ASSUME_NONNULL_END
