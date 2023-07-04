
#import <UIKit/UIKit.h>
#import "JIEventLabelModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JIUserMedalListCell : UITableViewCell



- (void)ji_loadModel:(JIEventLabelModel *)ji_model isMine:(BOOL)ji_isMine;
@end

NS_ASSUME_NONNULL_END
