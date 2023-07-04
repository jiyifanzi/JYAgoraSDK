

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class JIComboView;

@protocol JIComboViewDelegate <NSObject>
@required

- (void)ji_comboViewDidFinish:(JIComboView *)ji_comboView;

@end

@interface JIComboView : UIView







- (void)ji_raise;
- (instancetype)initWithIsQuickGift:(BOOL)isQuick numberFont:(UIFont*)font;
- (void)ji_finishCountDown;
@property (nonatomic, assign) NSInteger ji_giftId;
@property (nonatomic, weak) id<JIComboViewDelegate> delegate;
@property (nonatomic, assign) NSInteger ji_roomId;
@end

@interface JIComboViewManager : NSObject




- (void)ji_ClickedGift:(NSInteger)ji_giftId roomId:(NSInteger)ji_roomId container:(UIView *)ji_container frame:(CGRect)ji_frame isQuick:(BOOL)ji_isQuick numberFont:(nullable UIFont*)ji_font;
+ (instancetype)shared;
- (void)ji_removeCurrentComboViewFromSuperView;
@end

NS_ASSUME_NONNULL_END
