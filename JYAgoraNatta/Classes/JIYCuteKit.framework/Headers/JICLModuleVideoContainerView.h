

#import <UIKit/UIKit.h>
#import "JICLModuleVideoPreview.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleVideoContainerView : UIView






/// 自动更新视频大小（在内部判断是两个人还是一个人）
/// 是否是小窗状态
/// 改变状态
/// 对方主播的视频视图
/// 更新视频大小
/// 自己主播的视频视图
/// 初始frame
/// 数据源
/// 当前房间状态
- (void)jif_changeVideoSize:(BOOL)isPKState;
- (CGRect)jif_getViewWindowStartFrame;
- (void)jif_audoChangeVideoSize;
- (void)jif_changeFloatState:(BOOL)isFloatState;
@property (nonatomic, weak) id <JICLModuleSubManagerDataSource> dataSource;
@property (nonatomic, strong, readonly) JICLModuleVideoPreview *jip_otherAnchorView;
@property (nonatomic, assign) JILModuleRoomStateType jip_roomStatus;
@property (nonatomic, assign) BOOL jip_isFloatState;
@property (nonatomic, strong, readonly) JICLModuleVideoPreview *jip_mineAnchorView;
@end

NS_ASSUME_NONNULL_END
