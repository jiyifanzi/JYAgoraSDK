
#import <UIKit/UIKit.h>

@class JIRoomHostInfoView,
JIRoomInfoNoticeView,
JIGoalProgressView,
JIChatRoomMemberModel;

NS_ASSUME_NONNULL_BEGIN

@protocol JIRoomInfoViewDelegate <NSObject>
@required


- (void)ji_roomInfoMembersListTap;


- (void)ji_roomInfoHostTap;

- (void)ji_roomInfoMemberTap:(JIChatRoomMemberModel *)ji_model;

@end



@interface JIRoomInfoView : UIView




- (void)ji_loadModel:(JIChatRoomModel *)ji_model;
- (void)ji_clearLoadModel;
@property (nonatomic, weak) id<JIRoomInfoViewDelegate> delegate;
@property (nonatomic, strong, readonly) UIView * collectionBgView;
@end

@interface JIRoomHostInfoView : UIView



- (void)ji_loadModel:(JIChatRoomModel *)ji_model;
- (void)ji_clearLoadModel;
@property (nonatomic, copy) void (^avatarTapBlock)(void);
@end

@interface JIRoomInfoNoticeView : UIView




- (void)ji_clearLoadModel;
- (void)ji_loadNotice:(NSString *)ji_notice;
@property (nonatomic, copy) void (^unfoldView)(void);
@end

@interface JIGoalProgressView : UIView



- (void)ji_loadGoal:(JIChatRoomGoalModel *)ji_goalModel;
- (void)ji_clearLoadModel;
@property (nonatomic, copy) void (^progressTapBlock)(void);
@end

NS_ASSUME_NONNULL_END
