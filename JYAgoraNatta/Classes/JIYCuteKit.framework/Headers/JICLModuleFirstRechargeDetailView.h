
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JICLModuleFirstRechargeDetailType) {
    JICLModuleFirstRechargeDetailType_Coin  = 1,
    JICLModuleFirstRechargeDetailType_Vip   = 2
};

@interface JICLModuleFirstRechargeDetailView : UIView


- (instancetype)initWithType:(JICLModuleFirstRechargeDetailType)type productModel:(JICLModuleProductModel *)productModel;
@end

NS_ASSUME_NONNULL_END
