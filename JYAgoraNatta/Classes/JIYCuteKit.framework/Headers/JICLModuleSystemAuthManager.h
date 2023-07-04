
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, JILSystemAuthStatusType) {
    JILSystemAuthStatusTypeNotDetermined,      //未选择
    JILSystemAuthStatusTypeAuthorized,      //授权
    JILSystemAuthStatusTypeDenied,        //拒绝授权
    JILSystemAuthStatusTypeUnidentified,  //未识别
    JILSystemAuthStatusTypeLimited // 用户已授权此应用程序进行有限照片库访问
};

#define JICLModuleSystemAuthShared [JICLModuleSystemAuthManager sharedInstance]

@interface JICLModuleSystemAuthManager : NSObject

#pragma mark - 单例

#pragma mark - 麦克风、语音权限检查




#pragma mark - 打开相册


/// - Parameter completion: 回调
/// 检查请求麦克风权限
/// 检查请求相机权限
/// - Parameter completion: 回调
/// 打开相册
- (void)jif_openAlbum:(id <UINavigationControllerDelegate, UIImagePickerControllerDelegate>)delegate;
- (void)jif_checkHasCameraAuth:(void(^)(BOOL succeed))completion;
+ (instancetype)sharedInstance;
- (void)jif_checkHasAudioAuth:(void(^)(BOOL succeed))completion;
@end

NS_ASSUME_NONNULL_END
