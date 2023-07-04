
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIComboAnimationManager : NSObject




- (void)ji_startAnimationWithImage:(nullable UIImage *)ji_image size:(CGSize)ji_size container:(UIView *)ji_container count:(NSInteger)ji_count senderIsSelf:(BOOL)ji_isSelf;
+ (instancetype)shared;
- (void)ji_stopAnimation:(BOOL)ji_immediately;
@end

NS_ASSUME_NONNULL_END
