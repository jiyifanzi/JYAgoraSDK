
#import "JICategoryIndicatorView.h"
#import "JICategoryTitleCell.h"
#import "JICategoryTitleCellModel.h"
#import "JICategoryViewDefines.h"

@class JICategoryTitleView;

@protocol JICategoryTitleViewDataSource <NSObject>
@optional
// 如果实现了该方法就以该方法返回的宽度为准，不触发内部默认的文字宽度计算。
- (CGFloat)categoryTitleView:(JICategoryTitleView *)titleView widthForTitle:(NSString *)title;
// 如果将JICategoryTitleView嵌套进UITableView的cell，每次重用的时候，JICategoryTitleView进行reloadData时，会重新计算所有的title宽度。所以该应用场景，需要UITableView的cellModel缓存titles的文字宽度，再通过该代理方法返回给JICategoryTitleView。
@end


@interface JICategoryTitleView : JICategoryIndicatorView


















//----------------------titleLabelStrokeWidth-----------------------//
//----------------------titleLabelZoomEnabled-----------------------//
//----------------------titleLabel缩放中心位置-----------------------//
@property (nonatomic, assign, getter=isTitleLabelZoomEnabled) BOOL titleLabelZoomEnabled;     
@property (nonatomic, strong) UIColor *titleSelectedColor;      
@property (nonatomic, strong) UIFont *titleSelectedFont;    
@property (nonatomic, strong) UIFont *titleFont;    
@property (nonatomic, assign, getter=isTitleLabelMaskEnabled) BOOL titleLabelMaskEnabled;   
@property (nonatomic, assign, getter=isTitleLabelStrokeWidthEnabled) BOOL titleLabelStrokeWidthEnabled;     
@property (nonatomic, strong) NSArray <NSString *>*titles;
@property (nonatomic, strong) UIColor *titleColor;      
@property (nonatomic, assign) CGFloat titleLabelSelectedStrokeWidth;    
@property (nonatomic, assign) CGFloat titleLabelZoomScale;    
@property (nonatomic, weak) id<JICategoryTitleViewDataSource> titleDataSource;
@property (nonatomic, assign, getter=isTitleLabelZoomScrollGradientEnabled) BOOL titleLabelZoomScrollGradientEnabled;     
@property (nonatomic, assign) JICategoryTitleLabelAnchorPointStyle titleLabelAnchorPointStyle;  
@property (nonatomic, assign) NSInteger titleNumberOfLines; 
@property (nonatomic, assign, getter=isTitleColorGradientEnabled) BOOL titleColorGradientEnabled;   
@property (nonatomic, assign) CGFloat titleLabelZoomSelectedVerticalOffset; 
@property (nonatomic, assign) CGFloat titleLabelVerticalOffset; 
@end
