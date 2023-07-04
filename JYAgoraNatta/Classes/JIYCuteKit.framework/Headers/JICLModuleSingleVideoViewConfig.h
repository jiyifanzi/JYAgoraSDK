
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleSingleVideoViewConfig : NSObject






/// 是否有封面
/// 是否有静音按钮
/// frame
- (instancetype)initWithSizeType:(JILModuleSingleVideoSizeType)sizeType anchorType:(JILModuleSingleVideoAnchorType)anchorType;
@property (nonatomic, assign) CGRect jip_frame;
@property (nonatomic, assign) BOOL jip_hasCover;
@property (nonatomic, assign) BOOL jip_hasMuteIcon;
@end

NS_ASSUME_NONNULL_END
