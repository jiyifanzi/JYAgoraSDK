
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleVideoContentView : UIView

#pragma mark - Getter



/// 是否是小窗
- (instancetype)initWithIsSmall:(BOOL)isSmall;
@property (nonatomic, assign, readonly) BOOL jip_isSmall;
@end

NS_ASSUME_NONNULL_END
