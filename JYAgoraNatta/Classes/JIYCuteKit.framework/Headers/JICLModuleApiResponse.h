
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleApiResponse : NSObject








/// 服务端在某些错误码 将messgae传信息，所以就用extraData字段表示信息。message在客户端写死文案
/// 接口请求成功（网络层） 但是 服务端报错（业务层）
/// 接口请求成功（网络层） 并且 服务端给了正确的错误码（业务层）
- (id)data;
- (BOOL)jif_success;
- (instancetype)initWithResponseData:(id)aData error:(NSError *)error;
- (BOOL)jif_requestSuccessWithWrongCode;
@property (nonatomic, assign) NSInteger retCode;
@property (nonatomic, copy) NSString *responseId;
@property (nonatomic, copy) NSString *extraData;
@property (nonatomic, copy) NSString *message;
@end

NS_ASSUME_NONNULL_END
