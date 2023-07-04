

#import "JICLiveModuleBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLiveReportAlertView : JICLiveModuleBaseView



+ (instancetype)jif_showReportUserAlertView:(id<JICLiveModuleBaseViewDelegate>)delegate
                                 targetView:(UIView *)targetView
                                 relationID:(NSInteger)relationID
                             isUGCRoomOwner:(BOOL)isUGCRoomOwner
                               dismissBlock:(JILVoidBlock)dismissBlock;
- (void)jif_showInView:(UIView *)superView;
@end

NS_ASSUME_NONNULL_END
