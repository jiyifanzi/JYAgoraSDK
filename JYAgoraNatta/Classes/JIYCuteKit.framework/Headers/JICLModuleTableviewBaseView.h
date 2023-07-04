
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JICTapClickBaseTableViewDelegate <NSObject>
@required


- (void)jif_tapClickBaseTabelViewClickTouchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event;
@end

@interface JICLModuleTableviewBaseView : UITableView


@property (nonatomic, weak) id <JICTapClickBaseTableViewDelegate> jip_tapDelegate;
@end

NS_ASSUME_NONNULL_END
