
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIBannerPageView : UIView


/// 当前点所在下标
/// 分页数量
@property (nonatomic, assign) NSInteger currentPage;
@property (nonatomic, assign) NSInteger numberOfPages;
@end

NS_ASSUME_NONNULL_END
