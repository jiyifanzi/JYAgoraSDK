
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIRTMModel : NSObject






@property (nonatomic, assign) NSInteger opCode;
@property (nonatomic, strong) NSDictionary * data;
@property (nonatomic, copy) NSString * message;
@property (nonatomic, assign) NSInteger subCode;
@property (nonatomic, assign) NSInteger retCode;
@end

@interface JIRTMRoomModel : NSObject
















@property (nonatomic, copy) NSString * roleType;
@property (nonatomic, copy) NSString * initialPrice;
@property (nonatomic, assign) NSInteger callTime;
@property (nonatomic, assign) NSInteger anchorId;
@property (nonatomic, copy) NSString * anchorNickName;
@property (nonatomic, copy) NSString * anchorAvatar;
@property (nonatomic, copy) NSString * anchorGender;
@property (nonatomic, assign) NSInteger leftDiamond;
@property (nonatomic, copy) NSString * anchorAge;
@property (nonatomic, assign) NSInteger userId;
@property (nonatomic, assign) BOOL isFollowed;
@property (nonatomic, assign) BOOL isTruthOrDareOn;
@property (nonatomic, copy) NSString * takeAnchorPrice;
@property (nonatomic, copy) NSString * userNickName;
@property (nonatomic, assign) NSInteger roomId;
@end


@interface JIRTMBossOnMicModel : NSObject



@property (nonatomic, assign) NSInteger roomId;
@property (nonatomic, strong) JIChatRoomBossModel * boss;
@end


@interface JIRTMBossOffMicModel : NSObject



@property (nonatomic, assign) NSInteger roomId;
@property (nonatomic, assign) NSInteger bossAccountId;
@end

NS_ASSUME_NONNULL_END



