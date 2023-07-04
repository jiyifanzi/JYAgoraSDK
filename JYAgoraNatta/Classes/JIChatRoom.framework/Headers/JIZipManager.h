
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIZipManager : NSObject











+ (NSString *)ji_getGifImagePathWithName:(NSString *)ji_imageName;
+ (instancetype)manager;
+ (UIImage *)ji_getIconImageWithName:(NSString *)ji_imageName;
+ (void)ji_uncompressSvgZip;
+ (NSString *)ji_getSvgPathWithName:(NSString *)ji_svgName;
+ (void)ji_uncompressStringZip;
+ (void)ji_uncompressIconZip;
+ (void)ji_uncompressFontZip;
@end

NS_ASSUME_NONNULL_END
