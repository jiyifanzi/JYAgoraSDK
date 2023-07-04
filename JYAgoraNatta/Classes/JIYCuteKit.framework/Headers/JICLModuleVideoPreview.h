

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleVideoPreview : UIView









/// 是否是自己观看的主播
/// 是否是PK状态
/// 改变浮窗状态
/// 清空视图
/// 设置封面
/// 获取视频幕布
/// 改变音频状态(只会在对方幕布上显示)
/// 账号ID
- (void)jif_resetView;
- (UIView *)jif_getVideoPreview;
- (void)jif_changeFloatState:(BOOL)isFloat;
- (void)jif_setCover:(NSString *)cover isClean:(BOOL)isClean;
@property (nonatomic, assign) BOOL jip_isMineAnchor;
@property (nonatomic, assign) BOOL jip_isPKState;
@property (nonatomic, assign) NSInteger jip_accountID;
@property (nonatomic, assign) BOOL jip_isMuted;
@end

NS_ASSUME_NONNULL_END
