
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (JILExtention)

- (void)jif_removeAllSubviews;

@property (assign, nonatomic) CGFloat jip_x;
@property (assign, nonatomic) CGFloat jip_y;
@property (assign, nonatomic) CGFloat jip_w;
@property (assign, nonatomic) CGFloat jip_h;
@property (assign, nonatomic) CGSize jip_size;
@property (assign, nonatomic) CGPoint jip_origin;

#pragma mark 三种颜色渐变背景
- (void)jif_addThreeGradientColor:(NSArray *)colorArr andColorFrame:(CGRect)frame andCorner:(CGFloat)corner;

#pragma mark - 添加渐变蒙层
- (void)jif_addDefaultGradientMaskView;


- (UIImage *)jif_getImageFromView;

@end

NS_ASSUME_NONNULL_END
