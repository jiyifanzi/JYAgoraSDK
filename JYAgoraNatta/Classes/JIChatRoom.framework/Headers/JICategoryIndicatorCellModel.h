
#import <UIKit/UIKit.h>
#import "JICategoryBaseCellModel.h"

@interface JICategoryIndicatorCellModel : JICategoryBaseCellModel




@property (nonatomic, strong) UIColor *separatorLineColor;
@property (nonatomic, strong) UIColor *cellBackgroundUnselectedColor;
@property (nonatomic, assign, getter=isCellBackgroundColorGradientEnabled) BOOL cellBackgroundColorGradientEnabled;
@property (nonatomic, assign, getter=isSepratorLineShowEnabled) BOOL sepratorLineShowEnabled;
@property (nonatomic, assign) CGSize separatorLineSize;
@property (nonatomic, strong) UIColor *cellBackgroundSelectedColor;
@property (nonatomic, assign) CGRect backgroundViewMaskFrame; 
@end
