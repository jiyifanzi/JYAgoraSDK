
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JITableView : UITableView


@property (nonatomic, copy) void(^touchBeganBlock)(void);
@end

NS_ASSUME_NONNULL_END
