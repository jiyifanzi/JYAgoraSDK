
#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleEntryEffectPushMsg : JICLiveModuleBaseModel








- (void)jif_getFilePath:(void (^)(  NSString * _Nullable p ))completion;
@property (nonatomic, copy) NSString *jib_effectUrl;
@property (nonatomic, assign) NSInteger jib_hostId;
@property (nonatomic, copy) NSString *jib_userName;
@property (nonatomic, assign) NSInteger jib_roomId;
@property (nonatomic, assign) NSInteger jib_userId;
@property (nonatomic, copy) NSString *jib_avater;
@end

NS_ASSUME_NONNULL_END
