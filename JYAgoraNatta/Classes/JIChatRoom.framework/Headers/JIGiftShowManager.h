

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "JIGiftModel.h"
@class JIGiftModel;
typedef void(^completeBlock)(BOOL finished);
typedef void(^completeShowGifImageBlock)(JIGiftModel *giftModel);

@interface JIGiftShowManager : NSObject





/**
 送礼物(不处理第一次展示当前礼物逻辑)
 
 @param ji_backView 礼物动效展示父view
 @param ji_giftModel 礼物的数据
 @param ji_completeBlock 展示完毕回调
 */
/**
 送礼物(回调第一次展示当前礼物的逻辑)

 @param ji_backView 礼物动效展示父view
 @param ji_giftModel 礼物的数据
 @param ji_completeBlock 展示完毕回调
 @param ji_completeShowGifImageBlock 第一次展示当前礼物的回调(为了显示gif)
 */
+ (instancetype)sharedManager;
- (void)ji_showGiftViewWithBackView:(UIView *)ji_backView
                            info:(JIGiftModel *)ji_giftModel
                   completeBlock:(completeBlock)ji_completeBlock;
- (void)ji_showGiftViewWithBackView:(UIView *)ji_backView
                            info:(JIGiftModel *)ji_giftModel
                   completeBlock:(completeBlock)ji_completeBlock
       completeShowGifImageBlock:(completeShowGifImageBlock)ji_completeShowGifImageBlock;
@end
