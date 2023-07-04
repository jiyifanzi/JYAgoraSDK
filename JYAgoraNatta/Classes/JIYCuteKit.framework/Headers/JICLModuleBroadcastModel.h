
#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JILBroadcastShowType) {
    JILBroadcastShowTypeTake = 1,///带走横幅
    JILBroadcastShowTypeGift,///全频道横幅
};

typedef NS_ENUM(NSInteger, JILBroadcastFromType) {
    JILBroadcastFromTypeNone = 0,
    JILBroadcastFromTypeChatRoom,
    JILBroadcastFromTypeLive,
    JILBroadcastFromTypeUGC,
};

typedef NS_ENUM(NSInteger, JILBroadcastCellState) {
    JILBroadcastCellStateWait,
    JILBroadcastCellStateEnter,
    JILBroadcastCellStateShow,
    JILBroadcastCellStateExit,
    JILBroadcastCellStateEnd,
};


@interface JICLModuleBroadcastModel : JICLiveModuleBaseModel















- (NSMutableAttributedString *)jip_takeContentAttr;
- (NSMutableAttributedString *)jip_giftContentAttr;
- (instancetype)initTakeModelWithRoomID:(NSInteger)jip_roomId userName:(NSString *)jip_userName userAvatar:(NSString *)jip_userAvatar anchorName:(NSString *)jip_anchorName anchorAvatar:(NSString *)jip_anchorAvatar;
@property (nonatomic, copy) NSString * jip_recieverAvatar;
@property (nonatomic, copy) NSString * jip_giftIconUrl;
@property (nonatomic, assign, readonly) float moveDuration;
@property (nonatomic, assign) JILBroadcastCellState jip_state;
@property (nonatomic, assign) NSInteger jip_roomId;
@property (nonatomic, copy) NSString * jip_senderName;
@property (nonatomic, assign) JILBroadcastShowType jip_showType;
@property (nonatomic, copy) NSString * jip_roomCover;
@property (nonatomic, copy) NSString * jip_recieverName;
@property (nonatomic, assign, readonly) float stayDuration;
@property (nonatomic, copy) NSString * jip_giftName;
@property (nonatomic, assign) JILBroadcastFromType jip_fromType;
@property(nonatomic,copy)void(^refreshUIBlock)(void);
@property (nonatomic, copy) NSString * jip_senderAvatar;
@property (nonatomic, copy) NSString * jip_agoraRoomId;
@property (nonatomic, assign) float fastStayDuration;
@property (nonatomic, assign) NSInteger jip_senderUserId;
@property (nonatomic, assign) NSInteger jip_recieverUserId;
@end

NS_ASSUME_NONNULL_END
