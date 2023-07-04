

#import "JICLiveModuleBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLiveRoomToolsAlertView : JICLiveModuleBaseView




+ (instancetype)jif_showRoomToolsAlertView:(id<JICLiveModuleBaseViewDelegate>)delegate
                                targetView:(UIView *)targetView
                              dismissBlock:(JILVoidBlock)dismissBlock;
- (instancetype)initWithDismissBlock:(JILVoidBlock)dismissBlock;
- (void)jif_showInView:(UIView *)superView;
@end

NS_ASSUME_NONNULL_END
