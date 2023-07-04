

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JICLiveUserDetailBaseViewClickType) {
    JICLiveUserDetailBaseViewClickType_ShowMedalsView   = 0,
    JICLiveUserDetailBaseViewClickType_Message          = 1,
    JICLiveUserDetailBaseViewClickType_Follow           = 2,
    JICLiveUserDetailBaseViewClickType_Unfollow         = 3,
    JICLiveUserDetailBaseViewClickType_EnterUserDetail  = 4,
    JICLiveUserDetailBaseViewClickType_ShowReportView   = 5,
    JICLiveUserDetailBaseViewClickType_Block            = 6,
    JICLiveUserDetailBaseViewClickType_Unblock          = 7,
};

@protocol JICLiveUserDetailBaseViewDelegate <NSObject>
@required


/// 用户详情子视图点击事件
- (void)jif_liveUserDetailBaseViewClickAction:(JICLiveUserDetailBaseViewClickType)type;
@end

@interface JICLiveUserDetailBaseView : UIView


@property (nonatomic, weak) id <JICLiveUserDetailBaseViewDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
