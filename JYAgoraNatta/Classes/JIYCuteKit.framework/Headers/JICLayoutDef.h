

#ifndef JICLayoutDef_h
#define JICLayoutDef_h

#pragma mark - 控制层UI
#pragma mark 顶部视图
/// 房间信息视图顶部距离
#define kJILRoomInfoHeaderViewTopMargin (kJILStatusBarHeight + 5)
/// 顶部房间信息视图高度
#define kJILRoomInfoHeaderViewHeight (62)
/// 房间详情宽度
#define kJILDetailRoomWidth (104)
/// 转盘宽高
#define kJILRandomTableSmallWH (60)
/// 转盘y
#define kJILRandomTableSmallY (kJILRoomInfoHeaderViewTopMargin + kJILRoomInfoHeaderViewHeight + 15)

#pragma mark PK
/// PK视频顶部间距
#define kJILPKVideoTopMargin (8)
/// PK视频y
#define kJILPKVideoViewY (kJILRoomInfoHeaderViewTopMargin + kJILRoomInfoHeaderViewHeight + kJILPKVideoTopMargin)
/// PK视频高度
#define kJILPKVideoViewHeight ([JICUtil jif_isIPhoneX] ? 316 : 270)
/// PK进度条高度
#define kJILPKProgressViewHeight (15)
/// PK前三名高度 (顶部间距6 + 座位高度27)
#define kJILPKTopThreeHeight (33)
/// PK总高度
#define kJILPKControlTotalHeight (kJILPKVideoViewHeight + kJILPKProgressViewHeight + kJILPKTopThreeHeight)

#pragma mark 底部视图
/// 底部输入框高度
#define kJILBottomInputHeight (36)
/// 底部输入框间距
#define kJILBottomInputMargin ([JICUtil jif_isIPhoneX] ? 34 : 10)
/// 底部视图总高度
#define kJILBottomTotalHeight (kJILBottomInputHeight + kJILBottomInputMargin)

#pragma mark 弹幕区域容器
/// 礼物弹幕底部间距
#define kJILGiftMessageBottomMargin (18)
/// 礼物弹幕高度
#define kJILGiftMessageHeight (85)
/// 礼物弹幕高度
#define kJILGiftMessageWidth (267)
/// 弹幕容器顶部间距
#define kJILMessageBGViewTopMargin (kJILPKVideoViewY + kJILPKControlTotalHeight + 8)
/// 弹幕容器高度
#define kJILMessageBGViewHeight (kJILScreenHeight - kJILMessageBGViewTopMargin - kJILBottomTotalHeight)
/// 弹幕容器高度（键盘弹起时的高度）
#define kJILMessageBGViewInputShowHeight (140 + 8)
/// 弹幕视图高度
#define kJILMessageViewHeight (kJILMessageBGViewHeight - 8)
/// 弹幕视图宽度
#define kJILMessageViewWidth (kJILScreenWidth - 114)
/// 弹幕视图高度（键盘弹起时的高度）
#define kJILMessageViewInputShowHeight (140)
/// 弹幕文本四周间距
#define kJILMessageTextEdge (UIEdgeInsetsMake(4, 6, 4, 6))
/// 弹幕气泡四周最小间距
#define kJILMessageBubbleMinEdge (UIEdgeInsetsMake(1.5, 12, 1.5, 0))

#pragma mark banner
/// banner宽度
#define kJILBannerWidth (85)
/// banner宽度
#define kJILBannerHeight (105)

#pragma mark 小窗状态下的视频
/// 小窗状态的视频高
#define kJILSmallVideoHeight (160)
/// 小窗状态的视频宽
#define kJILSmallVideoWidth (107)

#endif /* JICLayoutDef_h */
