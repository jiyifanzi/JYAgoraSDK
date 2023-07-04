
#import "JICategoryIndicatorComponentView.h"

typedef NS_ENUM(NSUInteger, JICategoryIndicatorLineStyle) {
    JICategoryIndicatorLineStyle_Normal         = 0,
    JICategoryIndicatorLineStyle_Lengthen       = 1,
    JICategoryIndicatorLineStyle_LengthenOffset = 2,
};

@interface JICategoryIndicatorLineView : JICategoryIndicatorComponentView



/**
 line 滚动时沿 x 轴方向上的偏移量，默认值为 10。
 
 lineStyle 为 JICategoryIndicatorLineStyle_LengthenOffset 有用。
 */
@property (nonatomic, assign) CGFloat lineScrollOffsetX;
@property (nonatomic, assign) JICategoryIndicatorLineStyle lineStyle;
@end
