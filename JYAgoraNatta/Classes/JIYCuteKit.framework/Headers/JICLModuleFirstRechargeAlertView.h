
#import "JICLiveModuleBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleFirstRechargeAlertView : JICLiveModuleBaseView


+ (instancetype)jif_showDiscountAlertView:(UIView *)targetView
                                  bgColor:(nullable UIColor *)bgColor
                             productModel:(JICLModuleProductModel *)productModel
                             dismissBlock:(JILVoidBlock)dismissBlock;
@end

NS_ASSUME_NONNULL_END
