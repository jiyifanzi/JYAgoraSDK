
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (JILExtention)

- (void)jif_handleNotification:(NSNotification *)notification;  // 处理通知

- (void)jif_observeNotification:(NSString *)name;               // 注册观察者
- (void)jif_unobserveNotification:(NSString *)name;             // 反注册观察者
- (void)jif_unobserveAllNotifications;                          // 反注册所有通知

- (BOOL)jif_postNotification:(NSString *)name;                                  // 发送通知
- (BOOL)jif_postNotification:(NSString *)name withObject:(NSObject *)object;    // 发送通知 with 对象


@end

NS_ASSUME_NONNULL_END
