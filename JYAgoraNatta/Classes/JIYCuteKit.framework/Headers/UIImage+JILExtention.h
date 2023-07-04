

#import <UIKit/UIKit.h>

typedef struct __UICornerInset
{
    CGFloat topLeft;
    CGFloat topRight;
    CGFloat bottomLeft;
    CGFloat bottomRight;
} UICornerInset;

UIKIT_EXTERN const UICornerInset UICornerInsetZero;

UIKIT_STATIC_INLINE UICornerInset UICornerInsetMake(CGFloat topLeft, CGFloat topRight, CGFloat bottomLeft, CGFloat bottomRight)
{
    UICornerInset cornerInset = {topLeft, topRight, bottomLeft, bottomRight};
    return cornerInset;
}

UIKIT_STATIC_INLINE UICornerInset UICornerInsetMakeWithRadius(CGFloat radius)
{
    UICornerInset cornerInset = {radius, radius, radius, radius};
    return cornerInset;
}

UIKIT_STATIC_INLINE BOOL UICornerInsetEqualToCornerInset(UICornerInset cornerInset1, UICornerInset cornerInset2)
{
    return
    cornerInset1.topLeft == cornerInset2.topLeft &&
    cornerInset1.topRight == cornerInset2.topRight &&
    cornerInset1.bottomLeft == cornerInset2.bottomLeft &&
    cornerInset1.bottomRight == cornerInset2.bottomRight;
}

FOUNDATION_EXTERN NSString* NSStringFromUICornerInset(UICornerInset cornerInset);

typedef enum __UIImageTintedStyle
{
    UIImageTintedStyleKeepingAlpha      = 1,
    UIImageTintedStyleOverAlpha         = 2
} UIImageTintedStyle;

typedef enum __UIImageGradientDirection
{
    UIImageGradientDirectionVertical    = 1,
    UIImageGradientDirectionHorizontal  = 2,
} UIImageGradientDirection;

@interface UIImage (JILExtention)

+ (UIImage*)imageWithColor:(UIColor*)color size:(CGSize)size;
+ (UIImage*)imageWithColor:(UIColor*)color size:(CGSize)size cornerRadius:(CGFloat)cornerRadius;
+ (UIImage*)imageWithColor:(UIColor*)color size:(CGSize)size cornerInset:(UICornerInset)cornerInset;

+ (UIImage*)resizableImageWithColor:(UIColor*)color;
+ (UIImage*)resizableImageWithColor:(UIColor*)color cornerRadius:(CGFloat)cornerRadius;
+ (UIImage*)resizableImageWithColor:(UIColor*)color cornerInset:(UICornerInset)cornerInset;

+ (UIImage*)imageNamed:(NSString *)name tintColor:(UIColor*)color style:(UIImageTintedStyle)tintStyle;
- (UIImage*)tintedImageWithColor:(UIColor*)color style:(UIImageTintedStyle)tintStyle;

- (UIImage*)imageWithRoundedBounds;
- (UIImage*)imageWithCornerRadius:(CGFloat)cornerRadius;
- (UIImage*)imageWithCornerInset:(UICornerInset)cornerInset;
- (BOOL)isValidCornerInset:(UICornerInset)cornerInset;

- (UIImage*)imageAddingImage:(UIImage*)image;
- (UIImage*)imageAddingImage:(UIImage*)image offset:(CGPoint)offset;

+ (UIImage*)imageWithGradient:(NSArray*)colors size:(CGSize)size direction:(UIImageGradientDirection)direction;
+ (UIImage*)resizableImageWithGradient:(NSArray*)colors size:(CGSize)size direction:(UIImageGradientDirection)direction;


- (UIImage *)imageWithTintColor:(UIColor *)tintColor;
- (UIImage *)imageWithTintColor:(UIColor *)tintColor blendMode:(CGBlendMode)blendMode;
- (UIImage *)imageWithGradientTintColor:(UIColor *)tintColor;

- (void)jif_drawInRect:(CGRect)rect withContentMode:(UIViewContentMode)contentMode clipsToBounds:(BOOL)clips;

- (UIImage *)jif_getMirroredImage;

- (UIImage *)jif_getCornerImageWithRadius:(CGFloat)cornerRadius imageSize:(CGSize)size;

- (UIImage *)jif_cutResizedImage:(CGSize)newSize;

- (UIImage *)jif_fixOrientation;

@end

#pragma mark - Categories

@interface NSValue (UICornerInset)

+ (NSValue*)valueWithUICornerInset:(UICornerInset)cornerInset;
- (UICornerInset)UICornerInsetValue;

@end
