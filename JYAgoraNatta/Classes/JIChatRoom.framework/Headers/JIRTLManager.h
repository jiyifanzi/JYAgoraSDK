
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIRTLManager : NSObject


+ (void)ji_horizontalFlipView:(UIView *)ji_view;
+ (void)ji_horizontalFlipViewIfNeeded:(UIView *)ji_view;
+ (BOOL)ji_supportRTL;
@end

NS_ASSUME_NONNULL_END
