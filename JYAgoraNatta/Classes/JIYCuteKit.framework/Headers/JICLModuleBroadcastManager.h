
#import <Foundation/Foundation.h>
#import "JICLModuleBroadcastCell.h"
#import "JICLModuleBroadcastModel.h"

NS_ASSUME_NONNULL_BEGIN
#define JICBroadcastShared [JICLModuleBroadcastManager manager]

@interface JICLModuleBroadcastManager : NSObject







- (void)jif_leaveRoom;
- (void)jif_setupBannerOnView:(UIView *)view;
- (void)jif_clearBannerData;
- (void)jif_destoryManager;
- (void)jif_addChannalBanner:(JICLModuleBroadcastModel *)jip_model;
+ (instancetype)manager;
@end

NS_ASSUME_NONNULL_END
