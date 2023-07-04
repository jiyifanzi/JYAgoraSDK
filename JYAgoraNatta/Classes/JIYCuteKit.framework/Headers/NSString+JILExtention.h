
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (JILExtention)

- (NSString *)jif_md5;

- (NSString *)jif_localString;

- (NSString *)jif_stringByURLEncode;

- (UIImage *)jif_getOwnImageFromName;

- (NSString *)jif_stringByTrim;

+ (NSString *)jif_urlEncodeString:(NSString *)str;

+ (NSString *)jif_decimalString:(CGFloat)value maxFloat:(int)maxFloat;

- (NSArray <NSString *>*)jif_linesWithMaxWidth:(CGFloat)jip_width font:(UIFont *)jip_font;

- (CGSize)jif_getSizeWithFont:(UIFont *)jip_font maxSize:(CGSize)jip_size;

- (NSString *)jif_substringToIndex:(NSInteger)index;

@end

NS_ASSUME_NONNULL_END
