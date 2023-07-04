
#import "JICategoryBaseView.h"
#import "JICategoryIndicatorCell.h"
#import "JICategoryIndicatorCellModel.h"
#import "JICategoryIndicatorProtocol.h"

@interface JICategoryIndicatorView : JICategoryBaseView




//分割线颜色。默认为[UIColor lightGrayColor]
//----------------------separatorLine-----------------------//
//----------------------ellBackgroundColor-----------------------//
//是否显示分割线。默认为NO
//分割线的size。默认为CGSizeMake(1/[UIScreen mainScreen].scale, 20)
//cell普通状态的背景色。默认：[UIColor clearColor]
//cell选中状态的背景色。默认：[UIColor grayColor]
//cell的背景色是否渐变。默认：NO
@property (nonatomic, strong) UIColor *separatorLineColor;
@property (nonatomic, strong) NSArray <UIView<JICategoryIndicatorProtocol> *> *indicators;
@property (nonatomic, assign) CGSize separatorLineSize;
@property (nonatomic, assign, getter=isSeparatorLineShowEnabled) BOOL separatorLineShowEnabled;
@property (nonatomic, assign, getter=isCellBackgroundColorGradientEnabled) BOOL cellBackgroundColorGradientEnabled;
@property (nonatomic, strong) UIColor *cellBackgroundUnselectedColor;
@property (nonatomic, strong) UIColor *cellBackgroundSelectedColor;
@end

@interface JICategoryIndicatorView (UISubclassingIndicatorHooks)

- (void)ji_refreshLeftCellModel:(JICategoryBaseCellModel *)ji_leftCellModel rightCellModel:(JICategoryBaseCellModel *)ji_rightCellModel ratio:(CGFloat)ji_ratio NS_REQUIRES_SUPER;

@end
