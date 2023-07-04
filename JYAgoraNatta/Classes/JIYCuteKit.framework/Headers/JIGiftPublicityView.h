
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIGiftPublicityView : UIView




/**
 进入新的直播间清理数据
*/
/**
 新增礼物消息显示
*/
/**
 定时器
*/
- (void) jif_nextSecond;
- (void) jif_appendOneGiftMessage:(JICLModuleMessageModel *) msg;
- (void) jif_cleanData;
@end

NS_ASSUME_NONNULL_END
