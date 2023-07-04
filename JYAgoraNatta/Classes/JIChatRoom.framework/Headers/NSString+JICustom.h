
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (JICustom)

- (NSString *)ji_md5;
-(NSString *)ji_textIsOk;
+(NSString*)ji_safetyStringByObject:(id)ji_unsafeObj;

+ (NSDictionary *)ji_parameterWithURL:(NSString *)ji_urlStr;
- (NSString *)ji_urlWithParameter:(NSDictionary *)ji_paramete;

-(NSString * )ji_americaMoneyFormatter;

-(NSString * )ji_USNumberFormatterStr;


- (NSString *)ji_mediumImage;

- (NSString *)ji_smallImage;

- (CGSize)ji_getSizeWithFont:(UIFont *)ji_font maxSize:(CGSize)ji_size;

- (NSArray <NSString *>*)ji_linesWithMaxWidth:(CGFloat)ji_width font:(UIFont *)ji_font;

- (NSString *)ji_substringToIndex:(NSInteger)index;

@end

NS_ASSUME_NONNULL_END
