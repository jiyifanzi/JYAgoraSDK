
#import <UIKit/UIKit.h>
#import "JISmallSeatView.h"

@protocol JIChatRoomSmallViewDelegate <NSObject>
@required

- (void)ji_smallViewTap;

@end

NS_ASSUME_NONNULL_BEGIN

@interface JIChatRoomSmallView : UIView








- (void)ji_hide;
- (void)ji_loadModel:(JIChatRoomModel *)ji_model;
- (void)ji_show;
- (void)ji_isScreenCapture:(BOOL)isOn;
@property (nonatomic, weak) id<JIChatRoomSmallViewDelegate> delegate;
@property (nonatomic, strong, readonly) NSMutableArray <JISmallSeatView *>* seatViewArray;
@end

NS_ASSUME_NONNULL_END
