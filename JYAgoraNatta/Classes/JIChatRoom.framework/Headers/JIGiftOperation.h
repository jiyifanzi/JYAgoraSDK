

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class JIGiftModel,JIGiftShowView;

typedef void(^completeOpBlock)(BOOL finished,NSString *giftKey);

@interface JIGiftOperation : NSOperation




/** block */
/** showview */
/** 礼物展示的父view */
/** ext */
/**
 增加一个操作

 @param ji_giftShowView 礼物显示的View
 @param ji_backView 礼物要显示在的父view
 @param ji_model 礼物的数据
 @param ji_completeBlock 回调操作结束
 @return 操作
 */
+ (instancetype)ji_addOperationWithView:(JIGiftShowView *)ji_giftShowView
                              OnView:(UIView *)ji_backView
                                Info:(JIGiftModel *)ji_model
                       completeBlock:(completeOpBlock)ji_completeBlock;
@property(nonatomic,copy) completeOpBlock opFinishedBlock;
@property(nonatomic,strong) JIGiftShowView *giftShowView;
@property(nonatomic,strong) JIGiftModel *model;
@property(nonatomic,strong) UIView *backView;
@end
