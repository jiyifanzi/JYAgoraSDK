
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class JIBanner;

@protocol JIBannerDelegate <NSObject>
@required
- (void) jif_clickedCloseBanner;
- (void) jif_didSelectOneItemByIndex:(NSInteger) index andBanner:(JIBanner *) banner;


/** 点击关闭banner按钮 */
/** 点击item */
/** 点击more按钮 */
- (void) jif_clickedLookMore;


@end

@interface JIBanner : UIView








/**
 关闭banner
 */
/** 加载状态图 */
/** 是否轮播 - 默认打开 */
/**
 轮播下一页
 */
/**
 填充数据
 @param dataArray banner数组
 */
/** 滚动间隔时间 - 默认5s */
- (void) jif_configBannerData:(NSArray *) dataArray;
- (void) jif_dismiss;
- (void) jif_carouselNextPage;
@property (nonatomic, weak) id<JIBannerDelegate> jip_delegate;
@property (nonatomic, strong) UIImage * jip_placeImage;
@property (nonatomic, assign) NSInteger jip_carouselTime;
@property (nonatomic, assign) BOOL jip_isCarousel;
@end

NS_ASSUME_NONNULL_END
