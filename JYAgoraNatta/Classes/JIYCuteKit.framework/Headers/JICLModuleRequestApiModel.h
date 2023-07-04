
#import <Foundation/Foundation.h>

#define kJICLRequestMethodPost @"POST"
#define kJICLRequestMethodGET  @"GET"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleRequestApiModel : NSObject



/// 前缀
/// 请求方式
/// 地址
/// query参数
/// body参数
+ (JICLModuleRequestApiModel *)jif_configApiWithUrl:(NSString *)url method:(NSString *)method;
@property (nonatomic, copy) NSString *jip_url;
@property (nonatomic, retain) NSMutableDictionary *jip_bodyDic;
@property (nonatomic, copy) NSString *jip_host;
@property (nonatomic, retain) NSMutableDictionary *jip_queryDic;
@property (nonatomic, copy) NSString *jip_method;
@end

NS_ASSUME_NONNULL_END
