
#import <Foundation/Foundation.h>
#import "JIChatRoomModel.h"
#import "JIEventLabelModel.h"

@class JIBannerInfoModel,
JIPayConfigModel,
JIProductModel,
JIEffectModel;


NS_ASSUME_NONNULL_BEGIN

@interface JIGlobalParam : NSObject





//语聊房主题 ,
//语聊房主题描述 ,
//三方支付是否开启
//超级VIP金币奖励 ,
//推荐的APP二维码URL
//语音聊天室老板位价格（金币/分钟）
//语音聊天室带走主播的定制礼物Id ,
//语聊房Banner ,
//默认弹幕标签 ,
//语聊房主题图片 ,
//支付配置
//主播外部经纪人列表 ,
//主播每天最低成功Hunting目标数 ,
// 三方支付地址 ,
//Banner信息集合
//语聊房默认目标收入
//聊天价格（金币/1条消息）
//金币与美元的比率= 金币/美元 默认为10 ,
//语音聊天室是否开放 ,
// Web App Url ,
//鉴黄Value ,
//鉴黄key ,
//支持的语言集合 ,（1英语 2阿拉伯 3土耳其 4法语 5意大利 6德语 7西班牙 8荷兰 9俄语 10韩语 11日语 12匈牙利 13葡萄牙 14简体中文 15繁体中文）
//语音聊天室描述
- (JIPayConfigModel *)ji_getApplePayConfig;
- (JIProductModel *)ji_getStanProductModel;
@property (nonatomic, copy) NSArray <JIPayConfigModel *>*payConfigs;
@property (nonatomic, copy) NSString *pornDetectKey;
@property (nonatomic, copy) NSString * voiceChatRoomThemeDesc;
@property (nonatomic, assign) NSInteger diamondUSDRate;
@property (nonatomic, strong) NSArray<JIBannerInfoModel *> *bannerInfoList;
@property (nonatomic, assign) NSInteger sVipDiamondReward;
@property (nonatomic, copy) NSString * babyUrl;
@property (nonatomic, assign) BOOL webPayCondition;
@property (nonatomic, copy) NSArray *agents;
@property (nonatomic, strong) NSArray <JIBannerInfoModel *> *voiceChatRoomBannerInfoList;
@property (nonatomic, strong) NSArray <NSString *> *supportedLanguageList;
@property (nonatomic, copy) NSString *recommendedAppQRUrl;
@property (nonatomic, copy) NSString * voiceChatRoomTheme;
@property (nonatomic, copy) NSString *pornDetectValue;
@property (nonatomic, assign) BOOL isVoiceChatRoomOn;
@property (nonatomic, assign) NSInteger voiceChatRoomBossPrice;
@property (nonatomic, copy) NSString *minSuccessHuntingCount;
@property (nonatomic, copy) NSString * webAppUrl;
@property (nonatomic, copy) NSString * voiceChatRoomThemeImage;
@property (nonatomic, copy) NSString * voiceChatRoomDesc;
@property (nonatomic, strong) JIEventLabelModel * _Nullable defaultEventLabel;
@property (nonatomic, assign) NSInteger chatPriceUser;
@property (nonatomic, strong) NSArray <JIEffectModel *> * usedEquipmentList;
@property (nonatomic, strong) JIGiftConfigModel * voiceChatRoomTakeAnchorGiftCofig;
@property (nonatomic, copy) NSString * voiceChatRoomGoalIncome;
@end

@interface JIBannerInfoModel : NSObject


//图片地址
//redirectAddr
//类型（1:普通跳转，6:新星榜活动入口） ,
@property (nonatomic, copy) NSString *redirectAddr;
@property (nonatomic, copy) NSString *extraData;
@property (nonatomic, copy) NSString *imgAddr;
@property (nonatomic, copy) NSString *type;
@end


@interface JIPayConfigModel : NSObject




///1：apple 2:pp 3 cc
//手续费
@property (nonatomic, copy) NSArray <JIProductModel *>*products;
@property (nonatomic, copy) NSString *payUrlSuffix;
@property (nonatomic, copy) NSString *leftIconUrl;
@property (nonatomic, copy) NSString *coefficient;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *iconUrl;
@property (nonatomic, copy) NSString *type;
@end

@interface JIProductModel : NSObject


 // 产品Id ,
//产品类型（1：一般消耗商品 2：折扣商品 3：续订商品, 5:弹窗商品/new user） ,
 //是否已经购买，用于判
//基础数量 ,
//赠送数量 ,
// 美元价格 ,
@property (nonatomic, copy) NSString *productId;
@property (nonatomic, copy) NSString *productType;
@property (nonatomic, copy) NSString *baseCount;
@property (nonatomic, assign) BOOL isBought;
@property (nonatomic, copy) NSString *oriPriceUSD;
@property (nonatomic, copy) NSString *priceUSD;
@property (nonatomic, copy) NSString *extraCount;
@end


@interface JIUniqueTag : NSObject

// 图表URL ,
// 图表URL ,
//序号
// 过期时间（从UTC+0时区 2017-01-01 00:00:00 开始到现在的秒数） ,
//描述
@property (nonatomic, assign) NSInteger expirationTime;
@property (nonatomic, strong) NSString *desc;
@property (nonatomic, assign) NSInteger timeInterval;
@property (nonatomic, assign) NSInteger sequence;
@property (nonatomic, strong) NSString *imageUrl;
@property (nonatomic, assign) BOOL selected;
@property (nonatomic, strong) NSString *title;
@end

@interface JIEffectModel  : NSObject




@property (nonatomic, copy) NSString * name;
@property (nonatomic, assign) NSInteger  equipmentType;
@property (nonatomic, copy) NSString * equipmentUrl;
@end


NS_ASSUME_NONNULL_END
