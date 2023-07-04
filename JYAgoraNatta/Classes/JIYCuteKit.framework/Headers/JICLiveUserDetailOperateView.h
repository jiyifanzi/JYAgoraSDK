

#import "JICLiveUserDetailBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLiveUserDetailOperateView : JICLiveUserDetailBaseView




/// ID
/// 总体高度
/// 是否关注
- (CGFloat)jif_getHeight;
@property (nonatomic, assign) BOOL jip_isFollow;
@property (nonatomic, assign) NSInteger jip_accountID;
@end

NS_ASSUME_NONNULL_END
