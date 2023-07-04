
#import "JICLiveModuleBaseModel.h"
#import "JICLModuleMessageModel.h"
#import "JICLModuleRoomGoalModel.h"
#import "JICLModuleRoomPKDataModel.h"
#import "JICLModuleMemberModel.h"
#import "JICLModuleGiftConfigModel.h"
#import "JICLModuleFanInfoModel.h"
#import "JICLModuleGameInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleRoomDetailModel : JICLiveModuleBaseModel





/// 是否是UGC房间
/// 是否关注主播
/// 铁粉信息
/// 声网房间号
/// 礼物配置
/// 房间类型
/// 房间封面
/// 是否是PK状态
/// 主持人麦克风状态（1：正常，2：关麦）
/// 转盘开关（1：开启，2：关闭）
/// 当前人数
/// 是否开启私聊
/// pk邀请开关（1：开启，2：关闭）
/// 是否是活跃状态
/// 房间目标
/// 房间成员列表
/// 主持人名字
/// 快捷礼物
/// 主持人收到的礼物数
/// 主持人金币收入
/// 最近弹幕列表
/// 房间号
/// 转盘条目
/// 最大人数
/// 游戏信息
/// 主持人Id
/// 主持人头像
/// 主持人呼叫价格
/// 私聊次数
/// UGC房间成员列表
/// 房间状态（1：未开播，2：直播中，3：主持人私聊挂起，4：结束，5：PK匹配中，6：PK中，7：PK下一场等待中，8：PK惩罚中，9：挂起）
/// 主持人结束的粉丝数
/// 私聊礼物Id
/// 私聊开关（1：开启，2：关闭）
/// PK数据
/// 直播已开始秒数
/// 转盘标题
/// 主持人开始的粉丝数
/// 房间标题
/// 主持人展示Id
/// 主持人心情
- (BOOL)jif_beActive;
- (BOOL)jif_isPKState;
- (BOOL)jif_isOpenPrivate;
@property (nonatomic, assign) NSInteger jib_ownerFansStart;
@property (nonatomic, assign) NSInteger jib_privateChatGiftID;
@property (nonatomic, copy) NSString *jib_ownerMood;
@property (nonatomic, strong) JICLModuleGiftInfoModel *jib_quickGift;
@property (nonatomic, strong) NSArray <NSString *> *jib_circlePanItems;
@property (nonatomic, strong) JICLModuleFanInfoModel *jib_fanInfo;
@property (nonatomic, strong) JICLModuleRoomGoalModel *jib_roomGoal;
@property (nonatomic, assign) JILModulePrivateChatStatusType jib_privateChatState;
@property (nonatomic, strong) NSArray <JICLModuleMemberModel *> *jib_memberList;
@property (nonatomic, assign) BOOL jib_isFollowedOwner;
@property (nonatomic, assign) JILModuleRoomStateType jib_roomState;
@property (nonatomic, assign) NSInteger jib_ownerReceiveGift;
@property (nonatomic, copy) NSString *jib_ownerAvatar;
@property (nonatomic, assign) NSInteger jib_roomDuration;
@property (nonatomic, assign) NSInteger jib_ownerCallPrice;
@property (nonatomic, strong) JICLModuleGameInfoModel *jib_gameConfig;
@property (nonatomic, assign) NSInteger jib_ownerIncome;
@property (nonatomic, assign) BOOL jib_isUGCRoom;
@property (nonatomic, assign) NSInteger jib_privateChatNum;
@property (nonatomic, assign) NSInteger jib_micState;
@property (nonatomic, copy) NSString *jib_cover;
@property (nonatomic, assign) NSInteger jib_circlePanState;
@property (nonatomic, strong) JICLModuleRoomPKDataModel *__nullable jib_pkData;
@property (nonatomic, assign) NSInteger jib_ownerAccountID;
@property (nonatomic, copy) NSString *jib_ownerDisplayAccountID;
@property (nonatomic, assign) NSInteger jib_pkInviteState;
@property (nonatomic, strong) NSArray <JICLModuleMessageModel *> *jib_lastMessages;
@property (nonatomic, assign) NSInteger jib_maxPeopleNum;
@property (nonatomic, copy) NSString *jib_ownerNickname;
@property (nonatomic, assign) NSInteger jib_ownerFansEnd;
@property (nonatomic, copy) NSString *jib_rtcRoomID;
@property (nonatomic, strong) NSArray <JICLModuleGiftConfigModel *> *jib_giftList;
@property (nonatomic, strong) NSArray <JICLModuleMemberModel *> *jib_ugcMemberList;
@property (nonatomic, assign) NSInteger jib_currentPeopleNum;
@property (nonatomic, copy) NSString *jib_title;
@property (nonatomic, copy) NSString *jib_circlePanTitle;
@property (nonatomic, assign) NSInteger jib_roomType;
@property (nonatomic, assign) NSInteger jib_roomID;
@end

NS_ASSUME_NONNULL_END
