
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface JICategoryViewAnimator : NSObject



- (void)ji_invalid;
- (void)ji_start;
- (void)ji_stop;
@property (nonatomic, assign) NSTimeInterval duration;
@property (readonly, getter=isExecuting) BOOL executing;
@property (nonatomic, copy) void(^completeCallback)(void);
@property (nonatomic, copy) void(^progressCallback)(CGFloat percent);
@end

