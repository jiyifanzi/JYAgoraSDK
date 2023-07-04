
#import <UIKit/UIKit.h>
#import "JIHostBossSeatView.h"
#import "JIAnchorSeatView.h"

NS_ASSUME_NONNULL_BEGIN

@protocol JIAllSeatViewDelegate <NSObject>
@required

- (void)ji_bossSeatTapView;
- (void)ji_anchorViewClicked:(JIChatRoomAnchorModel *)model;

- (void)ji_hostSeatTapVideoView;


@end


@interface JIAllSeatView : UIView










- (void)ji_clearLoadModel;
- (void)ji_loadHostModel:(JIChatRoomModel *)model;
- (void)ji_loadModel:(JIChatRoomModel * _Nullable)model;
@property (nonatomic, strong, readonly) NSMutableArray <JIAnchorSeatView *>* anchorViewArray;
@property (nonatomic, strong, readonly) JIHostBossSeatView * hostView;
@property (nonatomic, strong, readonly) NSMutableArray <JIChatRoomAnchorModel *>* anchorArray;
@property (nonatomic, weak) id<JIAllSeatViewDelegate> delegate;
@property (nonatomic, strong, readonly) JIHostBossSeatView * bossView;
@property (nonatomic, copy) void (^panScrollBlock)(BOOL end, CGPoint point);
@end

NS_ASSUME_NONNULL_END
