
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef UIView *_Nonnull(^JILContentViewBlock)(void);

@interface JICLModuleTextAttachment : NSTextAttachment


/// 内容view
@property (nonatomic, weak, nullable) UIView *jip_contentView;
@property (nonatomic, copy) JILContentViewBlock jip_contentViewBlock;
@end

NS_ASSUME_NONNULL_END
