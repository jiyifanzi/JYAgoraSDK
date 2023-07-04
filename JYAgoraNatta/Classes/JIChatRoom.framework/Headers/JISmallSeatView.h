
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN






@interface JISmallSeatView : UIView










//当前anchor
// -2 主持人  -1 老板   1-6 主播
// -2 主持人  -1 老板   1-6 主播
///用于切换大小窗时保存状态
- (void)ji_loadModel:(JIChatRoomAnchorModel * _Nullable)ji_model;
- (instancetype)initWithIndex:(NSInteger)ji_index;
- (void)ji_loadHostOrBoss:(id _Nullable)ji_model;
@property (nonatomic, assign, readonly) NSInteger itemIndex;
@property (nonatomic, assign) BOOL videoMute;
@property (nonatomic, assign) BOOL offline;
@property (nonatomic, strong, readonly) JIChatRoomAnchorModel * anchor;
@property (nonatomic, strong, readonly) AgoraRtcVideoCanvas * canvas;
@property (nonatomic, assign) BOOL audioMute;
@end

NS_ASSUME_NONNULL_END
