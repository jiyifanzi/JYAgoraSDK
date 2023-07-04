
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIBossAuthorView : UIView




- (void)ji_show;
@property (nonatomic, copy) void (^joinBlock)(void);
@end


@interface JIBossAuthorInfoCell : UIView


- (void)ji_loadInfo:(NSString *)ji_info;
@end

@interface JIBossAuthorSwitchCell : UIView




- (void)ji_isOn:(BOOL)ji_isOn swithcEnable:(BOOL)enable;
- (void)ji_loadTitle:(NSString *)ji_title imageName:(NSString *)ji_imageName;
@property (nonatomic, copy) void (^switchChangeBlock)(BOOL isOn);
@end

NS_ASSUME_NONNULL_END
