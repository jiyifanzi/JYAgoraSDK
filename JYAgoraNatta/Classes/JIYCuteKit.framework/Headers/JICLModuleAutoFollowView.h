
#import "JICLiveModuleBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleAutoFollowView : JICLiveModuleBaseView




/// 消失
/// 详情模型
+ (instancetype)jif_showAutoFollowAlertView:(id<JICLiveModuleBaseViewDelegate>)delegate
                                 targetView:(UIView *)targetView
                                detailModel:(JICLModuleAccountDetailInfoModel *)detailModel
                               dismissBlock:(JILVoidBlock)dismissBlock;
- (void)jif_dismiss;
@property (nonatomic, strong, readonly) JICLModuleAccountDetailInfoModel *jip_detailModel;
@end

NS_ASSUME_NONNULL_END
