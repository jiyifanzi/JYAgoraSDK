
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIGuideView : UIView





- (void)ji_hideGuide;
- (void)ji_showGuide;
@property (nonatomic, copy) void (^hideBlock)(void);
@end

NS_ASSUME_NONNULL_END
