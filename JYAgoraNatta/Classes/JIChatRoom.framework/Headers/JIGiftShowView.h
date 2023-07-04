

#import <UIKit/UIKit.h>

@class JIGiftModel;
typedef void(^completeShowViewBlock)(BOOL finished,NSString *giftKey);

typedef void(^completeShowViewKeyBlock)(JIGiftModel *giftModel);

static const CGFloat showGiftView_H = 38; //视图高度

@interface JIGiftShowView : UIView




/** name */
/** giftName */
/** 礼物数 */
/** block */
/** 当前礼物总数 */
/**
 展示礼物动效

 @param ji_giftModel 礼物的数据
 @param ji_completeBlock 展示完毕回调
 */
/** 返回当前礼物的唯一key */
/**
 隐藏礼物
 */
/** icon */
/** 背景 */
/** model */
/** count */
/** giftImage */
/** x */
- (void)ji_showGiftShowViewWithModel:(JIGiftModel *)ji_giftModel
                    completeBlock:(completeShowViewBlock)ji_completeBlock;
- (void)ji_hiddenGiftShowView;
@property(nonatomic,strong) UIImageView *giftImageView;
@property(nonatomic,assign) NSInteger giftCount;
@property(nonatomic,strong) UILabel *countLabel;
@property(nonatomic,strong) UIImageView *userIconView;
@property(nonatomic,strong) UILabel *giftNameLabel;
@property(nonatomic,copy)completeShowViewBlock showViewFinishBlock;
@property(nonatomic,strong) JIGiftModel *finishModel;
@property(nonatomic,assign) NSInteger currentGiftCount;
@property(nonatomic,strong) UILabel *xLabel;
@property(nonatomic,strong) UIView *bgView;
@property(nonatomic,strong) UILabel *userNameLabel;
@property(nonatomic,copy)completeShowViewKeyBlock showViewKeyBlock;
@end
