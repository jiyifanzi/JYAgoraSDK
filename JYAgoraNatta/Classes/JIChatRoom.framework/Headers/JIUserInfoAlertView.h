
#import <UIKit/UIKit.h>
#import "JIBaseSheetAlertView.h"
#import "JIVoiceCRAnchorModel.h"
#import "JIVoiceCRUserModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JIUserInfoAlertView : JIBaseSheetAlertView




/// - Parameters:
/// 用户信息弹窗
-(void)ji_showWithModel:(JIChatRoomMemberModel *)ji_model;
- (void)ji_updateUserModel:(JIVoiceCRUserModel *)ji_model;
- (void)ji_updateAnchorModel:(JIVoiceCRAnchorModel *)ji_model;
@end

NS_ASSUME_NONNULL_END
