
#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleFanInfoModel : JICLiveModuleBaseModel


/// 是否买过铁粉
/// 是否是铁粉
/// 铁粉图标
@property (nonatomic, copy) NSString *jib_fanIconUrl;
@property (nonatomic, assign) BOOL jib_isGainedFan;
@property (nonatomic, assign) BOOL jib_isFan;
@end

NS_ASSUME_NONNULL_END
