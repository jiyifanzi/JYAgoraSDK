

#import <UIKit/UIKit.h>
#import "JICLModuleEventLabelModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface JICLiveMedalListCell : UITableViewCell



///选中当前行
- (void) jif_setCellSelected:(BOOL) xy_select;
@property (nonatomic, strong) JICLModuleEventLabelModel *jip_model;
@end

NS_ASSUME_NONNULL_END
