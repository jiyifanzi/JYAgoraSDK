
#import <UIKit/UIKit.h>
#import "JICLModuleBroadcastModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleBroadcastCell : UIView







- (void)jif_cellEnter;
- (void)jif_loadModel:(JICLModuleBroadcastModel *)jip_model;
@property (nonatomic, strong, readonly) JICLModuleBroadcastModel * jip_model;
@property (nonatomic, copy) void (^tapChannalBannerBlock)(JICLModuleBroadcastModel * jip_bannerModel);
@property (nonatomic, copy) void (^cellWillStayBlock)(JICLModuleBroadcastModel * jip_bannerModel);
@property (nonatomic, copy) void(^stateChangeBlock)(JILBroadcastCellState state);
@end

NS_ASSUME_NONNULL_END
