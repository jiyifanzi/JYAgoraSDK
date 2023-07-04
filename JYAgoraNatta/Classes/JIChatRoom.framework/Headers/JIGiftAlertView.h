
#import <UIKit/UIKit.h>
#import "JIBaseSheetAlertView.h"
NS_ASSUME_NONNULL_BEGIN

@interface JIGiftAlertView : JIBaseSheetAlertView





///   - ji_anchorArray: 传入host和上麦主播
///   - ji_anchor: host或者anchor
/// 加载数据
/// - Parameters:
///   - ji_gifts: roomInfo的 gifts
- (void)ji_gifts:(NSArray<JIChatRoomGiftModel *>*)ji_gifts andAnchors:(NSArray *)ji_anchorArray atSelectAnchor:(id)ji_anchor;
@end

NS_ASSUME_NONNULL_END
