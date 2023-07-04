
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleGamePopView : UIView









- (void)jif_mini;
- (void)jif_big;
- (void)jif_close;
- (void)jif_loadModel:(JICLModuleGameConfigModel *)jip_model initBig:(BOOL)jip_initBig;
- (void)jif_hide;
@property (nonatomic, copy) void (^showBlock)(void);
@property (nonatomic, strong, readonly) JICLModuleGameConfigModel *game;
@end

NS_ASSUME_NONNULL_END
