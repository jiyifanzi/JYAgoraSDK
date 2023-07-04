
#import <Foundation/Foundation.h>
#import "JIAddAlertTool.h"

NS_ASSUME_NONNULL_BEGIN
@class JICLModuleBottomInputView, JICLiveModuleMainView;

typedef NS_ENUM(NSInteger, JICLModuleSubViewClickSendMsgType) {
    JICLModuleSubViewClickSendMsgType_LocalAndRemote    = 1,
    JICLModuleSubViewClickSendMsgType_Local             = 2,
    JICLModuleSubViewClickSendMsgType_Remote            = 3,
    JICLModuleSubViewClickSendMsgType_SendText          = 4
};

typedef NS_ENUM(NSInteger, JICLModuleShowDiscountViewType) {
    JICLModuleShowDiscountViewType_Click        = 1,
    JICLModuleShowDiscountViewType_FirstAuto,
    JICLModuleShowDiscountViewType_SecondAuto,
};

@protocol JICLModuleSubViewClickManagerDelegate <NSObject>
@required
- (void)jif_clickManagerSendMessage:(JICLModuleMessageModel *)message type:(JICLModuleSubViewClickSendMsgType)type;


/// 关闭或者最小化房间
/// 发消息
/// 设置返回手势

/// 更新观众列表

- (void)jif_clickManagerUpdateMemberList:(NSArray *)list;
- (void)jif_clickManagerCloseOrChangeFloatState;
/// 点击对方房间
- (void)jif_clickManagerConfigPopGestureRecognizer:(BOOL)isEnable;
- (void)jif_clickManagerEnterOtherAnchorRoom;


@end

@interface JICLModuleSubViewClickManager : NSObject <JICLiveModuleBaseViewDelegate, JIAddAlerToolDelegate>

















/// 清理所有数据
/// 关闭私聊带走弹窗
/// 是否送过礼物
/// 输入框
/// 代理
/// 内购模型(最便宜的那个)
/// 展示充值优惠弹窗
/// 是否送过礼物
/// 更新带走礼物
/// 更新目标视图
/// 数据源
/// 是否发过消息
/// 目标视图（也就是直播间VC.view）
/// 点击事件视图
/// 更新观众列表
/// 移除定时器
- (void)jif_updateMemberList:(NSMutableArray *)memberList;
- (void)jif_updatePrivateGift:(NSInteger)giftID;
- (void)jif_clearAllData;
- (void)jif_closePrivateChatView;
- (void)jif_updateGoal:(JICLModuleRoomGoalModel *)model;
- (void)jif_removeTimer;
- (void)jif_showDiscountAlertView:(JICLModuleShowDiscountViewType)showType;
@property (nonatomic, weak) id <JICLModuleSubManagerDataSource> dataSource;
@property (nonatomic, weak) id <JICLModuleSubViewClickManagerDelegate> delegate;
@property (nonatomic, weak) JICLModuleBottomInputView *jip_inputView;
@property (nonatomic, weak) JICLiveModuleMainView *jip_controlView;
@property (nonatomic, weak) UIView *jip_targetView;
@property (nonatomic, strong) JICLModuleProductModel *jip_productModel;
@property (nonatomic, assign) BOOL jip_hasSwitchRoom;
@property (nonatomic, assign) BOOL jip_isSendMsg;
@property (nonatomic, assign) BOOL jip_isSendGift;
@end

NS_ASSUME_NONNULL_END
