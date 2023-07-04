
#import <UIKit/UIKit.h>
#import "JIAllSeatView.h"
#import "JIRoomInfoView.h"
#import "JIBottomToolBar.h"
#import "JIScrollView.h"
#import "JIRoomSvgPlayerView.h"
#import "JISvgPlayView.h"
#import "JIJoinEffectView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JIChatRoomCell : UITableViewCell


















///重置UI
///先加载主持人座位
///加载model
//播放svg
///预加载
- (void)ji_preloadModel:(JIChatRoomModel *)model;
- (void)ji_clearLoadModel;
- (void)ji_clearOtherSvgView;
- (void)ji_keyboardWillHide:(NSNotification *)notif;
-(void)ji_responseToPayGiftSvg:(NSNotification *)noti;
- (void)ji_loadHostSeat:(JIChatRoomModel *)model;
- (void)ji_keyboardWillShow;
- (void)ji_playOnOtherSvgView:(JIRoomSvgPlayerView *)otherSvgView;
- (void)ji_anchorToMessage:(NSNotification *)notif;
- (void)ji_loadModel:(JIChatRoomModel *)model;
@property (nonatomic, strong, readonly) JIRoomInfoView * infoView;
@property (nonatomic, strong, readonly) JISvgPlayView * giftSvgView;
@property (nonatomic, strong, readonly) JIAllSeatView * seatView;
@property (nonatomic, strong, readonly) JIBottomToolBar * bottomView;
@property (nonatomic, strong, readonly) JIJoinEffectView * joinPagView;
@property (nonatomic, strong, readonly) JIRoomSvgPlayerView * takeAnchorSvgView;
@property (nonatomic, strong, readonly) UIView * giftContentView;
@property (nonatomic, strong, readonly) JIScrollView * scrollView;
@property (nonatomic, strong, readonly) UIView * scrollContentView;
@property (nonatomic, copy) void(^closeChatRoom)(void);
@end

NS_ASSUME_NONNULL_END
