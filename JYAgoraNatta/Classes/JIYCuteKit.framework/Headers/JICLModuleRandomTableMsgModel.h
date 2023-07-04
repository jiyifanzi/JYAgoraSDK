
#import "JICLiveModuleBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleRandomTableMsgModel : JICLiveModuleBaseModel


/// 是否开启
/// 标题
/// 列表
/// 选择下标
@property (nonatomic, strong) NSString *jib_turnTableTitle;
@property (nonatomic, assign) NSInteger jib_turnTableIsOpen;
@property (nonatomic, strong) NSArray <NSString *> *jib_turnTableInfoList;
@property (nonatomic, assign) NSInteger jib_selectedIndex;
@end

NS_ASSUME_NONNULL_END
