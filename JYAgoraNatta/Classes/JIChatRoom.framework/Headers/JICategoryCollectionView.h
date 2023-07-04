
#import <UIKit/UIKit.h>
#import "JICategoryIndicatorProtocol.h"
@class JICategoryCollectionView;

@protocol JICategoryCollectionViewGestureDelegate <NSObject>
@optional
- (BOOL)znb_categoryCollectionView:(JICategoryCollectionView *)collectionView gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer;
- (BOOL)znb_categoryCollectionView:(JICategoryCollectionView *)collectionView gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer;
@end

@interface JICategoryCollectionView : UICollectionView


@property (nonatomic, weak) id<JICategoryCollectionViewGestureDelegate> gestureDelegate;
@property (nonatomic, strong) NSArray <UIView<JICategoryIndicatorProtocol> *> *indicators;
@end
