

#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleRoomPKPlayerModel : JICLiveModuleBaseModel


/// 直播间房间封面 
/// 声网房间号
/// 账号ID
/// 连胜次数
/// 直播房间Id
/// 昵称
/// 头像
/// 房间状态（1：未开播 2：直播中 3：主持人私聊挂起 4：结束 5：PK匹配中 6：PK中 7：PK下一场等待中 8：惩罚中）
@property (nonatomic, strong) NSString *jib_avatar;
@property (nonatomic, assign) NSInteger jib_wins;
@property (nonatomic, assign) JILModuleRoomStateType jib_roomStatus;
@property (nonatomic, strong) NSString *jib_rtcRoomID;
@property (nonatomic, assign) NSInteger jib_accountID;
@property (nonatomic, strong) NSString *jib_nickname;
@property (nonatomic, strong) NSString *jib_cover;
@property (nonatomic, assign) NSInteger jib_roomID;
@end

NS_ASSUME_NONNULL_END
