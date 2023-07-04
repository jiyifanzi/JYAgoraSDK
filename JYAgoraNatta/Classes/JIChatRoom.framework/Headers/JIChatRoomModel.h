
#import <Foundation/Foundation.h>

@class JIChatRoomAnchorModel,
JIChatRoomHostModel,
JIChatRoomBossModel,
JIChatRoomGoalModel,
JIChatRoomGiftModel,
JIChatRoomMemberModel,
JIGiftConfigModel,
JIStanInfoModel,
JIGameConfigModel,
JIGameItemModel;




NS_ASSUME_NONNULL_BEGIN

@interface JIChatRoomModel : NSObject



































@property (nonatomic, copy) NSString * ji_roomGifCorver;
@property (nonatomic, assign) NSInteger ji_hostDisplayAccountId;
@property (nonatomic, copy) NSString * ji_roomCover;
@property (nonatomic, copy) NSString * ji_hostName;
@property (nonatomic, strong) JIGiftConfigModel * ji_lovelyGift;
@property (nonatomic, assign) JIRoomType ji_roomType;
@property (nonatomic, strong) NSArray <JIChatRoomGiftModel *> * ji_gifts;
@property (nonatomic, strong) NSArray <JIChatRoomMemberModel *> * ji_userMembers;
@property (nonatomic, strong) JIChatRoomBossModel * _Nullable ji_boss;
@property (nonatomic, assign) NSInteger  ji_memberCount;
@property (nonatomic, copy) NSString * ji_hostReceivedGifts;
@property (nonatomic, strong) JIChatRoomGoalModel * ji_roomGoal;
@property (nonatomic, assign) BOOL ji_isHostFollowed;
@property (nonatomic, strong) JIGameConfigModel * ji_gameConfig;
@property (nonatomic, strong) NSArray <NSString *> * ji_userAvatars;
@property (nonatomic, strong) NSArray <JIChatRoomAnchorModel *> * ji_anchorList;
@property (nonatomic, copy) NSString * ji_pairGifts;
@property (nonatomic, strong) NSArray <NSString *> * ji_anchoRAvatars;
@property (nonatomic, copy) NSString * ji_hostIncome;
@property (nonatomic, strong) JIChatRoomHostModel * ji_host;
@property (nonatomic, copy) NSString * ji_liveDuration;
@property (nonatomic, copy) NSString * ji_roomTitle;
@property (nonatomic, copy) NSString * ji_hostFollowersBeg;
@property (nonatomic, assign) NSInteger ji_hostAccountId;
@property (nonatomic, copy) NSString * ji_maxMemberCount;
@property (nonatomic, strong) NSArray <JIChatRoomMemberModel *> * ji_anchorMembers;
@property (nonatomic, copy) NSString * ji_roomBackgroundWebp;
@property (nonatomic, copy) NSString * ji_endTime;
@property (nonatomic, strong) JIStanInfoModel * ji_stanInfo;
@property (nonatomic, strong) NSArray <JIChatRoomMemberModel *> * ji_members;
@property (nonatomic, copy) NSString * ji_startTime;
@property (nonatomic, copy) NSString * ji_hostFollowersEnd;
@property (nonatomic, assign) NSInteger ji_roomId;
@property (nonatomic, copy) NSString * ji_roomBackground;
@end


@interface JIChatRoomHostModel : NSObject






//（1：加入，2：离开，3：上麦，4：下麦，5：禁言，6：关麦）
@property (nonatomic, assign) NSInteger ji_anchorAccountId;
@property (nonatomic, assign) NSInteger ji_memberStatus;
@property (nonatomic, copy) NSString * ji_name;
@property (nonatomic, assign) NSInteger ji_anchorDisplayAccountId;
@property (nonatomic, copy) NSString * ji_avatar;
@end

@interface JIChatRoomBossModel : NSObject






//（1：加入，2：离开，3：上麦，4：下麦，5：禁言，6：关麦）
@property (nonatomic, assign) NSInteger ji_memberStatus;
@property (nonatomic, copy) NSString * ji_avatar;
@property (nonatomic, assign) NSInteger ji_bossDisplayAccountId;
@property (nonatomic, copy) NSString * ji_name;
@property (nonatomic, assign) NSInteger ji_bossAccountId;
@end


@interface JIChatRoomAnchorModel : NSObject








//（1：加入，2：离开，3：上麦，4：下麦，5：禁言，6：关麦）
// 私聊开关（1：开启，2：关闭）
@property (nonatomic, assign) NSInteger ji_leftOnMicTime;
@property (nonatomic, copy) NSString * ji_anchorMood;
@property (nonatomic, copy) NSString * ji_avatar;
@property (nonatomic, copy) NSString * ji_privateChatFlag;
@property (nonatomic, copy) NSString * ji_name;
@property (nonatomic, assign) NSInteger ji_memberStatus;
@property (nonatomic, assign) NSInteger ji_anchorAccountId;
@property (nonatomic, assign) NSInteger ji_seatNumber;
@property (nonatomic, assign) NSInteger ji_anchorDisplayAccountId;
@end

