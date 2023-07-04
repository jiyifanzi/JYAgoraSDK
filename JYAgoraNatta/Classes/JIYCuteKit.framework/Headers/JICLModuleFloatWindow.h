
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define JICLModuleFloatWindowShared ([JICLModuleFloatWindow sharedInstance])

@interface JICLModuleFloatWindow : UIWindow







/// 重置浮窗
/// 隐藏浮窗
/// 显示浮窗
/// 返回VC
/// 浮窗是否显示
- (void)jif_showFloatingWindow:(UIView *)contentView startFrame:(CGRect)startFrame;
- (void)jif_resetFloatingView;
- (void)jif_hideFloatingView;
+ (instancetype)sharedInstance;
@property (nonatomic, strong, nullable) UIViewController *jip_backVC;
@property (nonatomic, assign, readonly) BOOL jip_isShowing;
@end

NS_ASSUME_NONNULL_END
