
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIPairShowView : UIView





/**
 播放进入房间svg动画
 @param jip_avatar 头像
*/
/**
 播放匹配成功动画
 @param jip_ancAvatar 主播头像
 @param jip_uAvatar 用户头像
 @param jip_ancName 主播昵称
 @param jip_uName 用户昵称
 @param jip_mine 是否是自己配对成功
*/
/**
 播放完成目标svg动画
 @param jip_name 动画类型1：目标昵称
*/
- (void) jif_preparePlayJoinRoomSvgWithAvatar:(NSString *) jip_avatar andName:(NSString *) jip_name;
- (void) jif_preparePlaySvgWithShowName:(NSString *) jip_name;
- (void) jif_preparePlaySvgWithAncAvatar:(NSString *) jip_ancAvatar andUAvatar:(NSString *) jip_uAvatar andAncName:(NSString *) jip_ancName andUName:(NSString *) jip_uName andIsMine:(BOOL) jip_mine;
@property (nonatomic ,copy) void(^jip_playEndPair)(void);
@end

NS_ASSUME_NONNULL_END
