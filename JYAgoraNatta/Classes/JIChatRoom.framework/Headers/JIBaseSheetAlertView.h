
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIBaseSheetAlertView : UIView

//视图消失block
//点击背景是否可以关闭弹窗，默认可以关闭
//点击背景事件方法
//内容视图高度，不设置则通过约束撑起
-(void)ji_show:(BOOL)ji_animate;
-(void)ji_respontocancle;
-(void)ji_show:(BOOL)ji_animate withShowView:(UIView*)ji_view;
-(void)ji_dissmis:(BOOL)ji_animate;
@property(nonatomic,strong)UIView *contentView;
@property(nonatomic,copy)void(^viewDismissBlock)(void);
@property(nonatomic,assign)CGFloat contentViewHeight;
@property (nonatomic) BOOL removeOnTouchOutside;
@end

NS_ASSUME_NONNULL_END
