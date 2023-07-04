
#import <UIKit/UIKit.h>
@class JICLModuleRandomTableColorModel, JICLModuleRandomTableViewModel;

#define JILDegress2Radians(degrees) ((M_PI * degrees) / 180)

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleRandomTableColorModel : NSObject



@property (nonatomic, strong) UIColor *jip_endColor;
@property (nonatomic, strong) UIColor *jip_startColor;
@end

@interface JICLModuleRandomTableViewModel : NSObject






@property (nonatomic, copy) NSString *jip_remark;
@property (nonatomic, assign) int jip_num;
@property (nonatomic, assign) int jip_index;
@property (nonatomic, copy) NSString *jip_imageName;
@property (nonatomic, assign) int jip_displayIndex;
@end


@interface JICLModuleRandomTableView : UIView











- (void)jif_ramdomTabelToDisplayIndex:(NSInteger)displayIndex;
@property (nonatomic, strong) NSDictionary *jip_attributes;
@property (nonatomic, strong) NSArray <JICLModuleRandomTableColorModel *> *jip_panBgGradientColors;
@property (nonatomic, assign) CGFloat jip_textPadding;
@property (nonatomic, strong) NSArray <JICLModuleRandomTableViewModel *> *jip_luckyItemArray;
@property (nonatomic, assign) CGSize jip_imageSize;
@property (nonatomic, strong) NSArray <UIColor *> *jip_panBgColors;
@property (nonatomic, assign) CGFloat jip_circleWidth;
@property (nonatomic, copy) void(^lunckyAnimationDidStopBlock)(BOOL flag, JICLModuleRandomTableViewModel *item);
@end



NS_ASSUME_NONNULL_END
