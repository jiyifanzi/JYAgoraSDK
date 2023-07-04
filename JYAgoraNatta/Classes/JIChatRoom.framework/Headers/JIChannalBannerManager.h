
#import <Foundation/Foundation.h>
#import "JIChannalBannerModel.h"
#import "JIChannalBannerCell.h"

NS_ASSUME_NONNULL_BEGIN



@interface JIChannalBannerManager : NSObject










- (void)ji_addChannalBanner:(JIChannalBannerModel *)ji_model;
- (void)ji_leaveRoom;
+ (instancetype)manager;
- (void)ji_clearBannerData;
- (void)ji_joinRoomWithCell:(JIChatRoomCell*)ji_cell;
- (void)ji_destoryManager;
@end

NS_ASSUME_NONNULL_END
