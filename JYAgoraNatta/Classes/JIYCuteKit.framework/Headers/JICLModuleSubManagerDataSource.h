

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JICLModuleSubManagerDataSource <NSObject>
@required
/// 获取当前房间模型
- (NSMutableArray *)jif_subManagerGetMemberList;
/// 是否显示两个视图

/// 获取当前房间ID
- (BOOL)jif_subManagerIsShowTwoPeople;

- (JICLModuleRoomTotalModel *)jif_subManagerGetCurrentRoomModel;
/// 当前是否被禁言
- (NSInteger)jif_subManagerGetCurrentRoomID;


- (BOOL)jif_subManagerGetIsMute;
/// 获取观众列表


@end

NS_ASSUME_NONNULL_END
