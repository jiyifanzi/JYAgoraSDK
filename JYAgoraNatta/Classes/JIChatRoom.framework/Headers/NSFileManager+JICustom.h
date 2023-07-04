
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSFileManager (JICustom)

- (BOOL)ji_dirExistsAtPath:(NSString *)ji_path;

- (BOOL)ji_mkDirAtPath:(NSString *)ji_path;

- (BOOL)ji_deleteFileAsPath:(NSString *)ji_path;

@end

NS_ASSUME_NONNULL_END
