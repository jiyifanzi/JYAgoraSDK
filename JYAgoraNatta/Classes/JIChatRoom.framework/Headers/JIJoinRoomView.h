
#import <UIKit/UIKit.h>
#import "JIBarrageModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JIJoinRoomView : UIView<CAAnimationDelegate>
-(void)ji_resetData;//重置数据
-(void)ji_addMessage:(JIBarrageModel *)model;
@property(nonatomic,copy)void(^changeStatusBlock)(BOOL isFinish, CGFloat height);
@end

NS_ASSUME_NONNULL_END
