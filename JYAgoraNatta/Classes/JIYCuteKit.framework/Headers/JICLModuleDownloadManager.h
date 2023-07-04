
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^ _Nullable JILDownloadFileSuccess)(NSString * path);
typedef void(^ _Nullable JILDownloadFileFailed)(NSError * error);

@interface JICLModuleDownloadManager : NSObject



/// 下载单个文件
+ (instancetype)sharedInstance;
+ (void)jif_downloadWithUrl:(NSString *)jip_urlStr
                    fileDir:(NSString *)jip_fileDir
                    success:(JILDownloadFileSuccess)jip_success
                    failure:(JILDownloadFileFailed)jip_failure;
@end

NS_ASSUME_NONNULL_END
