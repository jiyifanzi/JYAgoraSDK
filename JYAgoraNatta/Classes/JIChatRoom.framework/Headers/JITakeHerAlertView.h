
#import <UIKit/UIKit.h>
#import "JIBaseSheetAlertView.h"
NS_ASSUME_NONNULL_BEGIN

@interface JITakeHerAlertView : JIBaseSheetAlertView





- (void)ji_loadModel:(JIChatRoomAnchorModel *)ji_anchor;
@property (nonatomic, copy) void(^takeAnchorBlock)(void);
@end

NS_ASSUME_NONNULL_END
