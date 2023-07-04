
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleJoinFanAlertView : UIView


+ (instancetype)jif_showJoinFanAlertView:(UIView *)targetView
                                fanModel:(JICLModuleFanInfoModel *)fanModel
                                anchorID:(NSInteger)anchorID;
@end

NS_ASSUME_NONNULL_END
