
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIRoomNoticeDetailView : UIView







///1 、通知 2、进度
- (void)ji_showOnView:(UIView *)ji_superView;
- (void)ji_clearLoadModel;
- (void)ji_hide:(nullable void(^)(void))completion;
- (void)ji_loadModel:(JIChatRoomModel *)ji_model;
@property (nonatomic, assign) NSInteger underType;
@property (nonatomic, copy) void (^sendGiftBlock)(void);
@end

NS_ASSUME_NONNULL_END
