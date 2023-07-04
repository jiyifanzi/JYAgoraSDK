
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleTimerManager : NSObject



+ (void)jif_cancelTimer:(NSString *)jip_timerName;
+ (NSString*)jif_timerTarget:(id)jip_target
                  selector:(SEL)jip_selector
                 delayTime:(NSTimeInterval)jip_start
                  interval:(NSTimeInterval)jip_interval
                   repeats:(BOOL)jip_repeats
                     async:(BOOL)jip_async;
@end

NS_ASSUME_NONNULL_END
