
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIMemberAnchorListCell : UITableViewCell




//- (void)ji_followedAnchorAction:(BOOL)ji_action;
//@property (nonatomic, copy) void (^followBlock)(BOOL followed);
- (void)ji_loadModel:(JIChatRoomMemberModel *)ji_model;
@end

NS_ASSUME_NONNULL_END
