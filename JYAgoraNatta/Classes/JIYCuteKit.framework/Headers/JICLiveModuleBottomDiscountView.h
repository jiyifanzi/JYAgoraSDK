
#import "JICLiveModuleBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@protocol JICLiveModuleBottomDiscountViewDelegate <NSObject>
@required

- (void)jif_bottomDiscountViewIsHidden:(BOOL)isHidden;

@end

@interface JICLiveModuleBottomDiscountView : JICLiveModuleBaseView


@property (nonatomic, weak) id <JICLiveModuleBottomDiscountViewDelegate> discountDelegate;
@end

NS_ASSUME_NONNULL_END
