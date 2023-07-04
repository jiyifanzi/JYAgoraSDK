

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JICLiveModuleDataSource <NSObject>
@optional

- (NSString *)jif_outsideModuleGetRefuseAuthErrorTip:(JILSystemAuthType)type;

/// 获取主包svg文件路径
- (NSString *)jif_getSVGPathWithUrl:(NSString *)url;
/// 当外部没有🐴+的时候二次拒绝文案
@required


- (AgoraRtcEngineKit *)jif_getRTCKit;



/**
 1.为了减少 "各包模型 => 字典 => SDK模型" 的性能消耗
 2.避免外部更新信息时，需要在外部各个更新的地方 去调方法更新SDK内部模型信息
 ==> 所以此处采用get具体属性的方式实时获取外面的数据，辛苦大家接一下惹【鞠躬】
 3.以下三个方法 获取文本、数字、字典信息的时候 都用switch 然后别写default 方便以后更新。
 */

- (BOOL)jif_getOutBoolTypeInfo:(JILOutDataSourceBoolInfoType)boolType;
/// 获取当前窗口


/// 获取RTC实例【注：每个主包应该都有自己的RTC单例】
- (NSMutableArray *)jif_getOutArrayTypeInfo:(JILOutDataSourceArrayInfoType)arrayType;
- (JILOutDataSourceGenderType)jif_outsideModuleGetGenderType:(NSString *)genderStr;

- (NSString *)jif_getOutTextTypeInfo:(JILOutDataSourceTextInfoType)textType;
- (UIViewController *)jif_outsideModuleGetCurrentVC;

/// 获取当前网络状态



/// 用户头像占位图
/// 获取数字类型信息
/// 获取RTM实例【注：每个主包应该都有自己的RTM单例】
/// 获取字典类型信息
/// 获取布尔类型信息
- (UIImage *)jif_userAvatarPlaceHolderImage;

- (NSDictionary *)jif_getOutDicTypeInfo:(JILOutDataSourceDicInfoType)dicType;
- (JILOutDataSourceNetworkStateType)jif_getOutNetworkState;
/// 获取小数类型信息

- (UIWindow *)jif_getOutKeyWindow;
/// 获取当前VC
- (NSInteger)jif_getOutNumTypeInfo:(JILOutDataSourceNumInfoType)numType;
- (NSInteger)jif_sseStatus;
/// 获取文本类型信息
- (AgoraRtmKit *)jif_getRTMKit;
- (float)jif_getOutFloatTypeInfo:(JILOutDataSourceFloatInfoType)floatType;
/// 根据性别字符串返回性别类型（和主包的判断逻辑保持一致）
/// SSE状态（xy本人也不知道干嘛的 反正先传个1 →_→）

/// 获取数组类型信息
@end

NS_ASSUME_NONNULL_END
