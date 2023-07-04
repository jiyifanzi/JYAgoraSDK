
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JITextView : UITextView


@property(nonatomic,copy)void(^textChangeBlock)(NSString *text);
@property(nonatomic,copy)NSString *ji_placeholder;
@property(nonatomic,strong)UIFont *ji_placeholderFont;
@property(nonatomic,strong)UIColor *ji_placeholderColor;
@property(nonatomic,assign)NSInteger ji_maxWords;
@end

NS_ASSUME_NONNULL_END
