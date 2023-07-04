
#import "JICLiveModuleBaseModel.h"
@class JICLModuleGiftInfoModel;
NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleGiftConfigModel : JICLiveModuleBaseModel


/// 标题
/// 标签
/// 礼物
/// 1：一次性展示，2：永久展示
/// 此类礼物可设置私聊带走
@property (nonatomic, copy) NSString *jib_iconUrl;
@property (nonatomic, copy) NSString *jib_title;
@property (nonatomic, assign) NSInteger jib_iconType;
@property (nonatomic, assign) BOOL jib_canBePrivateGift;
@property (nonatomic, strong) NSArray <JICLModuleGiftInfoModel *> *jib_giftList;
@end

@interface JICLModuleGiftListModel : JICLiveModuleBaseModel


@property (nonatomic, strong) NSArray <JICLModuleGiftInfoModel *> *jib_giftList;
@end

@interface JICLModuleGiftInfoModel : JICLiveModuleBaseModel


/// 连击参数
/// 礼物图标
/// svg文件地址
/// 相芯Bundle URL
/// 变声器参数
/// 礼物ID
/// 相芯Bundle播放时长（秒）
/// 原价
/// 连击图标
/// 礼物name
/// 是否是盲盒
/// 价格
@property (nonatomic, copy) NSString *jib_comboIconImage;
@property (nonatomic, assign) BOOL jib_isBlindGift;
@property (nonatomic, copy) NSString *jib_giftName;
@property (nonatomic, assign) NSInteger jib_giftOriginCoin;
@property (nonatomic, copy) NSString *jib_gifUrl;
@property (nonatomic, copy) NSString *jib_bundleUrl;
@property (nonatomic, assign) NSInteger jib_giftID;
@property (nonatomic, assign) NSInteger jib_giftCoin;
@property (nonatomic, copy) NSString *jib_voiceChangeConfig;
@property (nonatomic, assign) NSInteger jib_comboNum;
@property (nonatomic, assign) NSInteger jib_bundleDuration;
@property (nonatomic, copy) NSString *jib_iconImageUrl;
@end

NS_ASSUME_NONNULL_END
