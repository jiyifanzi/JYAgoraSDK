
#import <UIKit/UIKit.h>
#import "JICategoryIndicatorProtocol.h"
#import "JICategoryViewDefines.h"

@interface JICategoryIndicatorComponentView : UIView <JICategoryIndicatorProtocol>














/**
 指示器的宽度
 
 默认值为 JICategoryViewAutomaticDimension（表示与 cell 的宽度相等）。
 内部通过 `- (CGFloat)ji_indicatorWidthValue:(CGRect)cellFrame` 方法获取实际的值。
 */
/**
 指示器的高度
 
 默认值为 3。
 内部通过 `- (CGFloat)ji_indicatorHeightValue:(CGRect)cellFrame` 方法获取实际的值。
 */
/**
 传入 cellFrame 获取指示器的最终宽度

 @param ji_cellFrame cellFrame
 @return 指示器的最终宽度
 */
/**
 是否允许手势滚动
 
 点击切换的时候，是否允许滚动，默认值为 YES。
 */
/**
 传入 cellFrame 获取指示器的最终圆角

 @param ji_cellFrame cellFrame
 @return 指示器的最终圆角
 */
/**
 指示器在垂直方向上的偏移量
 
 数值越大越靠近中心。默认值为 0。
 */
/**
 指示器的位置
 
 可设置的枚举类型：
 - 底部：JICategoryComponentPosition_Bottom
 - 顶部：JICategoryComponentPosition_Top
 */
/**
 指示器的 CornerRadius 圆角半径
 
 默认值为 JICategoryViewAutomaticDimension （等于 indicatorHeight/2）。
 内部通过 `- (CGFloat)ji_indicatorCornerRadiusValue:(CGRect)cellFrame` 方法获取实际的值。
 */
/**
 传入 cellFrame 获取指示器的最终高度

 @param ji_cellFrame  cellFrame
 @return 指示器的最终高度
 */
/**
 指示器的宽度增量
 
 例如：需求是指示器宽度比 cell 宽度多 10pt。就可以将该属性赋值为 10。
 最终指示器的宽度 = indicatorWidth + indicatorWidthIncrement。
 */
/**
 指示器的颜色
 */
/**
 滚动动画的时间，默认值为 0.25s
 */
/**
 指示器滚动样式
 
 点击切换的时候，如果允许滚动，分为简单滚动和复杂滚动。
 默认值为 JICategoryIndicatorScrollStyleSimple
 目前仅JICategoryIndicatorLineView、JICategoryIndicatorDotLineView支持，其他子类暂不支持。
 */
- (CGFloat)ji_indicatorHeightValue:(CGRect)ji_cellFrame;
- (CGFloat)ji_indicatorCornerRadiusValue:(CGRect)ji_cellFrame;
- (CGFloat)ji_indicatorWidthValue:(CGRect)ji_cellFrame;
@property (nonatomic, assign) CGFloat verticalMargin;
@property (nonatomic, assign) CGFloat indicatorCornerRadius;
@property (nonatomic, assign) NSTimeInterval scrollAnimationDuration;
@property (nonatomic, assign) JICategoryIndicatorScrollStyle scrollStyle;
@property (nonatomic, assign) CGFloat indicatorHeight;
@property (nonatomic, strong) UIColor *indicatorColor;
@property (nonatomic, assign) CGFloat indicatorWidth;
@property (nonatomic, assign) JICategoryComponentPosition componentPosition;
@property (nonatomic, assign, getter=isScrollEnabled) BOOL scrollEnabled;
@property (nonatomic, assign) CGFloat indicatorWidthIncrement;
@end
