
#import <UIKit/UIKit.h>

@interface JIAdBannerView : UIView




/**
 自动翻页 默认 NO
 */
- (void)ji_loadDataArray:(NSArray <JIBannerInfoModel *>*)ji_dataArray;
@property (nonatomic, assign) BOOL autoPage;
@end
