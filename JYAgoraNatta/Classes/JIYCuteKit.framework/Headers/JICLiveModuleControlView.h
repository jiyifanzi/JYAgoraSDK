

#import "JICLiveModuleBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLiveModuleControlView : JICLiveModuleBaseView




/// 更新观众列表
/// 键盘弹起更新消息frame
- (void)jif_updateMemberList:(NSMutableArray *)memberList;
- (void)jif_updateFrameWhenKeyboardChanged:(CGFloat)bottomHeight changeType:(JILModuleChangeInputViewHeightType)changeType;
@property (nonatomic, weak) id <JICLiveModuleBaseViewDelegate> controlDelegate;
@end

NS_ASSUME_NONNULL_END
