
#import <UIKit/UIKit.h>
#import "JICategoryBaseCellModel.h"
#import "JICategoryViewAnimator.h"
#import "JICategoryViewDefines.h"

@interface JICategoryBaseCell : UICollectionViewCell







- (void)ji_addSelectedAnimationBlock:(JICategoryCellSelectedAnimationBlock)block;
- (void)reloadData:(JICategoryBaseCellModel *)cellModel NS_REQUIRES_SUPER;
- (void)ji_startSelectedAnimationIfNeeded:(JICategoryBaseCellModel *)cellModel;
- (BOOL)ji_checkCanStartSelectedAnimation:(JICategoryBaseCellModel *)cellModel;
- (void)ji_initializeViews NS_REQUIRES_SUPER;
@property (nonatomic, strong, readonly) JICategoryBaseCellModel *cellModel;
@property (nonatomic, strong, readonly) JICategoryViewAnimator *animator;
@end
