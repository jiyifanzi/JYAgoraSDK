
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (JICustom)

- (NSString *)ji_safeStringForKey:(NSString *)ji_key;

- (NSNumber *)ji_safeNumberForKey:(NSString *)ji_key;

- (NSArray *)ji_safeArrayForKey:(NSString *)ji_key;

- (NSDictionary *)ji_safeDictionaryForKey:(NSString *)ji_key;


@end

NS_ASSUME_NONNULL_END
