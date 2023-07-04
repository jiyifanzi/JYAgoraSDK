
#import <UIKit/UIKit.h>
#import "JIBaseSheetAlertView.h"

NS_ASSUME_NONNULL_BEGIN

@protocol JIRoomToolAlertDelegate <NSObject>
@required




- (void)ji_toolsClickedSwitchCamera;

- (void)ji_toolsClickedRecharge;
- (void)ji_toolsClickedSwitchBroadcast;
- (void)ji_toolsClickedSwitchMute;

- (void)ji_toolsClickedSwitchVideoMute;
@end



@interface JIRoomToolAlert : JIBaseSheetAlertView



@property (nonatomic, weak) id<JIRoomToolAlertDelegate> delegate;
@property (nonatomic, assign) BOOL selfIsBoss;
@end

NS_ASSUME_NONNULL_END
