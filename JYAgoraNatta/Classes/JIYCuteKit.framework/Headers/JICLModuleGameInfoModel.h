

#import "JICLiveModuleBaseModel.h"
@class JICLModuleGameConfigModel;

NS_ASSUME_NONNULL_BEGIN

@interface JICLModuleGameInfoModel : JICLiveModuleBaseModel





/// 配置
/// 找到默认游戏
/// 遍历出所有开启游戏的数组
/// 是否开启
/// 检查当前游戏是否开启
- (JICLModuleGameConfigModel *)jif_findDefaultGameModel;
- (NSMutableArray *)jif_getAllOpenGame;
- (BOOL)jif_checkGameIsOpen:(NSInteger)gameID;
@property (nonatomic, strong) NSArray <JICLModuleGameConfigModel *> *jib_recoreds;
@property (nonatomic, assign) BOOL jib_enable;
@end

@interface JICLModuleGameConfigModel : JICLiveModuleBaseModel







/// 高宽比
/// 默认游戏：0非默认 1默认
/// 供应商
@property (nonatomic, copy) NSString *jib_gameAdress;
@property (nonatomic, assign) BOOL jib_enable;
@property (nonatomic, copy) NSString *jib_picture;
@property (nonatomic, copy) NSString *jib_sort;
@property (nonatomic, copy) NSString *jib_gameName;
@property (nonatomic, assign) NSInteger jib_supplier;
@property (nonatomic, assign) double jib_rate;
@property (nonatomic, assign) NSInteger jib_defaultGame;
@property (nonatomic, assign) NSInteger jib_gameId;
@end

NS_ASSUME_NONNULL_END
