
#import "JICLiveModuleBaseModel.h"
#import "JICLModuleRoomDetailModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleRoomListTotalModel : JICLiveModuleBaseModel


/// 被禁言的声网房间号
/// 房间列表
/// 被踢出的声网房间号
@property (nonatomic, strong) NSArray <NSString *> *jib_kickRTCRoomIDs;
@property (nonatomic, strong) NSArray <JICLModuleRoomDetailModel *> *jib_roomList;
@property (nonatomic, strong) NSArray <NSString *> *jib_muteRTCRoomIDs;
@end

NS_ASSUME_NONNULL_END
