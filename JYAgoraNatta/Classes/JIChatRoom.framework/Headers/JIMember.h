
#import <Foundation/Foundation.h>

@class JISVipInfo;

NS_ASSUME_NONNULL_BEGIN


@interface JIMember : NSObject













/// 好评
///封面
/// 是否享受第一次充值优惠
/// <#Description#>
/// 申请成为主播的WhatsApp账号
/// 地理位置状态 1：显示 2：隐藏
/// 印度流通货币
/// 客服系统地址
/// 是否被关注
///特效数组
/// 相册
/// <#Description#>
/// 专属客服账号Id
/// 用户类型（1:测试 2：正常 ... 以后可能会变）
/// 粉丝数
///性别
///关注主播数
/// 差评
/// 关注数
/// 专属客服展示Id
///剩余币
/// <#Description#>
/// 线上状态（1:空闲（绿） 2: 勿扰（灰) 3：繁忙(红））
/// 苹果折扣活动商品是否已经购买
///账号ID
/// <#Description#>
///头像
/// 充值总额
/// 是否领过匹配票
/// 登录状态 1：登录（可能绿） 2：登出（灰）
///昵称
/// 心情描述
/// 邮箱
///年龄
/// 超级vip奖励是否已领取
/// 黑名单状态
/// 默认充值方式（1：苹果内购  3：google play 4：信用卡）
/// 是否正在申请主播
///地区
/// <#Description#>
/// 是否已关注她
/// 新注册用户免费通话体验是否已使用
/// 最近一次呼叫时的时间戳 （从UTC时区 2017-01-01 00:00:00 开始到现在的秒数）
/// 6位随机账号Id
///用于登录
@property (nonatomic, assign) BOOL isFreeCallUsed;
@property (nonatomic, assign) float rechargeAmount;
@property (nonatomic, assign) NSInteger blacklistStatus;
@property (nonatomic, assign) CGFloat corverHeight;
@property (nonatomic, assign) BOOL isSVip;
@property (nonatomic, assign) NSInteger loginStatus;
@property (nonatomic, copy) NSString * age;
@property (nonatomic, assign) NSInteger commentDown;
@property (nonatomic, assign) CGFloat corverWidth;
@property (nonatomic, assign) NSInteger followings;
@property (nonatomic, assign) BOOL isGainTicket;
@property (nonatomic, strong) NSArray *bagItem;
@property (nonatomic, assign) NSInteger accountId;
@property (nonatomic, assign) BOOL isFollowed;
@property (nonatomic, copy) NSString * gender;
@property (nonatomic, strong) NSArray <NSString *>*pictures;
@property (nonatomic, copy) NSString * district;
@property (nonatomic, assign) NSInteger followers;
@property (nonatomic, assign) BOOL isIndiaCurrencyOn;
@property (nonatomic, assign) NSInteger coins;
@property (nonatomic, strong) JISVipInfo * svipInfo;
@property (nonatomic, assign) NSInteger level;
@property (nonatomic, assign) BOOL isFirstRechargeDiscountEnjoyed;
@property (nonatomic, assign) BOOL isDiscountBought;
@property (nonatomic, assign) NSInteger latestDrawDailyRewardCount;
@property (nonatomic, assign) BOOL isBeFollowed;
@property (nonatomic, strong) NSArray<NSNumber*>* privileges;
@property (nonatomic, copy) NSString * corver;
@property (nonatomic, assign) NSInteger latestCallTime;
@property (nonatomic, assign) NSInteger customAccountId;
@property (nonatomic, copy) NSString *displayAccountId;
@property (nonatomic, assign) NSInteger abTestFlag;
@property (nonatomic, copy) NSString * nickName;
@property (nonatomic, copy) NSString * password;
@property (nonatomic, copy) NSString * mood;
@property (nonatomic, copy) NSString *levelUpMsg;
@property (nonatomic, assign) NSInteger userType;
@property (nonatomic, assign) NSInteger hideStatus;
@property (nonatomic, assign) NSInteger followedAnchorCount;
@property (nonatomic, assign) NSInteger lineStatus;
@property (nonatomic, assign) NSInteger commentUp;
@property (nonatomic, copy) NSString * avatar;
@property (nonatomic, assign) BOOL isApplyAnchor;
@property (nonatomic, assign) NSInteger districtStatus;
@property (nonatomic, copy) NSString *applyAnchorPhotonNumber;
@property (nonatomic, assign) NSInteger defaultRechargeT;
@property (nonatomic, copy) NSString * email;
@property (nonatomic, strong) NSString *live800ChatUrl;
@property (nonatomic, strong) NSString *customDisplayAccountId;
@property (nonatomic, assign) BOOL isSVipRewardGained;
@end


@interface JISVipInfo : NSObject






///每日奖励
///提醒过期
@property (nonatomic, assign) BOOL isDailyRewardGained;
@property (nonatomic, assign) BOOL isSVipPurchased;
@property (nonatomic, copy) NSString * expirationDate;
@property (nonatomic, assign) BOOL shouldRemindSVipExpired;
@property (nonatomic, assign) BOOL isSVip;
@end



NS_ASSUME_NONNULL_END
