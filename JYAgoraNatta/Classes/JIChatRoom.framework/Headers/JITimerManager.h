
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface JITimerManager : NSObject




/**
 取消定时器
 @param ji_timerName 定时器标识
 */
/// @param ji_async 是否子线程
/// @param ji_target 目标对象（这里使用方法）
/// @param ji_selector 调用方法
///  @return 定时其标识（最终取消定时器是需要根据此标识取消的）
/// @param ji_repeats 是否重复调用
/// @param ji_interval 间隔
/// @param ji_start 开始时间（定时器延迟时间）
+ (instancetype)shared;
+ (NSString*)ji_timerTarget:(id)ji_target
                  selector:(SEL)ji_selector
                 delayTime:(NSTimeInterval)ji_start
                  interval:(NSTimeInterval)ji_interval
                   repeats:(BOOL)ji_repeats
                     async:(BOOL)ji_async;
+(void)ji_cancelTimer:(NSString*) ji_timerName;
@end

NS_ASSUME_NONNULL_END
