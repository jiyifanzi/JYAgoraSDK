
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleSingleVideoView : UIView

#pragma mark - Setter

#pragma mark - Getter



/// 改变音频状态(只会在对方幕布上显示)
/// 账号ID
/// 大小类型
/// 主播类型
- (instancetype)initWithSizeType:(JILModuleSingleVideoSizeType)sizeType anchorType:(JILModuleSingleVideoAnchorType)anchorType;
@property (nonatomic, assign, readonly) JILModuleSingleVideoSizeType jip_sizeType;
@property (nonatomic, assign) NSInteger jip_accountID;
@property (nonatomic, assign, readonly) JILModuleSingleVideoAnchorType jip_anchorType;
@property (nonatomic, assign) BOOL jip_isMuted;
@end

NS_ASSUME_NONNULL_END
