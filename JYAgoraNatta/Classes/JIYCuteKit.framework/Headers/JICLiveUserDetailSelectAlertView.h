

#import "JICLiveUserDetailBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLiveUserDetailSelectAlertView : JICLiveUserDetailBaseView



- (instancetype)initWithIsBlockOther:(BOOL)isBlockOther isAnchor:(BOOL)isAnchor;
+ (instancetype)jif_showUserDetailSelectAlertView:(UIView *)targetView
                                     isBlockOther:(BOOL)isBlockOther
                                         isAnchor:(BOOL)isAnchor;
@end

NS_ASSUME_NONNULL_END
