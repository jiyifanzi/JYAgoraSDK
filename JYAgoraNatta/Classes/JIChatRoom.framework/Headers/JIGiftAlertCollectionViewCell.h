
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIGiftAlertCollectionViewCell : UICollectionViewCell






- (void)ji_loadModel:(JIGiftConfigModel *)ji_model isSvip:(BOOL)ji_svip;
@property (nonatomic, copy) void (^longPressBlock)(void);
@end

NS_ASSUME_NONNULL_END
