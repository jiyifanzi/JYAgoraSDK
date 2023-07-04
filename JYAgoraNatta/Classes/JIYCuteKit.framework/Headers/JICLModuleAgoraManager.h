
#import <Foundation/Foundation.h>
@class JICLModuleVideoContainerView;
NS_ASSUME_NONNULL_BEGIN

@protocol JICLModuleAgoraManagerDelegate <NSObject>
@required
- (void)jif_roomModuleManagerRTMChannelReceiveMessage:(JICLModuleMessageModel *)message;


/// 收到RTMChannel的房间消息

#pragma mark - RTMChannel相关

@end

@interface JICLModuleAgoraManager : NSObject




#pragma mark - Public

#pragma mark - RTC







#pragma mark - RTMChannel





/// 初始化RTMChannel
/// 获取房间内封禁消息
/// 发送本地消息
/// 代理
/// 切换房间
/// 拉取对面的视频流 并改变大小
/// 发送频道消息
/// 加入房间设置视频（在加入房间接口调成功之后调用）
/// 离开RTM频道
/// 退出RTC房间
/// 数据源
/// 加入RTC房间
/// 视频视图
/// 设置rtc参数(每次进直播间第一次调用)
/// 重置远端的视频画面
/// 停止对面的视频流 并改变大小
- (void)jif_configRTCEngine;
- (void)jif_startOtherRemoteViewAndChangeSize:(JICLModuleRoomPKDataModel *)model;
- (void)jif_sendLocalMsg:(JICLModuleMessageModel *)message;
- (void)jif_enterRTCRoom:(NSString *)channelID;
- (void)jif_setupVideoAfterJoinRoom:(JICLModuleRoomDetailModel *)roomModel;
- (void)jif_leaveRtmChannel;
- (void)jif_stopOtherRemoteViewAndChangeSize;
- (void)jif_getChannelAttWithRoomID:(NSString *)channelID;
- (void)jif_exitRTCRoom;
- (void)jif_setupRTMChannel:(NSString *)channelID todo:(NSString *)todo completion:(void(^)(BOOL success))completion;
- (void)jif_sendMessage:(JICLModuleMessageModel *)message;
- (void)jif_switchRTCRoom:(NSString *)channelID;
- (void)jif_resetRemoteView;
@property (nonatomic, weak) JICLModuleVideoContainerView *jip_videoContainerView;
@property (nonatomic, weak) id <JICLModuleAgoraManagerDelegate> delegate;
@property (nonatomic, weak) id <JICLModuleSubManagerDataSource> dataSource;
@end

NS_ASSUME_NONNULL_END
