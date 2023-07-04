
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JIBarrageInputViewDelegate <NSObject>
@required
- (void)ji_barrageInputSendText:(NSString *)ji_text;

//发送弹幕

@end



@interface JIBarrageInputView : UIView


-(void)ji_clearText;//清空输入文本
-(void)ji_beginInput;//开始输入内容
@property (nonatomic, weak) id<JIBarrageInputViewDelegate> delegate;
@property(nonatomic,copy)void(^textViewHeightChangeBlock)(CGFloat height);
@end

NS_ASSUME_NONNULL_END
