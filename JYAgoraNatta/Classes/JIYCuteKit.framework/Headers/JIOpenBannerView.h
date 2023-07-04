
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIOpenBannerView : UIView




- (void)jif_configListData:(NSArray *)array;
- (void)jif_showOpenView;
@property (nonatomic, copy) void(^jip_bannerDetail)(NSInteger index);
@end

NS_ASSUME_NONNULL_END
