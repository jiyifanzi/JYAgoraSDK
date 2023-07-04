

#import <UIKit/UIKit.h>
@class JICLiveUserAgeAndGenderConfig;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JICLUserAgeAndGenderViewSizeType) {
    JICLiveUserAgeAndGenderViewSizeType_4018    = 1,
    JICLiveUserAgeAndGenderViewSizeType_3414    = 2
};

@interface JICLiveUserAgeAndGenderView : UIView




/// 更新信息
/// 配置
/// 初始化
- (void)jif_updateGender:(NSString *)gender age:(NSInteger)age;
- (instancetype)initWithType:(JICLUserAgeAndGenderViewSizeType)type;
@property (nonatomic, strong, readonly) JICLiveUserAgeAndGenderConfig *jip_config;
@end

@interface JICLiveUserAgeAndGenderConfig : NSObject



/// 整体大小
/// 性别图标大小
/// 字体大小
/// 性别图标左边距离
/// 视图大小类型
+ (JICLiveUserAgeAndGenderConfig *)jif_configWithType:(JICLUserAgeAndGenderViewSizeType)type;
@property (nonatomic, strong) UIFont *jip_font;
@property (nonatomic, assign) CGSize jip_totalSize;
@property (nonatomic, assign) JICLUserAgeAndGenderViewSizeType jip_sizeType;
@property (nonatomic, assign) CGFloat jip_genderLeftMargin;
@property (nonatomic, assign) CGSize jip_genderSize;
@end

NS_ASSUME_NONNULL_END
