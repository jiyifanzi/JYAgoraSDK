

#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleEventLabelModel : JICLiveModuleBaseModel


/// 图标
/// 标题
/// 序号
/// 宽
/// 高
/// 描述
/// 过期时间（从UTC+0时区 2017-01-01 00:00:00 开始到现在的秒数）
@property (nonatomic, assign) NSInteger jib_width;
@property (nonatomic, assign) NSInteger jib_leftTime;
@property (nonatomic, assign) NSInteger jib_height;
@property (nonatomic, copy) NSString *jib_labelTitle;
@property (nonatomic, copy) NSString *jib_labelUrl;
@property (nonatomic, assign) NSInteger jib_index;
@property (nonatomic, copy) NSString *jib_labelTip;
@end

NS_ASSUME_NONNULL_END
