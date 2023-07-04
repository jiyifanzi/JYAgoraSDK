
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JITakePrivateModel : NSObject<NSCopying>














///角色类型（1：用户 2：主播） ,
///开始计时的时间戳 （从UTC+0时区 2017-01-01 00:00:00 开始到现在的秒数） ,
///带走价格 ,
///主播性别（female，male） ,
/// 计费单价
@property (nonatomic, assign) NSInteger ji_anchorId;
@property (nonatomic, assign) NSInteger ji_anchorAge;
@property (nonatomic, assign) NSInteger ji_roomId;
@property (nonatomic, copy) NSString * ji_anchorAvatar;
@property (nonatomic, assign) NSInteger ji_callTime;
@property (nonatomic, assign) BOOL ji_isFollowed;
@property (nonatomic, copy) NSString * ji_userNickName;
@property (nonatomic, assign) NSInteger ji_leftDiamond;
@property (nonatomic, assign) NSInteger ji_takeAnchorPrice;
@property (nonatomic, assign) NSInteger ji_roleType;
@property (nonatomic, copy) NSString * ji_userAvatar;
@property (nonatomic, assign) NSInteger ji_userId;
@property (nonatomic, copy) NSString * ji_anchorNickName;
@property (nonatomic, assign) NSInteger ji_initialPrice;
@property (nonatomic, copy) NSString * ji_anchorGender;
@end

NS_ASSUME_NONNULL_END
