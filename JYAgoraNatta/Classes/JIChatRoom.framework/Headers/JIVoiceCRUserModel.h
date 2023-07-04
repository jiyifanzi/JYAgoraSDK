
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIVoiceCRUserModel : NSObject











//（female，male）
//粉丝数
//关注数
//礼物消耗
//活动标签
// 用户等级
//黑名单状态（1：不在黑名单，2：对方在自己的黑名单，3：自己在对方的黑名单，4：相互拉黑） ,
- (NSString *)ji_showMood;
@property (nonatomic, copy) NSArray <NSString *> * ji_eventLables;
@property (nonatomic, assign) NSInteger ji_accountId;
@property (nonatomic, assign) NSInteger ji_giftCost;
@property (nonatomic, assign) NSInteger ji_level;
@property (nonatomic, assign) BOOL ji_isSVip;
@property (nonatomic, copy) NSString * ji_displayAccountId;
@property (nonatomic, copy) NSString * ji_avatar;
@property (nonatomic, assign) NSInteger ji_followers;
@property (nonatomic, copy) NSString * ji_mood;
@property (nonatomic, assign) NSInteger ji_blacklistStatus;
@property (nonatomic, copy) NSString * ji_userName;
@property (nonatomic, assign) BOOL ji_isFollowed;
@property (nonatomic, copy) NSString * ji_gender;
@property (nonatomic, assign) NSInteger ji_followings;
@property (nonatomic, copy) NSString * ji_defaultEventLabel;
@property (nonatomic, assign) NSInteger ji_age;
@end

NS_ASSUME_NONNULL_END
