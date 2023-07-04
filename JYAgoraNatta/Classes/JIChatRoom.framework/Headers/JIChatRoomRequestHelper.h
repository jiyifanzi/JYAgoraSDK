
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class JIRespondObj;

typedef void(^JIRequestSuccessBlock)(JIRespondObj * responseObj);
typedef void(^JIRequestFailureBlock)(NSString * message);

typedef void(^JIRequestAndRoomIDSuccessBlock)(JIRespondObj * responseObj,NSInteger roomID);
typedef void(^JIRequestAndRoomIDFailureBlock)(NSString * message,NSInteger roomID);

@interface JIChatRoomRequestHelper : NSObject























+ (void)ji_requestSetEventLabelSequence:(NSArray *)labelArray success:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
+ (void)ji_requestJoinChatRoom:(NSInteger)ji_roomId success:(JIRequestAndRoomIDSuccessBlock)ji_success failure:(JIRequestAndRoomIDFailureBlock)ji_failure;
+ (void)ji_requestChatRoomListSuccess:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
+ (instancetype)shared;
+ (void)ji_requestEventLabelListWithAccountId:(NSInteger )ji_accountId Success:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
+ (void)ji_requestLeaveChatRoom:(NSInteger)ji_roomId success:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
+ (void)ji_requestBlockAnchorById:(NSInteger)ji_accountId block:(BOOL)ji_block success:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
+ (void)ji_requestSendGiftRoomId:(NSInteger)ji_roomId anchor:(NSInteger)ji_anchorId giftId:(NSInteger)ji_giftId success:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
+ (void)ji_requestMemberInfoById:(NSInteger)ji_accountId roomId:(NSInteger)ji_roomId success:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
+ (void)ji_requestReportById:(NSInteger)ji_accountId content:(NSString *)ji_content images:(NSArray<NSString *>*)ji_images success:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
+ (void)ji_requestAnchorInfoById:(NSInteger)ji_accountId roomId:(NSInteger)ji_roomId success:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
+ (void)ji_requestSendMessage:(NSInteger)ji_roomId content:(NSString *)ji_content success:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
+ (void)ji_requestSetDefaultEventLabelTitle:(NSString *)ji_title success:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
+ (void)ji_requestBossMicSwitch:(BOOL)isMute roomId:(NSInteger)ji_roomId  success:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
+ (void)ji_requestGiftViewed:(NSString *)ji_title success:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
+ (void)ji_requestFolloingAnchor:(NSInteger)ji_anchorId following:(BOOL)ji_following success:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
+ (void)ji_requestBossDropMic:(NSInteger)ji_roomId success:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
+ (void)ji_requestTakeAnchor:(NSInteger)ji_roomId anchor:(NSInteger)ji_anchorId giftId:(NSInteger)ji_giftId success:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
+ (void)ji_requestChatRoomInfo:(NSInteger)ji_roomId success:(JIRequestAndRoomIDSuccessBlock)ji_success failure:(JIRequestAndRoomIDFailureBlock)ji_failure;
+ (void)ji_requestApplyBeBoss:(NSInteger)ji_roomId success:(JIRequestSuccessBlock)ji_success failure:(JIRequestFailureBlock)ji_failure;
@property (nonatomic, strong) NSMutableArray <NSString *> * requestingAray;
@end


@interface JIRespondObj : NSObject





@property (nonatomic, strong) id  ji_data;
@property (nonatomic, assign) NSInteger ji_retCode;
@property (nonatomic, copy) NSString * ji_responseId;
@property (nonatomic, copy) NSString * ji_message;
@end

NS_ASSUME_NONNULL_END
