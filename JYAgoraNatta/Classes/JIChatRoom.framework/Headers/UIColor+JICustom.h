
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (JICustom)

+ (UIColor *)ji_hex:(NSString *)ji_hexCode;
+ (UIColor *)ji_hex:(NSString *)ji_hexCode alpha:(CGFloat)ji_alpha;


+ (UIColor*)ji_gradientFromColor:(UIColor*)ji_c1 toColor:(UIColor*)ji_c2 horizontalDirection:(BOOL)ji_horizontalDirection withRange:(CGFloat)ji_range;

@end

NS_ASSUME_NONNULL_END
