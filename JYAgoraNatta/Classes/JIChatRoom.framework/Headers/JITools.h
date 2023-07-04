
#import <Foundation/Foundation.h>
#import "JIUserMedalListView.h"

NS_ASSUME_NONNULL_BEGIN
@interface JITools : NSObject

///展示自己的弹幕标签列表
///主播/用户资料弹窗
///带走她弹窗
///展示他人的弹幕标签列表
+(void)ji_showMemberInfo:(JIChatRoomMemberModel *)ji_model;
+(void)ji_showUserMedalList:(NSInteger)ji_accountId;
+(void)ji_takeHerAlert:(JIChatRoomAnchorModel *)model takeAnchor:(void(^)(void))block;
+(void)ji_showSelfMedalList:(JIMedalChooseBlock)chooseBlock canEdit:(BOOL)editEnable;
@end

NS_ASSUME_NONNULL_END
