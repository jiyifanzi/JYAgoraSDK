
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN



@protocol JIHostBossSeatViewDelegate <NSObject>
@required

- (void)ji_hostSeatTapVideoView;

@end


@interface JIHostBossSeatView : UIView








//视频不推流
//离线
//音量
//闭麦
- (void)ji_loadModel:(id _Nullable)ji_model;
- (void)ji_clearLoadModel;
- (void)ji_reloadCanvas:(NSInteger)ji_uid;
- (instancetype)initWithType:(JIHostBossSeatType)ji_seatType delegate:(id<JIHostBossSeatViewDelegate>)ji_delegate;
- (void)ji_firstFramComing;
@property (nonatomic, assign) BOOL offline;
@property (nonatomic, assign) BOOL videoMute;
@property (nonatomic, assign) NSInteger volumeSpeed;
@property (nonatomic, assign) BOOL audioMute;
@property (nonatomic, strong, readonly) AgoraRtcVideoCanvas * canvas;
@end

NS_ASSUME_NONNULL_END
