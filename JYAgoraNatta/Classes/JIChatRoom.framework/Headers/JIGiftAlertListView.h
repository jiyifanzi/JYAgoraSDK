
#import <UIKit/UIKit.h>
#import "JICategoryView.h"
@class JIGiftPageListView;
NS_ASSUME_NONNULL_BEGIN

@interface JIGiftAlertListView : UIView<JICategoryListContentViewDelegate>


- (void)ji_loadGifts:(NSArray <JIGiftConfigModel *> *)ji_gifts isSvip:(BOOL)ji_svip;
@end


@interface JIGiftPageListView : UIView<JICategoryListContentViewDelegate>


- (void)ji_loadGifts:(NSArray <JIGiftConfigModel *> *)ji_gifts isSvip:(BOOL)ji_svip;
@end
NS_ASSUME_NONNULL_END
