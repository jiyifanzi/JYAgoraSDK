

#import "JICLiveModuleBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLivePKRankListAlertView : JICLiveModuleBaseView


+ (instancetype)jif_showPKRankListAlertView:(id<JICLiveModuleBaseViewDelegate>)delegate
                                 targetView:(UIView *)targetView
                              isOtherAnchor:(BOOL)isOtherAnchor
                                   anchorID:(NSInteger)anchorID
                                     roomID:(NSInteger)roomID
                               dismissBlock:(JILVoidBlock)dismissBlock;
@end

NS_ASSUME_NONNULL_END
