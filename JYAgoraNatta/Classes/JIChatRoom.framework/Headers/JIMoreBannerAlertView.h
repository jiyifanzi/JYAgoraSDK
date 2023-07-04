
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIMoreBannerAlertView : UIView
-(void)ji_show:(BOOL)ji_animate withShowView:(UIView*)ji_view;
-(void)ji_dissmis:(BOOL)ji_animate;
@property(nonatomic,copy)void(^viewDismissBlock)(void);
@property(nonatomic,copy)void(^selectedIndexBlock)(JIBannerInfoModel *model);
@end

NS_ASSUME_NONNULL_END
