
#import <Foundation/Foundation.h>
#import "JIChatRoomCell.h"
#import "JIGuideView.h"
#import "JIGamePopView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JIChatRoomHelper : NSObject














































- (void)ji_smallViewScreenCapture:(BOOL)isOn;
- (void)modifyRoomArrayAddRoom:(JIChatRoomModel *)ji_model;
- (void)ji_initChatRoomID:(NSInteger)ji_roomId completion:(void(^)(BOOL))ji_completion;
- (void)ji_destoryChatRoom:(void(^)(void))completion;
- (void)ji_smallToChatRoom;
- (void)ji_privateTakeAnchor:(JIChatRoomAnchorModel *)ji_anchor;
- (void)ji_showGiftViewForHost;
- (void)ji_chatRoomBindRtc;
- (void)modifyRoomArrayDeleteRoom:(JIChatRoomModel *)ji_model;
- (void)ji_updateRoomArray;
- (void)ji_bossPutOffMic;
- (void)ji_bossPutOnMic:(BOOL)bottom;
- (void)ji_smallViewBindRtc;
- (void)ji_smallViewHide;
- (void)ji_joinChannelWithModel:(JIChatRoomModel *)ji_roomModel currentCell:(JIChatRoomCell *)ji_currentCell;
- (void)ji_showGiftViewWithAnchor:(JIChatRoomAnchorModel *)ji_anchor;
- (void)ji_leaveChannel:(void(^)(void))completion;
+ (instancetype)helper;
- (void)ji_smallViewShow;
- (void)ji_initRtcEngineKit:(AgoraRtcEngineKit*)ji_rtcKit;
- (void)ji_sendFastGift;
- (void)ji_sendMessage:(NSString *)content messageType:(NSInteger)type completion:(nullable void(^)(BOOL success, NSString * _Nullable errorMsg))completion;
- (void)initData;
@property (nonatomic, strong, readonly) JIChatRoomModel * currentRoomModel;
@property (nonatomic, strong) JIGuideView * guideView;
@property (nonatomic, strong) JIChatRoomVC * _Nullable chatRoomVC;
@property (nonatomic, strong, readonly) AgoraRtcEngineKit * rtcKit;
@property (nonatomic, assign) BOOL beMute;
@property (nonatomic, assign) BOOL showSmallEnable;
@property (nonatomic, assign) BOOL isMute;
@property (nonatomic, assign) BOOL joinRoom;
@property (nonatomic, assign) BOOL isFrontCamera;
@property (nonatomic, strong) JIGamePopView * _Nullable gamePopView;
@property (nonatomic, assign, readonly) BOOL isSmall;
@property (nonatomic, assign) BOOL onBroadcast;
@property (nonatomic, strong, readonly) JIChatRoomCell * currentCell;
@property (nonatomic, strong) UITableView * _Nullable tableView;
@property (nonatomic, assign) BOOL onCamera;
@property (nonatomic, assign, readonly) BOOL taking;
@property (nonatomic, assign, readonly) BOOL isClose;
@property (nonatomic, assign) BOOL joinEffectState;
@property (nonatomic, assign, readonly) NSInteger currentIndex;
@property (nonatomic, assign, readonly) BOOL inChatRoom;
@property (nonatomic, strong, readonly) NSMutableArray <JIChatRoomModel *> * roomArray;
@end

NS_ASSUME_NONNULL_END
