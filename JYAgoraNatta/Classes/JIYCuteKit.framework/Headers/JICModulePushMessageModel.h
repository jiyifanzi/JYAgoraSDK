
#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICModulePushMessageModel : JICLiveModuleBaseModel


/// 操作码
/// 子操作码
/// 业务数据
/// 操作结果描述
/// 操作结果码
@property (nonatomic, assign) NSInteger jip_subCode;
@property (nonatomic, assign) NSInteger jip_opCode;
@property (nonatomic, strong) NSDictionary *jip_data;
@property (nonatomic, assign) NSInteger jip_retCode;
@property (nonatomic, copy) NSString *jip_message;
@end

NS_ASSUME_NONNULL_END
