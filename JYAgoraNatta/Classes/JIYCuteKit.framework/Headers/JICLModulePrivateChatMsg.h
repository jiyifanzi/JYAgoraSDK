
#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModulePrivateChatMsg : JICLiveModuleBaseModel


/// 房间号
/// 是否开启（1：开启 2：关闭）
@property (nonatomic, assign) NSInteger jib_roomID;
@property (nonatomic, assign) JILModulePrivateChatStatusType jib_privateState;
@end

NS_ASSUME_NONNULL_END
