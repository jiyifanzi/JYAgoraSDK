
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef UIView *_Nonnull(^JIContentViewBlock)(void);

@interface JITextAttachment : NSTextAttachment

/// 内容view
@property (nonatomic, weak, nullable) UIView *ji_contentView;
@property (nonatomic, copy) JIContentViewBlock ji_contentViewBlock;
@end

NS_ASSUME_NONNULL_END
