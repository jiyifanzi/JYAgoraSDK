
#import "JICLiveModuleBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleRandomTabelContainerView : JICLiveModuleBaseView








/// 展示结果
/// 用户主动隐藏转盘
- (void)jif_hiddenView;
- (void)jif_showView;
@property (nonatomic, copy) JILTextBlock jip_showResultBlock;
@property (nonatomic, assign) BOOL jip_isShowing;
@property (nonatomic, copy) JILVoidBlock jip_hiddenBlock;
@end

NS_ASSUME_NONNULL_END
