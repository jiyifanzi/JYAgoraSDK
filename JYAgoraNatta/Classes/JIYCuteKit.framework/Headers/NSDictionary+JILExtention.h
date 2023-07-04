
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (JILExtention)

- (nullable id)jif_objectForKeyNotNil:(id)aKey;

+ (NSDictionary *)jif_dicWithJsonStr:(NSString *)jsonStr;

@end

NS_ASSUME_NONNULL_END
