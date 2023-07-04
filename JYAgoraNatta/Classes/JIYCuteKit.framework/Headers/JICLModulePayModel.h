
#import "JICLiveModuleBaseModel.h"

typedef NS_ENUM(NSInteger, JILProductType) {
    JILProductType_NormalConsume     = 1, /// 一般消耗商品
    JILProductType_DiscountConsume   = 2, /// 折扣商品
    JILProductType_RenewProduct      = 3, /// 续订商品
    JILProductType_FanClub           = 5, /// 铁粉
};

NS_ASSUME_NONNULL_BEGIN

@protocol JICLModuleProductModel;

@interface JICLModulePayModel : JICLiveModuleBaseModel


/// 支付类型（1：苹果 2：Paypal，3：Google Play，4：信用卡，5：CashU，6：Coda pay，7：huawei pay，8：Stripe，9：Apple pay，10：PAYERMAX_KNET，11：PAYERMAX_MADA）
/// 商品
/// 标题
/// 统计系数*10000
/// 支付URL后缀
@property (nonatomic, strong) NSString *jib_payUrlSuffix;
@property (nonatomic, assign) NSInteger jib_coefficient;
@property (nonatomic, assign) NSInteger jib_payType;
@property (nonatomic, strong) NSArray <JICLModuleProductModel> *jib_products;
@property (nonatomic, strong) NSString *jib_title;
@end

@interface JICLModuleProductModel : JICLiveModuleBaseModel


/// 产品id
/// 美元价格（原价）
/// 基础数量
/// 是否已经购买
/// 赠送数量
/// 美元价格
/// 商品类型
@property (nonatomic, assign) NSInteger jib_baseCount;
@property (nonatomic, assign) NSInteger jib_extraCount;
@property (nonatomic, strong) NSString *jib_productId;
@property (nonatomic, assign) BOOL jib_isBought;
@property (nonatomic, assign) double jib_oriPriceUSD;
@property (nonatomic, assign) double jib_priceUSD;
@property (nonatomic, assign) JILProductType jib_productType;
@end

@interface JICLModulePayOtherInfoModel : NSObject


/// 主播ID
/// 支付类型
@property (nonatomic, assign) NSInteger jip_hostID;
@property (nonatomic, assign) JILOutDataSourcePayType jip_payType;
@end

NS_ASSUME_NONNULL_END
