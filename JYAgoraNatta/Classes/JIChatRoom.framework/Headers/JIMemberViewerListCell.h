
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIMemberViewerListCell : UITableViewCell


- (void)ji_loadModel:(JIChatRoomMemberModel *)ji_model withIndex:(NSInteger)ji_index;
@end

NS_ASSUME_NONNULL_END
