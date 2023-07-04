
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICycleView : UIView





- (void)ji_loadArray:( NSArray<UIImageView *>* _Nullable)ji_array;
@property (nonatomic, copy) void (^tapActionBlock)(NSInteger index);
@end

NS_ASSUME_NONNULL_END
