
#import <UIKit/UIKit.h>
@class JIBarrageModel;
NS_ASSUME_NONNULL_BEGIN

@interface JIEnjoyBarrageCell : UITableViewCell



@property (nonatomic, copy) void(^clickNickname)(void);
@property (nonatomic, strong) JIBarrageModel *model;
@end

NS_ASSUME_NONNULL_END
