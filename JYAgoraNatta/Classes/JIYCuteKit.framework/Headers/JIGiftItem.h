
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^JIGiftItemVoidBlock) (void);
@interface JIGiftItem : UICollectionViewCell




@property (nonatomic, copy) JIGiftItemVoidBlock jip_sendGiftBlock;
@property (nonatomic, strong) JICLModuleGiftInfoModel * jip_ggModel;
@property (nonatomic, assign) BOOL jip_isSvv;
@end

NS_ASSUME_NONNULL_END
