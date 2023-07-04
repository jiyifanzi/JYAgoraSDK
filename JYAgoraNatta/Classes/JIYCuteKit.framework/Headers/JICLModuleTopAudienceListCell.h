

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JICLModuleTopAudienceListCellDelegate <NSObject>
@required
/// 点击头像（fix 点击不走didSelectItemAtIndexPath 估计重写hitTest有问题了 但懒得改）


- (void)jif_topAudienceListCellClickUser:(JICLModuleMemberModel *)model;
@end

@interface JICLModuleTopAudienceListCell : UICollectionViewCell



@property (nonatomic, weak) id <JICLModuleTopAudienceListCellDelegate> delegate;
@property (nonatomic, strong) JICLModuleMemberModel *model;
@end

NS_ASSUME_NONNULL_END
