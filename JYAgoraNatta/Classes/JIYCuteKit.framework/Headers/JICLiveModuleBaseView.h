



#import <UIKit/UIKit.h>

typedef void(^JILVoidBlock)(void);
typedef void(^JILTextBlock) (NSString * __nullable stringValue);
NS_ASSUME_NONNULL_BEGIN

@interface JICLiveModuleBaseView : UIView





/// 注：当更新页面数据的时候 基本都是用上一个方法 当有些事件是特殊的时间点需要做的时候 再调用这个方法。
/// 是否需要检查点击事件（PK视图使用 用于穿透点击事件）
/// 处理事件(触发事件)
/// 刷新房间数据(数据相关的更新 都通过模型更新)
- (void)jif_updateRoomData:(JICLModuleRoomTotalModel *)model;
- (void)jif_dealWithEvent:(JILModuleEventType)type obj:(NSObject * __nullable)obj;
@property (nonatomic, assign) BOOL jip_needCheckTapPoint;
@property (nonatomic, weak) id <JICLiveModuleBaseViewDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
