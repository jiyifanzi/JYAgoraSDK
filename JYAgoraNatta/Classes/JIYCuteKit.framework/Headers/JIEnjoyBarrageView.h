
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JIEnjoyBarrageViewDelegate <NSObject>
@required
/** 发送Hi */

- (void) jif_sayHi;


- (void) jif_clickNickname:(NSInteger)accoundId andType:(JICLModuleMessageUserType)type;
- (void) jif_openSendGiftAlert;
- (void) jif_followHer;
/** 关注当前主播 */
/** 点击弹幕用户名字 */
/** 打开送礼界面 */


@end

@interface JIEnjoyBarrageView : UIView









/** 滑动到底部 */
/**
 添加立即显示的弹幕信息
 @param model 弹幕消息数据
*/
/**
 添加弹幕信息到等待显示池中
 @param model 弹幕消息数据
*/
/**
 新房间RTM链接成功后开始计时操作
*/
/**
 进入新的直播间清理数据
*/
/** 修改弹幕区域frame */
/**
 定时器操作
*/
- (void) jif_addOneBarrageToPoolWith:(JICLModuleMessageModel *)model;
- (void) jif_outsideChangeTableViewFrame;
- (void) jif_addImmediatelyBarrageWith:(JICLModuleMessageModel *)model;
- (void) jif_nextSecondAction;
- (void) jif_joinRoomSuccess;
- (void) jif_cleanData;
- (void) jif_scrollToBottom;
@property (nonatomic, weak) id<JIEnjoyBarrageViewDelegate> jip_delegate;
@end

NS_ASSUME_NONNULL_END
