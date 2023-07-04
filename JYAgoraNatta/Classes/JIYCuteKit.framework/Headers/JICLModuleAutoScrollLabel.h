
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, AutoScrollDirection) {
    AutoScrollDirectionRight,
    AutoScrollDirectionLeft
};

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleAutoScrollLabel : UIView <UIScrollViewDelegate>











// UILabel properties
/**
 * Initiates auto-scroll, if the label width exceeds the bounds of the scrollview.
 */
/**
 * Lays out the scrollview contents, enabling text scrolling if the text will be clipped.
 * @discussion Uses [scrollLabelIfNeeded] internally.
 */
/**
 * The animation options used when scrolling the UILabels.
 * @discussion UIViewAnimationOptionAllowUserInteraction is always applied to the animations.
 */
/**
 Set the attributed text and refresh labels, if needed.
 */
/**
 * Returns YES, if it is actively scrolling, NO if it has paused or if text is within bounds (disables scrolling).
 */
/**
 * Observes UIApplication state notifications to auto-restart scrolling and watch for
 * orientation changes to refresh the labels.
 * @discussion Must be called to observe the notifications. Calling multiple times will still only
 * register the notifications once.
 */
/**
 * Set the text to the label and refresh labels, if needed.
 * @discussion Useful when you have a situation where you need to layout the scroll label after it's text is set.
 */
/// Scroll speed in pixels per second, defaults to 30
- (void)scrollLabelIfNeeded;
- (void)refreshLabels;
- (void)setText:(nullable NSString *)text refreshLabels:(BOOL)refresh;
- (void)setAttributedText:(nullable NSAttributedString *)theText refreshLabels:(BOOL)refresh;
- (void)observeApplicationNotifications;
@property (nonatomic) AutoScrollDirection scrollDirection;
@property (nonatomic) NSTextAlignment textAlignment; 
@property (nonatomic, copy, nullable) NSString *text;
@property (nonatomic) NSTimeInterval pauseInterval; 
@property (nonatomic, copy, nullable) NSAttributedString *attributedText;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) CGFloat fadeLength; 
@property (nonatomic, strong, nonnull) UIColor *textColor;
@property (nonatomic) NSInteger labelSpacing; 
@property (nonatomic, readonly) BOOL scrolling;
@property (nonatomic) float scrollSpeed;
@property (nonatomic) UIViewAnimationOptions animationOptions;
@property (nonatomic, strong, nullable) UIColor *shadowColor;
@property (nonatomic, strong, nonnull) UIFont *font;
@end

NS_ASSUME_NONNULL_END
