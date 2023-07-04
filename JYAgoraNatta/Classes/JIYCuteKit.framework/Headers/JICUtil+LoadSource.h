
#import "JICUtil.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICUtil (LoadSource)

#pragma mark - 加载图片
+ (void)jif_loadIconImage:(UIImageView *)imageView iconStr:(NSString *)iconStr;

+ (void)jif_loadMirrorImage:(UIImageView *)imageView iconStr:(NSString *)iconStr;

+ (void)jif_loadMainLanguageImage:(UIImageView *)imageView iconStr:(NSString *)iconStr;

+ (UIImage *)jif_getIconWithName:(NSString *) iconStr;

+ (UIImage *)jif_getIconWithNameInMainLanguage:(NSString *)iconStr;

+ (UIImage *)jif_getPngIconWithName:(NSString *) iconStr;

+ (UIImage *)jif_scaleToSize:(UIImage *)img size:(CGSize)size;

+ (UIImage *)jif_circleImageWith:(UIImage *) startImg;

#pragma mark - 加载网图
+ (void)jif_loadSmallImage:(UIImageView *)imageView url:(NSString *)url placeholder:(nullable UIImage *)placeholder;

+ (void)jif_loadMediumImage:(UIImageView *)imageView url:(NSString *)url placeholder:(nullable UIImage *)placeholder;

+ (void)jif_loadOriginImage:(UIImageView *)imageView url:(NSString *)url placeholder:(nullable UIImage *)placeholder;


@end

NS_ASSUME_NONNULL_END
