
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIPageControl : UIView



 
- (instancetype)initWithFrame:(CGRect)frame andAllPoint:(NSInteger) count;
@property (nonatomic, assign) NSInteger numberPages;
@property (nonatomic, assign) NSInteger currentPage;
@end

NS_ASSUME_NONNULL_END
