
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIGamePopView : UIView








- (void)ji_hide;
- (void)ji_close;
- (void)ji_big;
- (void)ji_loadModel:(JIGameItemModel *)ji_model initBig:(BOOL)ji_initBig;
- (void)ji_mini;
@property (nonatomic, copy) void (^showBlock)(void);
@property (nonatomic, strong, readonly) JIGameItemModel * game;
@end

NS_ASSUME_NONNULL_END
