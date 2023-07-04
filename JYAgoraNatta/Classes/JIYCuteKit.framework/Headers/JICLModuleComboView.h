
#import <UIKit/UIKit.h>
@class JICLModuleComboView;
NS_ASSUME_NONNULL_BEGIN

@protocol JICLModuleComboViewDelegate <NSObject>
@required


- (void)jif_comboViewDidFinish:(JICLModuleComboView *)jip_comboView;
@end

@interface JICLModuleComboView : UIView







- (instancetype)initWithIsQuickGift:(BOOL)isQuick numberFont:(UIFont*)font;
- (void)jif_finishCountDown;
- (void)jif_raise;
@property (nonatomic, weak) id<JICLModuleComboViewDelegate> delegate;
@property (nonatomic, assign) NSInteger jip_roomId;
@property (nonatomic, assign) NSInteger jip_giftId;
@end

@interface JICLModuleComboViewManager : NSObject




- (void)jif_removeCurrentComboViewFromSuperView;
+ (instancetype)shared;
- (void)jif_ClickedGift:(NSInteger)jip_giftId roomId:(NSInteger)jip_roomId container:(UIView *)jip_container frame:(CGRect)jip_frame isQuick:(BOOL)jip_isQuick numberFont:(nullable UIFont*)jip_font;
@end

NS_ASSUME_NONNULL_END
