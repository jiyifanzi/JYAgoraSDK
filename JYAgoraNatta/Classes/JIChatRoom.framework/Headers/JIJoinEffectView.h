
#import <UIKit/UIKit.h>
#import "JIJoinEffectModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JIJoinEffectView : UIView





- (void)ji_clearCurrentModel;
- (void)ji_playModel;
- (void)ji_loadModel:(JIJoinEffectModel *)ji_model;
- (void)ji_clear;
@end

NS_ASSUME_NONNULL_END
