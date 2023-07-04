
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleEnterConfigModel : NSObject


/// 房间id
/// 主播ID
/// 来源
/// 是否是UGC房间
/// 声网房间号
@property (nonatomic, assign) BOOL jip_isUGCRoom;
@property (nonatomic, assign) JILOutDataSourceEnterRoomType jip_fromWay;
@property (nonatomic, copy) NSString *jip_agoraRoomId;
@property (nonatomic, assign) NSInteger jip_roomId;
@property (nonatomic, assign) NSInteger jip_anchorID;
@end

NS_ASSUME_NONNULL_END
