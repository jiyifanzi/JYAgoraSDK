

#import "JICLiveModuleBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLiveTopRoomDetailInfoAlertView : JICLiveModuleBaseView



/// 更新数据
+ (instancetype)jif_showRoomDetailAlertView:(id<JICLiveModuleBaseViewDelegate>)delegate
                                 targetView:(UIView *)targetView
                                       goal:(JICLModuleRoomGoalModel *)goalModel
                                 leftMargin:(CGFloat)leftMargin
                               dismissBlock:(JILVoidBlock)dismissBlock;
- (void)jif_updateRoomGoal:(JICLModuleRoomGoalModel *)goal isInit:(BOOL)isInit;
@end

NS_ASSUME_NONNULL_END
