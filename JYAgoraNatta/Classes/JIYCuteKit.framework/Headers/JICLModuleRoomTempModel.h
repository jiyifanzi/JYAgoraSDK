

#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleRoomTempModel : JICLiveModuleBaseModel


/// 房间封面
/// 进入方式
/// 声网房间号
/// 房间id
/// 主播ID
/// 主播昵称
@property (nonatomic, copy) NSString *jip_cover;
@property (nonatomic, assign) NSInteger jip_roomId;
@property (nonatomic, assign) NSInteger jip_anchorID;
@property (nonatomic, copy) NSString *jip_agoraRoomId;
@property (nonatomic, assign) JILOutDataSourceEnterRoomType jip_enterType;
@property (nonatomic, copy) NSString *jip_nickname;
@end

NS_ASSUME_NONNULL_END
