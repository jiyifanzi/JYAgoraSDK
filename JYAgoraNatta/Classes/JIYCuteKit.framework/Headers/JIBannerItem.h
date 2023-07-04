
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class JICLModuleBannerModel;

@protocol JIBannerItemDelegate <NSObject>
@optional

- (void) jif_bannerItemClick:(NSInteger)index;
@required

@end

@interface JIBannerItem : UICollectionViewCell




- (void)jif_updateModel:(JICLModuleBannerModel *)model;
@property (nonatomic, assign) NSInteger jip_index;
@property (nonatomic, weak) id <JIBannerItemDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
