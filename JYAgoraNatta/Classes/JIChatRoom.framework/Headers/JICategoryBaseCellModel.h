
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "JICategoryViewDefines.h"

@interface JICategoryBaseCellModel : NSObject





@property (nonatomic, assign) CGFloat cellWidthSelectedZoomScale;
@property (nonatomic, assign, getter=isCellWidthZoomEnabled) BOOL cellWidthZoomEnabled;
@property (nonatomic, assign) CGFloat cellSpacing;
@property (nonatomic, assign) NSTimeInterval selectedAnimationDuration;
@property (nonatomic, assign, getter=isSelectedAnimationEnabled) BOOL selectedAnimationEnabled;
@property (nonatomic, assign, getter=isTransitionAnimating) BOOL transitionAnimating;
@property (nonatomic, assign, getter=isSelected) BOOL selected;
@property (nonatomic, assign) JICategoryCellSelectedType selectedType;
@property (nonatomic, assign) CGFloat cellWidthNormalZoomScale;
@property (nonatomic, assign) NSUInteger index;
@property (nonatomic, assign) CGFloat cellWidthCurrentZoomScale;
@property (nonatomic, assign) CGFloat cellWidth;
@end
