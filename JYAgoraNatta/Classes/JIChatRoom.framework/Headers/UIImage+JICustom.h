
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (JICustom)

+ (UIImage*)ji_downloadImageWithName:(NSString *)ji_iconName;
- (UIImage *)ji_mirrored;

- (UIImage *)ji_scaleImageWithSize:(CGSize)size;

- (UIImage *)ji_cutResizedImage:(CGSize)newSize;

- (UIImage *)ji_roundedCornerImageWithRadius:(CGFloat)ji_cornerRadius imageSize:(CGSize)ji_size;

- (UIImage *)ji_fixOrientation;

@end

NS_ASSUME_NONNULL_END
