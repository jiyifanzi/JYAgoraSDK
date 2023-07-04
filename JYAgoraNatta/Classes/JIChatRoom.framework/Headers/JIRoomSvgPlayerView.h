
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIRoomSvgPlayerView : UIView





///带走主播动画，。countDown是否显示倒计时动画
///   - ji_avatar: 加入者头像
/// svip加入房间动画
/// - Parameter ji_name: 主持人
/// - Parameters:
/// 目标完成动画
///   - ji_name: 加入者名称
- (void)ji_clearPlayer;
- (instancetype)initWithJoinRoomWithNickname:(NSString *)ji_name avatar:(NSString *)ji_avatar completion:(void(^)(void))ji_completion;
- (void)roomAnchorTakePrivate:(NSString *)ji_anchorUrl anchorName:(NSString *)ji_anchorName userAvatar:(NSString *)ji_userUrl userName:(NSString *)ji_userName countDown:(BOOL)ji_countDown completion:(void(^)(void))ji_completion;
- (void)ji_clear;
- (instancetype)initWithRoomGoalDoneWithHostName:(NSString *)ji_name completion:(void(^)(void))ji_completion;
@end

NS_ASSUME_NONNULL_END
