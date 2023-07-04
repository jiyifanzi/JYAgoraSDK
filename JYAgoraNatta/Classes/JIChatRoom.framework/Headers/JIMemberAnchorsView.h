
#import <UIKit/UIKit.h>
#import "JICategoryView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JIMemberAnchorsView : UIView<JICategoryListContentViewDelegate>


- (void)ji_loadDataArray:(NSArray<JIChatRoomMemberModel *> *)members;
@end

NS_ASSUME_NONNULL_END
