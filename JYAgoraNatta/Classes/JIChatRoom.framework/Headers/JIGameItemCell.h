
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIGameItemCell : UICollectionViewCell



- (void)ji_showActivity:(BOOL)ji_show;
@property (nonatomic, strong) JIGameItemModel * model;
@end

NS_ASSUME_NONNULL_END
