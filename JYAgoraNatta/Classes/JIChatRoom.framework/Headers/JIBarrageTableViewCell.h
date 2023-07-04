
#import <UIKit/UIKit.h>
#import "JIBarrageModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface JIBarrageTableViewCell : UITableViewCell


@property(nonatomic,strong)JIBarrageModel *model;
@property (nonatomic, copy) void (^nicknameTapBlock)(JIBarrageModel *model);
@end

NS_ASSUME_NONNULL_END
