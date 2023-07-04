
#import <UIKit/UIKit.h>
#import "JIReprtPhotoModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface JIReportPhotoCollectionViewCell : UICollectionViewCell


@property (nonatomic, copy) void (^deleteBlock)(JIReprtPhotoModel * model);
@property(nonatomic,strong)JIReprtPhotoModel *model;
@end

NS_ASSUME_NONNULL_END
