
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIJoinEffectModel : NSObject









- (void)ji_getFilePath:(void(^)( NSString * _Nullable path ))completion;
@property (nonatomic, copy) NSString * ji_userName;
@property (nonatomic, copy) NSString * ji_effectUrl;
@property (nonatomic, assign) NSInteger ji_userId;
@property (nonatomic, copy) NSString * ji_avater;
@property (nonatomic, assign) NSInteger ji_roomId;
@end

NS_ASSUME_NONNULL_END
