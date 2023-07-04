

#import "JICLiveModuleBaseView.h"
#import "JICLModuleEventLabelModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface JICLiveMedalListAlertView : JICLiveModuleBaseView




/// 是否仅展示(从个人详情弹窗点击为仅展示。从输入框点击就可以编辑)
- (void)jif_showInView:(UIView *)superView;
- (instancetype)initWithAccountID:(NSInteger)accountID;
@property (nonatomic, assign) BOOL jip_isJustShow;
@end

NS_ASSUME_NONNULL_END
