
#import <UIKit/UIKit.h>
#import "JICategoryViewDefines.h"
#import "JICategoryBaseView.h"
@class JICategoryListContainerView;

typedef NS_ENUM(NSUInteger, JICategoryListContainerType) {
    JICategoryListContainerType_ScrollView,
    JICategoryListContainerType_CollectionView,
};

@protocol JICategoryListContentViewDelegate <NSObject>
@optional

/**
 可选实现，列表显示的时候调用
 */
- (void)ji_llistDidDisappear;

/**
 可选实现，列表消失的时候调用
 */
- (void)ji_listDidAppear;
- (void)ji_listWillAppear;
/**
 可选实现，列表将要消失的时候调用
 */

/**
 可选实现，列表将要显示的时候调用
 */


- (void)ji_listWillDisappear;
@required

- (UIView *)ji_listView;

/**
 如果列表是VC，就返回VC.view
 如果列表是View，就返回View自己

 @return 返回列表视图
 */
@end

@protocol JICategoryListContainerViewDelegate <NSObject>
@optional
- (void)ji_listContainerViewDidEndDecelerating:(UIScrollView *)scrollView;
- (void)ji_listContainerViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate;
- (void)ji_listContainerViewWillBeginDragging:(UIScrollView *)scrollView;
- (BOOL)ji_listContainerView:(JICategoryListContainerView *)listContainerView canInitListAtIndex:(NSInteger)index;


- (Class)ji_scrollViewClassInlistContainerView:(JICategoryListContainerView *)listContainerView;
/**
 返回自定义UIScrollView或UICollectionView的Class
 某些特殊情况需要自己处理UIScrollView内部逻辑。比如项目用了FDFullscreenPopGesture，需要处理手势相关代理。

 @param listContainerView JICategoryListContainerView
 @return 自定义UIScrollView实例
 */
- (void)ji_listContainerViewDidScroll:(UIScrollView *)scrollView;
- (void)ji_listContainerViewWillBeginDecelerating:(UIScrollView *)scrollView;
/**
 控制能否初始化对应index的列表。有些业务需求，需要在某些情况才允许初始化某些列表，通过通过该代理实现控制。
 */
@required
- (NSInteger)ji_numberOfListsInlistContainerView:(JICategoryListContainerView *)listContainerView;
/**
 返回list的数量

 @param listContainerView 列表的容器视图
 @return list的数量
 */
- (id<JICategoryListContentViewDelegate>)ji_listContainerView:(JICategoryListContainerView *)listContainerView initListForIndex:(NSInteger)index;

/**
 根据index返回一个对应列表实例，需要是遵从`JICategoryListContentViewDelegate`协议的对象。
 你可以代理方法调用的时候初始化对应列表，达到懒加载的效果。这也是默认推荐的初始化列表方法。你也可以提前创建好列表，等该代理方法回调的时候再返回也可以，达到预加载的效果。
 如果列表是用自定义UIView封装的，就让自定义UIView遵从`JICategoryListContentViewDelegate`协议，该方法返回自定义UIView即可。
 如果列表是用自定义UIViewController封装的，就让自定义UIViewController遵从`JICategoryListContentViewDelegate`协议，该方法返回自定义UIViewController即可。

 @param listContainerView 列表的容器视图
 @param index 目标下标
 @return 遵从JICategoryListContentViewDelegate协议的list实例
 */

@end


@interface JICategoryListContainerView : UIView <JICategoryViewListContainer>



/**
 滚动切换的时候，滚动距离超过一页的多少百分比，就触发列表的初始化。默认0.01（即列表显示了一点就触发加载）。范围0~1，开区间不包括0和1
 */
- (instancetype)initWithType:(JICategoryListContainerType)type delegate:(id<JICategoryListContainerViewDelegate>)delegate NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;
- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
@property (nonatomic, assign, readonly) JICategoryListContainerType containerType;
@property (nonatomic, strong, readonly) UIScrollView *scrollView;
@property (nonatomic, strong, readonly) NSDictionary <NSNumber *, id<JICategoryListContentViewDelegate>> *validListDict;   
@property (nonatomic, assign) CGFloat initListPercent;
@property (nonatomic, assign) BOOL bounces; 
@property (nonatomic, strong) UIColor *listCellBackgroundColor; 
@end

