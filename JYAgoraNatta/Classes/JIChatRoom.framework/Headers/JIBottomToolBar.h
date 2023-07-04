
#import <UIKit/UIKit.h>
#import "JIRoomToolAlert.h"
#import "JIBarrageModel.h"
#import "JIBarrageInputView.h"
NS_ASSUME_NONNULL_BEGIN


@protocol JIBottomToolBarDelegate <NSObject>
@required


- (void)ji_bottomBarClickedFastGift;
- (void)ji_bottomBarClickedBoss;

- (void)ji_bottomBarClickedGame;
- (void)ji_bottomBarClickedFans;


@end

@interface JIBottomToolBar : UIView












- (void)ji_clearLoadModel;
- (void)ji_loadGlobalParam:(JIGlobalParam *)ji_globalParam;
- (void)ji_loadModel:(JIChatRoomModel *)ji_model;
- (void)ji_addMessage:(JIBarrageModel *)model;
@property (nonatomic, weak)  id<JIBottomToolBarDelegate>bottomDelegate;
@property(nonatomic, strong, readonly)UIButton * bossBtn;
@property(nonatomic, strong, readonly)UIButton * quickGiftBtn;
@property (nonatomic, weak)  id<JIRoomToolAlertDelegate>toolsDelegate;
@property (nonatomic, weak)  id<JIBarrageInputViewDelegate>inputDelegate;
@end

NS_ASSUME_NONNULL_END
