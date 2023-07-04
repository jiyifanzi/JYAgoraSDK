
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICUtil : NSObject










/// 截取字符串，为了避免字符里含有表情，把表情截一半
/// 半弹窗裁圆角
/// 被push出来的最后一个控制器
/// 是否是10以上
/// @param string 要截的字符串
/// 在主线程
/// 个人描述
/// 数字显示（1000以内数字，1000以上x.xk）
/// @param maxLength 最大长度
+ (NSString *)jif_moodTip:(NSString *)mood;
+ (UINavigationController *)jif_currentNavVC;
+ (NSString *)jif_getKiloNum:(NSInteger)num;
+ (void)jif_doInMain:(void(^)(void))block;
+ (CGRect)jif_arlTargetRect:(CGRect)targetRect bySuperRect:(CGRect)superRect;
+ (UIViewController *)jif_getLastedPushedViewController;
+ (BOOL)jif_isIPhoneX;
+ (NSString *)jif_subToString:(NSString *)string maxLength:(NSInteger)maxLength;
+ (void)jif_clickRadius:(CGFloat)radius alertView:(UIView *)alertView;
@end

NS_ASSUME_NONNULL_END
