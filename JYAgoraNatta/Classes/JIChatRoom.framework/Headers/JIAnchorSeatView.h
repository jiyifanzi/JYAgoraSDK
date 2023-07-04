
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JIAnchorSeatViewDelegate <NSObject>
@required
- (void)ji_anchorViewTimeEnd:(JIChatRoomAnchorModel *)model;
- (void)ji_anchorViewClicked:(JIChatRoomAnchorModel *)model;



@end


@interface JIAnchorSeatView : UIView












//视频不推流
//当前anchor
//闭麦
//座序
//音量
- (void)ji_cancelTimer;
- (void)ji_clearLoadModel;
- (void)ji_reloadCabvas:(NSInteger)ji_uid;
- (void)ji_updateTime:(NSInteger)ji_seconds;
- (instancetype)initWithIndex:(NSInteger)ji_index delegate:(id<JIAnchorSeatViewDelegate>)ji_delegate;
- (void)ji_loadModel:(JIChatRoomAnchorModel * _Nullable)ji_model;
@property (nonatomic, strong, readonly) AgoraRtcVideoCanvas * canvas;
@property (nonatomic, assign) NSInteger volumeSpeed;
@property (nonatomic, assign) BOOL offline;
@property (nonatomic, assign, readonly) NSInteger itemIndex;
@property (nonatomic, assign) BOOL audioMute;
@property (nonatomic, assign) BOOL videoMute;
@property (nonatomic, strong, readonly) JIChatRoomAnchorModel * anchor;
@end

NS_ASSUME_NONNULL_END
