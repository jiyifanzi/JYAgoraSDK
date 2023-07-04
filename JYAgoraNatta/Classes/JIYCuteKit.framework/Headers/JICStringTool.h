
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICStringTool : NSObject

#pragma mark 禁言相关

#pragma mark PK相关


#pragma mark 广播相关


/// 是否被禁言
/// 用户逃跑
/// 主播逃跑
+ (NSString *)jif_userMute:(BOOL)isMute;
+ (NSString *)jif_hostQuitPKWithIsOther:(BOOL)isOther;
+ (NSString *)jif_operateBroadcast:(BOOL)isClose;
+ (NSString *)jif_userQuitPKWithIsOther:(BOOL)isOther;
@end

NS_ASSUME_NONNULL_END
