

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JICLModuleBottomFunctionType) {
    JICLModuleBottomFunctionType_Report = 0,
    JICLModuleBottomFunctionType_More,
    JILModuleSingleVideoSizeType_Fan,
    JICLModuleBottomFunctionType_Game,
    JILModuleSingleVideoSizeType_Recharge,
    JICLModuleBottomFunctionType_FastGift,
};

typedef NS_ENUM(NSInteger, JICLiveRoomToolsSubCellType) {
    JICLiveRoomToolsSubCellType_Recharge = 0,
    JICLiveRoomToolsSubCellType_Broadcast,
};


@interface JICLModuleBottomFunctionManager : NSObject



@property (nonatomic, strong, readonly) NSMutableArray *moreArray;
@property (nonatomic, strong, readonly) NSArray *bottomArray;
@end

NS_ASSUME_NONNULL_END
