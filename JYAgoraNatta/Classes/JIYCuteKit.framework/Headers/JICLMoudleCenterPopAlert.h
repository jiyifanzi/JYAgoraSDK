
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JICLMoudleCenterPopAlert : UIView




/// 初始化
/// @param anchorID 主播ID
/// @param type 类型
/// @param moreAction 点击更多回调
/// @param targetView 父视图
+ (instancetype)jif_showCenterPopAlert:(NSInteger)type
                              anchorID:(NSInteger)anchorID
                            targetView:(UIView *)targetView
                            moreAction:(void(^)(void))moreAction;
@property (nonatomic, copy) void(^jip_clickedSureBtn)(void);
@end

NS_ASSUME_NONNULL_END
