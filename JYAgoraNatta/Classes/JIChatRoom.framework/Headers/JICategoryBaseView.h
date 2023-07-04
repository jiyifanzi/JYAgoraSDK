
#import <UIKit/UIKit.h>
#import "JICategoryBaseCell.h"
#import "JICategoryBaseCellModel.h"
#import "JICategoryCollectionView.h"
#import "JICategoryViewDefines.h"

@class JICategoryBaseView;

@protocol JICategoryViewListContainer <NSObject>
@required
- (UIScrollView *)contentScrollView;
- (void)ji_didClickSelectedItemAtIndex:(NSInteger)index;
- (void)setDefaultSelectedIndex:(NSInteger)index;
- (void)reloadData;
@end

@protocol JICategoryViewDelegate <NSObject>
@optional
- (void)ji_categoryView:(JICategoryBaseView *)categoryView didSelectedItemAtIndex:(NSInteger)index;
/**
 点击选中的情况才会调用该方法

 @param categoryView categoryView对象
 @param index 选中的index
 */
- (BOOL)ji_categoryView:(JICategoryBaseView *)categoryView canClickItemAtIndex:(NSInteger)index;
/**
 控制能否点击Item

 @param categoryView categoryView对象
 @param index 准备点击的index
 @return 能否点击
 */
/**
 正在滚动中的回调

 @param categoryView categoryView对象
 @param leftIndex 正在滚动中，相对位置处于左边的index
 @param rightIndex 正在滚动中，相对位置处于右边的index
 @param ratio 从左往右计算的百分比
 */


- (void)ji_categoryView:(JICategoryBaseView *)categoryView didScrollSelectedItemAtIndex:(NSInteger)index;


/**
 滚动选中的情况才会调用该方法

 @param categoryView categoryView对象
 @param index 选中的index
 */
- (void)ji_categoryView:(JICategoryBaseView *)categoryView didClickSelectedItemAtIndex:(NSInteger)index;
/**
 点击选中或者滚动选中都会调用该方法。适用于只关心选中事件，不关心具体是点击还是滚动选中的。

 @param categoryView categoryView对象
 @param index 选中的index
 */

- (void)ji_categoryView:(JICategoryBaseView *)categoryView scrollingFromLeftIndex:(NSInteger)leftIndex toRightIndex:(NSInteger)rightIndex ratio:(CGFloat)ratio;

//为什么会把选中代理分为三个，因为有时候只关心点击选中的，有时候只关心滚动选中的，有时候只关心选中。所以具体情况，使用对应方法。
@required

@end

@interface JICategoryBaseView : UIView
























/**
 推荐使用封装度更高的listContainer属性。如果使用contentScrollView请参考`LoadDataListCustomViewController`使用示例。
 */
/**
 选中目标index的item

 @param index 目标index
 */
/**
 重新配置categoryView但是不需要reload listContainer。特殊情况是该方法。
 */
/**
 初始化的时候无需调用。比如页面初始化之后，根据网络接口异步回调回来数据，重新配置categoryView，需要调用该方法进行刷新。
 */
/**
 高封装度的列表容器，使用该类可以让列表拥有完成的生命周期、自动同步defaultSelectedIndex、自动调用reloadData。
 */
//cell宽度是否缩放
/**
 刷新指定的index的cell
 内部会触发`- (void)ji_refreshCellModel:(JICategoryBaseCellModel *)cellModel index:(NSInteger)index`方法进行cellModel刷新

 @param index 指定cell的index
 */
- (void)ji_reloadCellAtIndex:(NSInteger)index;
- (void)reloadData;
- (void)ji_reloadDataWithoutListContainer;
- (void)ji_selectItemAtIndex:(NSInteger)index;
@property (nonatomic, assign) CGFloat cellSpacing;    
@property (nonatomic, weak) id<JICategoryViewDelegate> delegate;
@property (nonatomic, assign, getter=isSelectedAnimationEnabled) BOOL selectedAnimationEnabled;    
@property (nonatomic, assign, getter=isContentScrollViewClickTransitionAnimationEnabled) BOOL contentScrollViewClickTransitionAnimationEnabled;    
@property (nonatomic, strong) UIScrollView *contentScrollView;
@property (nonatomic, assign) NSTimeInterval selectedAnimationDuration;     
@property (nonatomic, assign) CGFloat contentEdgeInsetRight;    
@property (nonatomic, strong, readonly) JICategoryCollectionView *collectionView;
@property (nonatomic, assign, readonly) NSInteger selectedIndex;
@property (nonatomic, assign) CGFloat cellWidthZoomScale;    
@property (nonatomic, strong) NSArray <JICategoryBaseCellModel *> *dataSource;
@property (nonatomic, assign, getter=isCellWidthZoomScrollGradientEnabled) BOOL cellWidthZoomScrollGradientEnabled;     
@property (nonatomic, assign) CGFloat cellWidth;    
@property (nonatomic, assign) CGFloat contentEdgeInsetLeft;     
@property (nonatomic, assign, getter=isCellWidthZoomEnabled) BOOL cellWidthZoomEnabled;     
@property (nonatomic, assign, getter=isAverageCellSpacingEnabled) BOOL averageCellSpacingEnabled;     
@property (nonatomic, assign) NSInteger defaultSelectedIndex;   
@property (nonatomic, weak) id<JICategoryViewListContainer> listContainer;
@property (nonatomic, assign) CGFloat cellWidthIncrement;    
@end



@interface JICategoryBaseView (UISubclassingBaseHooks)

- (CGRect)ji_getTargetCellFrame:(NSInteger)targetIndex;

- (CGRect)ji_getTargetSelectedCellFrame:(NSInteger)targetIndex selectedType:(JICategoryCellSelectedType)selectedType;
- (void)ji_initializeData NS_REQUIRES_SUPER;
- (void)ji_initializeViews NS_REQUIRES_SUPER;

- (void)ji_refreshDataSource;

- (void)ji_refreshState NS_REQUIRES_SUPER;

- (void)ji_refreshSelectedCellModel:(JICategoryBaseCellModel *)selectedCellModel unselectedCellModel:(JICategoryBaseCellModel *)unselectedCellModel NS_REQUIRES_SUPER;

- (void)ji_contentOffsetOfContentScrollViewDidChanged:(CGPoint)contentOffset NS_REQUIRES_SUPER;

- (BOOL)ji_selectCellAtIndex:(NSInteger)index selectedType:(JICategoryCellSelectedType)selectedType NS_REQUIRES_SUPER;

- (CGFloat)ji_preferredCellWidthAtIndex:(NSInteger)index;

- (Class)ji_preferredCellClass;

- (void)ji_refreshCellModel:(JICategoryBaseCellModel *)cellModel index:(NSInteger)index NS_REQUIRES_SUPER;

@end
