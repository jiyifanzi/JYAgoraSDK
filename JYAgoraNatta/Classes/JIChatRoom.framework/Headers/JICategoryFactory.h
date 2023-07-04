
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface JICategoryFactory : NSObject



+ (CGFloat)ji_interpolationFrom:(CGFloat)ji_from to:(CGFloat)ji_to percent:(CGFloat)ji_percent;
+ (UIColor *)ji_interpolationColorFrom:(UIColor *)ji_fromColor to:(UIColor *)ji_toColor percent:(CGFloat)ji_percent;
@end
