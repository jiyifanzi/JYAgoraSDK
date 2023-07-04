
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (JICustom)

@property (nonatomic, assign) CGFloat ji_cornerRadius;

@property (nonatomic, assign) CGFloat ji_borderWidth;

@property (nonatomic, strong) UIColor * ji_borderColor;

@property (nonatomic, assign) CGFloat ji_x;

@property (nonatomic, assign) CGFloat ji_y;

@property (nonatomic, assign) CGFloat ji_width;

@property (nonatomic, assign) CGFloat ji_height;

-(void)ji_addPathCorner:(UIRectCorner)ji_corner
             cornerRadis:(CGFloat)ji_cornerRadis;
- (void)ji_addClicedkEventWithTarget:(nullable id)target action:(SEL)action;
- (UIImage *)znb_getImageFromView;

- (void)ji_layoutR2L;

- (void)ji_arlRect;

- (void)ji_transformRotation;


@end

NS_ASSUME_NONNULL_END