@interface JIChatRoomGoalModel : NSObject

//房间号 ,
//目标收入 ,
//当前收入
//目标描述 ,
@property (nonatomic, assign) NSInteger ji_goalIncome;
@property (nonatomic, assign) NSInteger ji_roomId;
@property (nonatomic, assign) NSInteger ji_currentIncome;
@property (nonatomic, copy) NSString * ji_goalDesc;
@end


@interface JIChatRoomGiftModel : NSObject

// 分类是否可以设置带走礼物
//房间号 ,
//礼物 ,
//目标描述 ,
//标签图标类型（1：一次性显示，2：永久展示） ,
@property (nonatomic, assign) BOOL canSetPrivate;
@property (nonatomic, copy) NSString * ji_tagIconUrl;
@property (nonatomic, copy) NSString * ji_title;
@property (nonatomic, strong) NSArray <JIGiftConfigModel *> * ji_gifts;
@property (nonatomic, assign) NSInteger ji_tagIconType;
@end


@interface JIChatRoomMemberModel : NSObject











//点赞数（主播） ,
//性别（female，maile）
//角色类型（1：用户，2：主播） ,
//礼物消耗（用户） ,
@property (nonatomic, assign) NSInteger ji_accountId;
@property (nonatomic, copy) NSString * ji_gender;
@property (nonatomic, assign) BOOL  ji_isMysteriousMan;
@property (nonatomic, assign) BOOL  ji_isSVip;
@property (nonatomic, assign) BOOL  ji_isAdmin;
@property (nonatomic, assign) NSInteger  ji_roleType;
@property (nonatomic, copy) NSString * ji_giftCost;
@property (nonatomic, assign) BOOL  ji_isVip;
@property (nonatomic, copy) NSString * ji_age;
@property (nonatomic, copy) NSString * ji_nickName;
@property (nonatomic, assign) NSInteger ji_displayAccountId;
@property (nonatomic, copy) NSString * ji_avatar;
@property (nonatomic, assign) NSInteger ji_commentUp;
@end

@interface JIGiftConfigModel : NSObject


/// 礼物图标
/// 价格
//变声器参数
/// svg文件地址
/// 原价
//连击图标
// 连击参数 ,
/// 是否是盲盒
/// 礼物name
// 相芯Bundle播放时长（秒）
//相芯Bundle URL ,
/// 礼物ID
- (BOOL)ji_canCombo;
@property (nonatomic, copy) NSString * ji_comboIconUrl;
@property (nonatomic, copy) NSString * ji_iconUrl;
@property (nonatomic, copy) NSString * ji_voiceChanger;
@property (nonatomic, assign) BOOL ji_isBlindBox;
@property (nonatomic, assign) NSInteger ji_fuBundleDuration;
@property (nonatomic, copy) NSString * ji_fuBundleUrl;
@property (nonatomic, assign) NSInteger ji_comboSize;
@property (nonatomic, assign) NSInteger ji_giftId;
@property (nonatomic, copy) NSString * ji_giftOriPrice;
@property (nonatomic, copy) NSString * ji_giftName;
@property (nonatomic, copy) NSString * ji_svgUrl;
@property (nonatomic, copy) NSString * ji_giftPrice;
@end

@interface JIStanInfoModel : NSObject




@property (nonatomic, assign) BOOL ji_isStanLabelGained;
@property (nonatomic, assign) BOOL ji_isStan;
@property (nonatomic, copy) NSString * ji_stanLabelUrl;
@end


@interface JIGameConfigModel : NSObject






@property (nonatomic, assign) BOOL ji_enable;
@property (nonatomic, strong) JIGameItemModel * ji_defaultGame;
@property (nonatomic, strong) NSArray <JIGameItemModel *> * ji_enableGames;
@property (nonatomic, strong) NSArray <JIGameItemModel *> * ji_recoreds;
@end


@interface JIGameItemModel : NSObject










@property (nonatomic, copy) NSString * ji_picture;
@property (nonatomic, assign) BOOL ji_defaultGame;
@property (nonatomic, copy) NSString * ji_gameName;
@property (nonatomic, copy) NSString * ji_gameAdress;
@property (nonatomic, copy) NSString * ji_sort;
@property (nonatomic, assign) NSInteger ji_supplier;
@property (nonatomic, assign) CGFloat ji_rate;
@property (nonatomic, copy) NSString * ji_gameId;
@property (nonatomic, assign) BOOL ji_enable;
@end


NS_ASSUME_NONNULL_END
