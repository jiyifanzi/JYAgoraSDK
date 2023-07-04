
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIChooseAnchorAlertView : UIView







///选中主播回调
- (void)ji_loadAnchors:(NSArray *)ji_dataArray;
- (void)ji_show:(UIView *)showView;
@property (nonatomic, copy) void (^selectedBlock)(NSInteger index);
@end

NS_ASSUME_NONNULL_END
