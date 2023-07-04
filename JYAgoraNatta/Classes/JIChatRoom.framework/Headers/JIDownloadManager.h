
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN



typedef void(^ _Nullable JIDownloadSuccess)(NSString * path);
typedef void(^ _Nullable JIDownloadFailed)(NSError * error);
@interface JIDownloadManager : NSObject




#pragma mark - 图片相关
#pragma mark - SVG相关



#pragma mark - 字体相关

#pragma mark - 通用


///下载所有svg
///通过json地址下载所有icon
///通过name判断图片存不存在
///保存image到文件夹 通过name获取url,l生成文件路径，
///通过url获取svg路径
/// 下载单个文件
///通过名字获取图片，没有返回nil
///通过名字获取图片，本地没有则网络请求
///通过url判断svg是否已经存在
///通过name获取svg路径
/// 通过名称获取图片url
///下载所有svg
///下载所有svg
/// - Parameter url: json地址
+(void)ji_gcdDownloadImagesWithJsonUrl:(NSString *)ji_url;
+(UIImage *)ji_getImageWithName:(NSString *)ji_name;
+(BOOL)ji_svgExistsAtUrl:(NSString *)ji_url;
+ (instancetype)sharedInstance;
+(NSString *)ji_svgPathAtUrl:(NSString *)ji_url;
+(NSString *)ji_svgPathAtName:(NSString *)ji_name;
+(void)ji_downloadWithUrl:(NSString *)ji_urlStr
                   fileDir:(NSString *)ji_fileDir
                   success:(JIDownloadSuccess)ji_success
                   failure:(JIDownloadFailed)ji_failure;
+(BOOL)ji_photoExistsAtUrlName:(NSString *)ji_name;
+(void)ji_saveImageTofileWithName:(NSString *)ji_name image:(UIImage *)ji_image;
+(NSString *)ji_getPhotoUrlWithName:(NSString *)ji_name;
+(void)ji_gcdDownloadSvgs:(NSArray <NSString *> *)ji_urlArray;
+(void)ji_gcdDownloadFontsWithJsonUrl:(NSString *)ji_url;
+(void)ji_getImageWithName:(NSString *)ji_name success:(void(^)(UIImage * image))ji_successBlock;
+(void)ji_gcdDownloadSvgsWithJsonUrl:(NSString *)ji_url;
@property(nonatomic,assign)BOOL ji_svgIsDowning;
@end

NS_ASSUME_NONNULL_END
