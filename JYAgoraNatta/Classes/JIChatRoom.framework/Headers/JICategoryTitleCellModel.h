
#import "JICategoryIndicatorCellModel.h"
#import <UIKit/UIKit.h>
#import "JICategoryViewDefines.h"

@interface JICategoryTitleCellModel : JICategoryIndicatorCellModel










@property (nonatomic, strong) UIFont *titleSelectedFont;
@property (nonatomic, strong) UIColor *titleNormalColor;
@property (nonatomic, assign) CGFloat titleLabelNormalZoomScale;
@property (nonatomic, strong) UIColor *titleSelectedColor;
@property (nonatomic, assign) CGFloat titleLabelCurrentStrokeWidth;
@property (nonatomic, assign) CGFloat titleLabelSelectedZoomScale;
@property (nonatomic, assign) NSInteger titleNumberOfLines;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, assign, getter=isTitleLabelMaskEnabled) BOOL titleLabelMaskEnabled;
@property (nonatomic, assign) CGFloat titleLabelVerticalOffset;
@property (nonatomic, assign, readonly) CGFloat titleHeight;
@property (nonatomic, strong) UIFont *titleFont;
@property (nonatomic, assign) CGFloat titleLabelZoomSelectedVerticalOffset;
@property (nonatomic, assign, getter=isTitleLabelStrokeWidthEnabled) BOOL titleLabelStrokeWidthEnabled;
@property (nonatomic, assign) CGFloat titleLabelNormalStrokeWidth;
@property (nonatomic, assign) CGFloat titleLabelSelectedStrokeWidth;
@property (nonatomic, strong) UIColor *titleCurrentColor;
@property (nonatomic, assign, getter=isTitleLabelZoomEnabled) BOOL titleLabelZoomEnabled;
@property (nonatomic, assign) CGFloat titleLabelCurrentZoomScale;
@property (nonatomic, assign) JICategoryTitleLabelAnchorPointStyle titleLabelAnchorPointStyle;
@end
