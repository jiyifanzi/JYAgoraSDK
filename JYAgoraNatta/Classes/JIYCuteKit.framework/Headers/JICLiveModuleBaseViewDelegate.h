

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JILModuleBaseViewClickType) {
    JILModuleBaseViewClickType_ShowAudienceList     = 0,
    JILModuleBaseViewClickType_ShowRoomTools,
    JILModuleBaseViewClickType_ShowRechargeView,
    JILModuleBaseViewClickType_ShowGiftList,
    JILModuleBaseViewClickType_ShowTextInput,
    JILModuleBaseViewClickType_EditMedalListView,
    JILModuleBaseViewClickType_ShowPrivateChatView,
    JILModuleBaseViewClickType_EnterOtherRoom,
    JILModuleBaseViewClickType_ClickCloseButton,
    JILModuleBaseViewClickType_ClickDiscountButton,
    JILModuleBaseViewClickType_ClickFanButton,
    JILModuleBaseViewClickType_ClickGameButton,
};

typedef NS_ENUM(NSInteger, JILModuleBaseViewInfoClickType) {
    JILModuleBaseViewInfoClickType_ShowUserDetailView           = 0,
    JILModuleBaseViewInfoClickType_EnterTextChatVC              = 1,
    JILModuleBaseViewInfoClickType_EnterUserDetailVC            = 2,
    JILModuleBaseViewInfoClickType_ShowMedalListView            = 3,
    JILModuleBaseViewInfoClickType_ShowReportUserView           = 4,
    JILModuleBaseViewInfoClickType_ShowPKOtherUserDetailView    = 5,
};

typedef NS_ENUM(NSInteger, JILModuleChangeInputViewHeightType) {
    JILModuleChangeInputViewHeightType_Dismiss      = 1,
    JILModuleChangeInputViewHeightType_Show,
    JILModuleChangeInputViewHeightType_Input,
};

@protocol JICLiveModuleBaseViewDelegate <NSObject>
@required

/// - Parameters:
///   - completion: 完成回调
/// 更新标签
///   - accountID: 主播ID

/// - Parameters:
///   - displayAccountID: 展示ID
/// 展示房间详情
- (void)jif_lModuleBaseViewUpdateLabel:(JICLModuleEventLabelModel *)label;

- (void)jif_lModuleBaseViewClickEvent:(JILModuleBaseViewClickType)clickType;




/// 用户送礼
/// 点击事件（带用户基本信息的点击事件）【注：不同的点击事件合并成一个方法了 用不到的参数就不用 空的话传@""】
- (JICLModuleRoomDetailModel *)jif_lModuleGetCurrentTotalModel;


/// - Parameter clickType: 点击类型


/// 用户发送文字
/// 点击展示PK送礼排行榜
- (void)jif_lModuleBaseViewShowPKRankWithAccountID:(NSInteger)accountID
                                     isOtherAnchor:(BOOL)isOtherAnchor;
///   - accountID: id
///   - isAnchor: 是否是主播
/// 键盘弹起更新高度


- (void)jif_lModuleBaseViewSendGift:(JICLModuleGiftInfoModel *)model;
/// 当前房间模型


/// 点击事件（无需带参数的点击事件）
///   - isFollow: yes-关注 no-取关
- (void)jif_lModuleBaseViewSendText:(NSString *)text;

- (void)jif_lModuleBaseViewShowRoomDetail:(CGFloat)leftMargin;
///   - avatar: 头像
- (void)jif_lModuleBaseViewUpdateKeyboardHeight:(CGFloat)height changeType:(JILModuleChangeInputViewHeightType)changeType;

- (void)jif_lModuleBaseViewClickInfoEvent:(JILModuleBaseViewInfoClickType)clickType
                                accountID:(NSInteger)accountID
                                   avatar:(NSString *)avatar
                                 nickname:(NSString *)nickname
                         displayAccountID:(NSString *)displayAccountID
                                 isAnchor:(BOOL)isAnchor;
///   - nickname: 昵称
///   - clickType: 点击事件
/// 关注/取关主播


- (void)jif_lModuleBaseViewFollowAnchor:(NSInteger)accountID
                               isFollow:(BOOL)isFollow
                             completion:(void(^)(void))completion;
@end

NS_ASSUME_NONNULL_END
