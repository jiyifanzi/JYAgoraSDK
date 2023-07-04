

#import <Foundation/Foundation.h>
#import "JICLModuleApiResponse.h"
#import "JICAPIDef.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^JILApiCompletion)(JICLModuleApiResponse *aResponse, NSError *anError);

@interface JICLModuleRequestApiManager : NSObject




















#pragma mark - 用户相关










/// 获取禁言列表
/// 用户带走主播
///   - aCompletion: 回调
///   - isUGCRoom: 是否是UGC房间
///   - accountID: 账号ID
///   - isUGCRoom: 是否是UGC房间
///   - isUGCRoom: 是否是ugc房间
///   - title: 标签标题
///   - roomID: 房间ID
///   - aCompletion: 回调
/// 获取主播/用户资料
///   - images: 图片
///   - aCompletion: 回调
/// - Parameters:
///   - roomID: 房间ID
///   - isUGCRoom: 是否是UGC房间
///   - aCompletion: 回调
/// - Parameters:
///   - aCompletion: 回调
///   - isBlock: 是否是拉黑
///   - isUGCRoom: 是否是UGC房间
/// - Parameters:
///   - isUGCRoom: 是否是UGC房间
///   - roomID: 房间ID
///   - isAnchor: 是否是主播
///   - accountID: 用户ID
/// 获取视频聊天室列表
///   - aCompletion: 回调
///   - accountID: 账号id
///   - roomID: 房间ID
///   - giftID: 礼物ID
///   - roomID: 房间ID
/// 拉黑用户
///   - aCompletion: 回调
///   - isUGCRoom: 是否是UGC房间
///   - isUGCRoomOwner: 是否是UGC房间房主
///   - aCompletion: 回调
/// 设置默认活动标签
/// - Parameters:
///   - roomID: 房间ID
///   - roomID: 房间id
/// 离开房间
///   - roomID: 房间ID
/// 设置礼物已阅
/// - Parameters:
///   - anchorID: 主播ID
///   - relationID: 相关ID（用户ID/房间ID）
/// 获取活动标签列表
/// - Parameters:
///   - aCompletion: 回调
///   - aCompletion: 回调
/// - Parameters:
/// 获取房间信息
///   - aCompletion: 回调
/// 举报
///   - text: 文案
///   - aCompletion: 回调
/// - Parameters:
///   - aCompletion: 回调
/// - Parameters:
/// - Parameters:
/// - Parameters:
/// - Parameters:
///   - aCompletion: 回调
///   - giftID: 礼物ID
///   - rtcRoomID: 声网roomID
/// 发消息掉接口
///   - content: 内容
/// - Parameters:
///   - aCompletion: 回调
/// - Parameters:
/// - Parameters:
/// 用户送礼
/// 获取PK房间送礼列表
///   - title: 礼物标题
/// 加入房间
+ (void)jif_requestRoomList:(BOOL)isUGCRoom
                 completion:(JILApiCompletion)aCompletion;
+ (void)jif_requestSendText:(NSString *)text
                     roomID:(NSInteger)roomID
                 completion:(JILApiCompletion)aCompletion;
+ (void)jif_requestRoomInfoWithRoomID:(NSInteger)roomID
                            isUGCRoom:(BOOL)isUGCRoom
                           completion:(JILApiCompletion)aCompletion;
+ (void)jif_requestEventLabelList:(NSInteger)accountID completion:(JILApiCompletion)aCompletion;
+ (void)jif_requestSeeGiftWithTitle:(NSString *)title
                         completion:(JILApiCompletion)aCompletion;
+ (void)jif_requestPKTopListWithAnchorID:(NSInteger)anchorID
                                  roomID:(NSInteger)roomID
                              completion:(JILApiCompletion)aCompletion;
+ (void)jif_requestJoinRoomWithHostID:(NSInteger)hostID
                            isUGCRoom:(BOOL)isUGCRoom
                           completion:(JILApiCompletion)aCompletion;
+ (void)jif_requestLeaveRoomWithRoomID:(NSInteger)roomID
                             isUGCRoom:(BOOL)isUGCRoom
                            completion:(JILApiCompletion)aCompletion;
+ (void)jif_requestMutedMembers:(NSString *)rtcRoomID
                      isUGCRoom:(BOOL)isUGCRoom
                     completion:(JILApiCompletion)aCompletion;
+ (void)jif_requestSendGiftWithRoomID:(NSInteger)roomID
                               giftID:(NSInteger)giftID
                            isUGCRoom:(BOOL)isUGCRoom
                           completion:(JILApiCompletion)aCompletion;
+ (void)jif_requestSetDefaultLabel:(NSString *)title completion:(JILApiCompletion)aCompletion;
+ (void)jif_requestAccountInfo:(NSInteger)accountID
                        roomID:(NSInteger)roomID
                      isAnchor:(BOOL)isAnchor
                     isUGCRoom:(BOOL)isUGCRoom
                    completion:(JILApiCompletion)aCompletion;
+ (void)jif_requestBlockUser:(NSInteger)accountID
                     isBlock:(BOOL)isBlock
                  completion:(JILApiCompletion)aCompletion;
+ (void)jif_requestTakeAnchor:(NSInteger)roomID giftID:(NSInteger)giftID completion:(JILApiCompletion)aCompletion;
+ (void)jif_requestReport:(NSInteger)relationID
                  content:(NSString *)content
                   images:(NSArray *)images
           isUGCRoomOwner:(BOOL)isUGCRoomOwner
               completion:(JILApiCompletion)aCompletion;
@end

NS_ASSUME_NONNULL_END
