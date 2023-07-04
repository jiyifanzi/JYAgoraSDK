
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICLMoudleCompressionTool : NSObject







/**
 获取svg路径
 @param name svg名字
*/
/**
 获取lproj路径
 @param name lproj名字
*/
/**
 获取gif路径
 @param name gif名字
*/
/**
 解压
*/
/** 拼接地址 */
/**
 获取字体
 @param name 字体名字
 @param size 字体大小
*/
+ (NSString *)jif_getPreparedSvgPathFrom:(NSString *)name;
+ (NSString *)jif_getPreparedGifPathFrom:(NSString *)name;
+ (NSString *)jif_getLprojPathFrom:(NSString *)name;
+ (NSString *)jif_appendUrl:(NSString *)address dic:(NSDictionary *)dic;
+ (void)jif_compressionResources;
+ (UIFont *)jif_getCorrespondFontWith:(NSString *)name andSize:(NSInteger)size;
@end

NS_ASSUME_NONNULL_END
