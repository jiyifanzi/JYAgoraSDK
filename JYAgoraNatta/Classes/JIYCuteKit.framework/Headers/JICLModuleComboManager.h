
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleComboManager : NSObject




- (void)jif_stopAnimation:(BOOL)immediately;
- (void)jif_startAnimationWithImage:(nullable UIImage *)jip_image size:(CGSize)jip_size container:(UIView *)jip_container count:(NSInteger)jip_count senderIsSelf:(BOOL)jip_isSelf;
+ (instancetype)shared;
@end

NS_ASSUME_NONNULL_END
