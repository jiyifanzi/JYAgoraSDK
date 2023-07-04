
#import "JICLiveModuleBaseModel.h"
@class JICLModuleBannerModel;

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleBannerInfoModel : JICLiveModuleBaseModel


@property (nonatomic, strong) NSArray <JICLModuleBannerModel *> *jib_bannerList;
@end

@interface JICLModuleBannerModel : JICLiveModuleBaseModel


/// 类型
/// 跳转地址
/// 额外数据
/// 图片地址
@property (nonatomic, strong) NSString *jib_imageUrl;
@property (nonatomic, assign) NSInteger jib_type;
@property (nonatomic, strong) NSString *jib_otherData;
@property (nonatomic, strong) NSString *jib_jumpAddr;
@end

NS_ASSUME_NONNULL_END
