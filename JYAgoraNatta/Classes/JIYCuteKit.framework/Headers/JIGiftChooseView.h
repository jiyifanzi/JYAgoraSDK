
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JIGiftChooseViewDelegate <NSObject>
@required

/** 弹出礼物是的弹窗y xytodo */



- (void) jif_showRechargeAlert;
- (void) jif_jumpToSvip;

/** 弹出充值弹窗 */
- (void) jif_giftAlertContenYChange:(double) jip_y;
- (void) jif_clickedOneGift:(JICLModuleGiftInfoModel *) gift;
/** 前去svip页面 */
/** 点击礼物 */
@end

@interface JIGiftChooseView : UIView







/** 礼物发送成功后转换 */
/** 刷新所有collectionView */
/** 弹出礼物选择弹窗 */
/**
 填充数据
 @param dataArray banner数组
 */
/** 定时器 */
- (void) jif_alertChooseGift;
- (void) jif_configGGData:(NSArray *) dataArray;
- (JICLModuleMessageModel *) jif_getMessageModelWith:(JICLModuleGiftInfoModel *) gift andBlindId:(NSInteger) blindId;
- (void) jif_nextSecond;
- (void) jif_refreshAllCollectionView;
@property (nonatomic, weak) id<JIGiftChooseViewDelegate> jip_delegate;
@end

NS_ASSUME_NONNULL_END
