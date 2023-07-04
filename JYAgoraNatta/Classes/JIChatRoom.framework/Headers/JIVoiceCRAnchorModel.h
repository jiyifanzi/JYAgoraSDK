
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIVoiceCRAnchorModel : NSObject










//关注数
//活动标签
///是否关注对方 ,
//粉丝数
//（female，male）
//粉丝数
///主播标签  【HOT：1】，【NewStar: 2】，【官方号：3】，【清纯号：4】
//黑名单状态（1：不在黑名单，2：对方在自己的黑名单，3：自己在对方的黑名单，4：相互拉黑） ,
///主播标签  【HOT：anchorFlag&2>0】，【NewStar: anchorFlag&8>0】，【官方号：anchorFlag&64>0】，【清纯号：anchorFlag&128>0】
//关注数
- (NSInteger)ji_anchorFlagValue;
- (NSString *)ji_showMood;
@property (nonatomic, assign) NSInteger ji_followers;
@property (nonatomic, assign) NSInteger ji_displayAccountId;
@property (nonatomic, assign) NSInteger ji_commentDown;
@property (nonatomic, copy) NSString * ji_avatar;
@property (nonatomic, assign) NSInteger ji_followerings;
@property (nonatomic, assign) BOOL ji_isFollowed;
@property (nonatomic, assign) NSInteger ji_blacklistStatus;
@property (nonatomic, assign) NSInteger ji_anchorFlag;
@property (nonatomic, copy) NSArray <NSString *> * ji_eventLables;
@property (nonatomic, copy) NSString * ji_gender;
@property (nonatomic, assign) NSInteger ji_accountId;
@property (nonatomic, assign) NSInteger ji_age;
@property (nonatomic, assign) NSInteger ji_commentUp;
@property (nonatomic, copy) NSString * ji_anchorName;
@property (nonatomic, copy) NSString * ji_mood;
@property (nonatomic, copy) NSString * ji_defaultEventLabel;
@end

NS_ASSUME_NONNULL_END
