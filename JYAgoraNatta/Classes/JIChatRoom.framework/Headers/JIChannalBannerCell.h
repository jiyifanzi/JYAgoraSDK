
#import <UIKit/UIKit.h>
#import "JIChannalBannerModel.h"

NS_ASSUME_NONNULL_BEGIN



@interface JIChannalBannerCell : UIView









- (void)ji_loadModel:(JIChannalBannerModel * _Nullable)ji_model;
- (void)ji_cellEnter;
@property (nonatomic, copy) void(^stateChangeBlock)(JIChannalBannerCellState state);
@property (nonatomic, copy) void (^cellWillStayBlock)(  JIChannalBannerModel * ji_bannerModel);
@property (nonatomic, strong) NSString * number;
@property (nonatomic, strong, readonly) JIChannalBannerModel * ji_model;
@property (nonatomic, copy) void (^tapChannalBannerBlock)(JIChannalBannerModel * ji_bannerModel);
@end

NS_ASSUME_NONNULL_END
