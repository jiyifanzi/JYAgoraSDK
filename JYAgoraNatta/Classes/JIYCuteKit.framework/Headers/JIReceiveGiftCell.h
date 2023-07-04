
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class JIReceiveGiftModel;

@interface JIReceiveGiftCell : UIView





/**
 移动显示礼物
 */
//- (void) jif_showComboEffect;
/**
 移出当前显示礼物
 */
/**
 填充数据
 @param msgModel 礼物数据
 */
/**
 显示连击特效
 */
- (void)jif_configGiftData:(JIReceiveGiftModel *)msgModel;
- (void) jif_moveToDisplayGift;
- (void) jif_moveToHideGift;
@end

NS_ASSUME_NONNULL_END
