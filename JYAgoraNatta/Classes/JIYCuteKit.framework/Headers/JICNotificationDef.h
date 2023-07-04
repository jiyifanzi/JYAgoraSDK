
#ifndef JICNotificationDef_h
#define JICNotificationDef_h

#pragma mark - 内部接受的通知（外部不用管）
/// 更新用户金币 携带数字 @(userCoins)
#define xyl_user_update_coins @"xyl_user_update_coins"

/*
 用户关注或取关主播
 携带字典 @{    kJILNotificationAccountIDKey : @(主播ID),
            kJILNotificationFollowStateKey : @(followState 最终关注状态的bool值) }
 */
#define xyl_user_operate_follow_anchor @"xyl_user_operate_follow_anchor"

/*
 用户拉黑或者取消拉黑主播
 携带字典 @{    kJILNotificationAccountIDKey : @(主播ID),
             kJILNotificationBlockStateKey : @(blockState 最终拉黑状态的bool值) }
 */
#define xyl_user_operate_block_anchor @"xyl_user_operate_block_anchor"

/// 直播间恢复 携带主播ID
#define xyl_live_room_resume @"xyl_live_room_resume"

/// 清除房间信息通知（用于移除各种视图）
#define xyl_live_clear_room_info @"xyl_live_clear_room_info"

/// 通知浮窗改变大小
#define xyl_live_float_window_change_size @"xyl_live_float_window_change_size"

/// 充值成功
#define xyl_module_recharge_success @"xyl_module_recharge_success"

/// 买svip
#define xyl_module_buy_svip_success @"xyl_module_buy_svip_success"

/*
 买铁粉成功
 携带字典 @{    kJILNotificationAccountIDKey : @(主播ID),
              kJILNotificationFanInfoKey : 铁粉信息字典 }
 */
#define xyl_module_buy_fan_success @"xyl_module_buy_fan_success"

/// 移除banner
#define xyl_module_remove_banner @"xyl_module_remove_banner"

#pragma mark - 通知携带信息的名称
/// 账号id
#define kJILNotificationAccountIDKey @"kJILNotificationAccountIDKey"
/// 关注状态
#define kJILNotificationFollowStateKey @"kJILNotificationFollowStateKey"
/// 拉黑状态
#define kJILNotificationBlockStateKey @"kJILNotificationBlockStateKey"
/// 用户金币
#define kJILNotificationCoinsKey @"kJILNotificationCoinsKey"
/// 铁粉信息
#define kJILNotificationFanInfoKey @"kJILNotificationFanInfoKey"

#endif /* JICNotificationDef_h */
