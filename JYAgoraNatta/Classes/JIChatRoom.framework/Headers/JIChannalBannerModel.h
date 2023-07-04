
#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JIChannalBannerShowType) {
    JIChannalBannerShowTypeTake = 1,///带走横幅
    JIChannalBannerShowTypeGift,///全频道横幅
};

typedef NS_ENUM(NSInteger, JIChannalBannerFromType) {
    JIChannalBannerFromTypeNone = 0,
    JIChannalBannerFromTypeChatRoom,
    JIChannalBannerFromTypeLive,
    JIChannalBannerFromTypeUGC,
};

typedef NS_ENUM(NSInteger, JIChannalBannerCellState) {
    JIChannalBannerCellStateWait,
    JIChannalBannerCellStateEnter,
    JIChannalBannerCellStateShow,
    JIChannalBannerCellStateExit,
    JIChannalBannerCellStateEnd,
};



@interface JIChannalBannerModel : NSObject















- (NSMutableAttributedString *)ji_takeContentAttr;
- (NSMutableAttributedString *)ji_giftContentAttr;
- (instancetype)initTakeModelWithRoomID:(NSInteger)ji_roomId userName:(NSString *)ji_userName userAvatar:(NSString *)ji_userAvatar anchorName:(NSString *)ji_anchorName anchorAvatar:(NSString *)ji_anchorAvatar;
@property (nonatomic, assign, readonly) float moveDuration;
@property (nonatomic, copy) NSString * ji_recieverAvatar;
@property (nonatomic, copy) NSString * ji_senderName;
@property (nonatomic, assign) JIChannalBannerCellState ji_state;
@property (nonatomic, copy) NSString * ji_giftIconUrl;
@property (nonatomic, copy) NSString * ji_senderAvatar;
@property (nonatomic, copy) NSString * ji_recieverName;
@property (nonatomic, copy) NSString * ji_agoraRoomId;
@property (nonatomic, assign) JIChannalBannerFromType ji_fromType;
@property (nonatomic, assign, readonly) float stayDuration;
@property(nonatomic,copy)void(^refreshUIBlock)(void);
@property (nonatomic, assign) float fastStayDuration;
@property (nonatomic, copy) NSString * ji_roomCover;
@property (nonatomic, assign) NSInteger ji_recieverUserId;
@property (nonatomic, assign) JIChannalBannerShowType ji_showType;
@property (nonatomic, assign) NSInteger ji_senderUserId;
@property (nonatomic, copy) NSString * ji_giftName;
@property (nonatomic, assign) NSInteger ji_roomId;
@end

NS_ASSUME_NONNULL_END
