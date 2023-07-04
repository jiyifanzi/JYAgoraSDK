
#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModulePushDestoryMsg : JICLiveModuleBaseModel


/// 被销毁的房间
/// 新的野房间
/// 房间销毁原因
@property (nonatomic, strong) JICLModuleRoomDetailModel *jib_destoryOne;
@property (nonatomic, strong) JICLModuleRoomDetailModel *jib_newOne;
@property (nonatomic, assign) JILModuleDestoryReasonType jib_destroyType;
@end

NS_ASSUME_NONNULL_END
