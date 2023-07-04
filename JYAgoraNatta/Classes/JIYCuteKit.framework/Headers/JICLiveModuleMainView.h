

#import "JICLiveModuleBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLiveModuleMainView : JICLiveModuleBaseView








/// 键盘弹起更新消息frame
/// 更新PK数据
/// 更新观众列表
/// 送礼
/// 礼物弹窗弹起更新礼物弹幕frame
/// 清空礼物
- (void)jif_updatePKData:(nullable JICLModuleRoomPKDataModel *)pkModel;
- (void)jif_updateFrameWhenKeyboardChanged:(CGFloat)bottomHeight changeType:(JILModuleChangeInputViewHeightType)changeType;
- (void)jif_updateGiftWhenPopGiftView:(CGFloat)viewY;
- (void)jif_updateMemberList:(NSMutableArray *)memberList;
- (void)jif_removeGift;
- (void)jif_receiveGiftMessage:(JICLModuleGiftInfoModel *)model;
@property (nonatomic, weak) id <JICLiveModuleBaseViewDelegate> mainDelegate;
@end

NS_ASSUME_NONNULL_END
