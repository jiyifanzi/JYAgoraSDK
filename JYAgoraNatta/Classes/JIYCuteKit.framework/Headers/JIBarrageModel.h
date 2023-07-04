
#import <Foundation/Foundation.h>
@class JIBarrageModel;
NS_ASSUME_NONNULL_BEGIN

@protocol JIBarrageModelDelegate <NSObject>
@required

/// 刷新文案
- (void)jif_refreshLabel:(JIBarrageModel *)model;

- (void)jif_refreshNameFrame:(CGRect)frame model:(JIBarrageModel *)model;

/// 刷新昵称按钮frame
@end

@interface JIBarrageModel : NSObject





/// cell高度
/// 模型
/// 标签位置
/// 刷新UI
/// 代理
/// 气泡位置
/// 背景颜色
/// 富文本
/// 用户按钮位置
/// 标签是否加载
//- (void)jif_refreshMedal:(UIImage *)medalImage;
/// 刷新姓名位置
- (instancetype)initWithModel:(JICLModuleMessageModel *)model;
@property (nonatomic, weak) id <JIBarrageModelDelegate> delegate;
@property (nonatomic, assign) CGRect jip_userButtonFrame;
@property (nonatomic, copy) void(^refreshNameFrameBlock)(CGRect nameFrame);
@property (nonatomic, strong) UIColor *jip_bgColor;
@property (nonatomic, strong) NSMutableAttributedString *jip_atr;
@property (nonatomic, assign) CGRect jip_medalFrame;
@property (nonatomic, strong) JICLModuleMessageModel *jip_msgModel;
@property (nonatomic, assign) CGFloat jip_cellHeight;
@property (nonatomic, assign) BOOL jip_medalHasLoad;
@property (nonatomic, copy) void(^refreshUIBlock)(void);
@property (nonatomic, assign) CGRect jip_bubbleFrame;
@end

NS_ASSUME_NONNULL_END
