


#import "JICLiveModuleBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLiveUserDetailInfoAlertView : JICLiveModuleBaseView


+ (instancetype)jif_showUserDetailAlertView:(id<JICLiveModuleBaseViewDelegate>)delegate
                                 targetView:(UIView *)targetView
                                detailModel:(JICLModuleAccountDetailInfoModel *)detailModel
                                   isAnchor:(BOOL)isAnchor
                               dismissBlock:(JILVoidBlock)dismissBlock;
@end

NS_ASSUME_NONNULL_END
