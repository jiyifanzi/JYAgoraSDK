

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICLiveReportUploadImageCell : UICollectionViewCell



/** 填充图片 */
- (void)jif_setupPicture:(nullable UIImage *)image;
@property (nonatomic, copy) void(^jip_deleltePicture)(void);
@end

NS_ASSUME_NONNULL_END
