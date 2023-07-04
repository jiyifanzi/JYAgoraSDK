

#import "JICLiveModuleBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLiveAudienceAlertView : JICLiveModuleBaseView




/// 用户列表数据
- (instancetype)initWithDismissBlock:(JILVoidBlock)dismissBlock;
- (void)jif_showInView:(UIView *)superView;
@property (nonatomic, strong) NSMutableArray *jip_dataList;
@end

NS_ASSUME_NONNULL_END
