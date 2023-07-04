
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIAuthorityHelper : NSObject











+ (void)ji_jumpAuthSetting;
+ (void)ji_checkMircophoneAuth:(void (^)(BOOL auth))ji_completion;
+ (void)ji_getCameraAuthNoAlert:(void(^)(BOOL auth))ji_completion;
+ (void)ji_getMircophoneAuth:(void (^)(BOOL auth))ji_completion;
+ (void)ji_checkCameraAuth:(void(^)(BOOL auth))ji_completion;
+ (void)ji_getPhotoAlbumAuth:(void (^)(BOOL auth))completion;
+ (void)ji_getCameraAuth:(void(^)(BOOL auth))ji_completion;
+ (void)ji_getMircophoneAuthNoAlert:(void (^)(BOOL auth))ji_completion;
@end

NS_ASSUME_NONNULL_END
