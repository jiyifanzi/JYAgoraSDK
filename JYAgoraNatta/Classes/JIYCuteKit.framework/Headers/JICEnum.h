
#ifndef JICEnum_h
#define JICEnum_h

#pragma mark - 外部使用
/// 文本信息类型
typedef NS_ENUM(NSInteger, JILOutDataSourceTextInfoType) {
    // ----- 用户信息 -----
    JILOutDataSourceTextInfoType_Nickname = 0,
    JILOutDataSourceTextInfoType_DisplayAccountID,
    JILOutDataSourceTextInfoType_Gender,
    JILOutDataSourceTextInfoType_Avatar,
    JILOutDataSourceTextInfoType_Session,
    
    // ----- 配置信息 -----
    /// 弹幕标签地址 globalParam.defaultEventLabel.imageUrl
    JILOutDataSourceTextInfoType_TagUrl,
    /// 弹幕标签标题 globalParam.defaultEventLabel.title
    JILOutDataSourceTextInfoType_TagTitle,
    /// pk进度条URL globalParam.videoChatRoomConfig.pkScoreFlagUrl
    JILOutDataSourceTextInfoType_PKFlagUrl,
    /// 当前语言[目前只能传两个值 en/ar 传别的也行 但没用]
    JILOutDataSourceTextInfoType_CurrentLanguage,
};

/// 数字信息类型
typedef NS_ENUM(NSInteger, JILOutDataSourceNumInfoType) {
    // ----- 用户信息 -----
    JILOutDataSourceNumInfoType_AccountID = 0,
    JILOutDataSourceNumInfoType_Coins,
    
    // ----- 配置信息 -----
    /// 弹幕标签高度  globalParam.defaultEventLabel.imageHeight
    JILOutDataSourceNumInfoType_TagHeight,
    /// 弹幕标签宽度  globalParam.defaultEventLabel.imageWidth
    JILOutDataSourceNumInfoType_TagWidth,
    /// 弹幕标签剩余时长 globalParam.defaultEventLabel.expirationTime
    JILOutDataSourceNumInfoType_TagExpirationTime
};

/// 浮点信息类型
typedef NS_ENUM(NSInteger, JILOutDataSourceFloatInfoType) {
    /// 用户充值总额（必须为浮点数）
    JILOutDataSourceFloatInfoType_RechargeAmount = 0,
};

/// 数组信息类型（自行转成字典数组。数组里是一个个字典奥！！然后sdk内部再解析成数组）
typedef NS_ENUM(NSInteger, JILOutDataSourceArrayInfoType) {
    /// 支付信息 globalParam.payConfigs（内部显示充值优惠弹窗使用）
    JILOutDataSourceArrayInfoType_PayConfigs = 0,
};

/// 字典信息类型
typedef NS_ENUM(NSInteger, JILOutDataSourceDicInfoType) {
    // ----- 用户信息 -----
    /// 直播间banner列表  globalParam.videoChatRoomConfig.videoChatRoomBannerInfoList
    JILOutDataSourceDicInfoType_BannerList = 0,
    /// 直播间礼物列表 globalParam.videoChatRoomConfig.videoChatRoomGiftConfigs
    JILOutDataSourceDicInfoType_GiftList,
    /// 用户整个信息 一整个account模型（传的时候把非服务端返回的字段最好删了，就那些本地自己加的属性。这个是要字典转json发给主播端那边的）
    JILOutDataSourceDicInfoType_AccountInfo,
    /// 当前游戏信息（传语聊房的）
    JILOutDataSourceDicInfoType_CurrentGameInfo,
};

/// 布尔类型信息
typedef NS_ENUM(NSInteger, JILOutDataSourceBoolInfoType) {
    /// 是否开启在直播间开启私聊功能（都传yes 等做到绿号相关功能问各自组长怎么传）
    JILOutDataSourceBoolInfoType_isOpenPrivateChat = 0,
    /// 是否已经显示引导弹窗（和语聊房通用）
    JILOutDataSourceBoolInfoType_hasShowGuideState,
    /// 是否是绿色账号（默认传NO 等做到绿号相关功能问各自组长怎么传）
    JILOutDataSourceBoolInfoType_isGreenAccount,
    /// 当前语言是否为阿语
    JILOutDataSourceBoolInfoType_isRTL,
    /// 是否仅包含主包（有🐴＋的包传NO 没🐴+的包传YES）
    JILOutDataSourceBoolInfoType_isJustMain,
    /// 是否是svip
    JILOutDataSourceBoolInfoType_isSVIP,
    /// 是否有特权（房间内部消息使用。当用户的privileges 包含4【进场动效】就是有特权 [user.privileges containsObject:@(4)]）
    JILOutDataSourceBoolInfoType_isPrivilege,
    /// 是否关闭广播（和语聊房通用。默认为NO：不关闭广播。YES：关闭广播）
    JILOutDataSourceBoolInfoType_isCloseBroadcast,
    /// 是否开启转盘 globalParam.videoChatRoomConfig.isTurntableFeatureOn
    JILOutDataSourceBoolInfoType_isOpenTurntable,
    /// 是否开启铁粉测试（询问组长自己的包是否开启铁粉测试。有铁粉功能的包：根据服务端返回的来，无铁粉功能：传NO）
    JILOutDataSourceBoolInfoType_isOpenFanClub,
    /// 是否显示过铁粉引导 (有铁粉功能的 正常传值。无铁粉功能的直接传NO)
    JILOutDataSourceBoolInfoType_isShowFanGuide,
    /// 是否展示进场特效。问各自组长是否需要展示。不展示：传NO。要展示传：effectConfig.open（getconfig接口 解密之后）
    JILOutDataSourceBoolInfoType_isShowEntryEffect,
    /// 是否使用主包svg文件。YES：用主包传进来的路径播放svg; NO:sdk内部用url播放
    JILOutDataSourceBoolInfoType_isUseMainSVGPath,
};

/// 弹窗显示类型
typedef NS_ENUM(NSInteger, JILOutDataSourceTopAlertType) {
    // ----- 用户信息 -----
    /// 通知类型
    JILOutDataSourceTopAlertType_Notification = 0,
    /// 成功
    JILOutDataSourceTopAlertType_Success,
    /// 失败
    JILOutDataSourceTopAlertType_Fail,
};

/// 网络类型（目前先按照这个区分，以后或许可能会新增类型）
typedef NS_ENUM(NSInteger, JILOutDataSourceNetworkStateType) {
    // ----- 用户信息 -----
    /// 无网络
    JILOutDataSourceNetworkStateType_NoConnection = 0,
    /// 有网
    JILOutDataSourceNetworkStateType_HaveNetwork,
};

/// 数数埋点类型
typedef NS_ENUM(NSUInteger, JILOutDataSourceThinkingEventType) {
    /// 事件
    JILOutDataSourceThinkingEventType_Event,
    /// 时间
    JILOutDataSourceThinkingEventType_Time,
};

/// firebase埋点类型（搜索Firebase精细化打点表格）
typedef NS_ENUM(NSUInteger, JILOutDataSourceFirebaseEventType) {
    /// 用户支出虚拟货币 事件：kFIREventSpendVirtualCurrency  携带参数：way - @"消耗方式" ; value - @(消耗金币数量)
    JILOutDataSourceFirebaseEventType_SpendCurrency,
};

/// 进入类型
typedef NS_ENUM(NSUInteger, JILOutDataSourceEnterRoomType) {
    /// 未知类型（如果不是以下的类型 就传Unknown，内部就不做埋点）
    JILOutDataSourceEnterRoomType_Unknown,
    /// 首页
    JILOutDataSourceEnterRoomType_HomeList,
    /// 滑动房间（外部不用）
    JILOutDataSourceEnterRoomType_Scroll,
    /// 资料页
    JILOutDataSourceEnterRoomType_Detail,
    /// 头像
    JILOutDataSourceEnterRoomType_Avatar,
    /// 礼物广播
    JILOutDataSourceEnterRoomType_Broadcast,
};

/// App需要用到的权限枚举
typedef NS_ENUM(NSUInteger, JILSystemAuthType) {
    JILSystemAuthTypePhotoLibrary,      //相册
    JILSystemAuthTypeCamera,            //相机
    JILSystemAuthTypeAudio,             //麦克风
};

/// 需要改变的bool类型
typedef NS_ENUM(NSUInteger, JILNeedChangeBoolInfoType) {
    /// 是否关闭广播（YES: 关闭广播 NO: 开启广播）
    JILNeedChangeBoolInfoType_isCloseBroadcast,
    /// 是否显示过滑动引导（直接赋值YES就行）
    JILNeedChangeBoolInfoType_hasShowGuideState,
    /// 是否显示过铁粉引导（和语聊房状态通用 直接赋值YES就行）⚠️ JILOutDataSourceBoolInfoType_isOpenFanClub = yes的包的才处理！
    JILNeedChangeBoolInfoType_hasShowFanGuide
};

/// 支付类型
typedef NS_ENUM(NSUInteger, JILOutDataSourcePayType) {
    /// 内购买金币
    JILOutDataSourcePayType_PGCoins,
    /// 内购买铁粉
    JILOutDataSourcePayType_PGFan
};

/// 性别类型（据说以后有中性 或者 保密啥的，所以这边用枚举值）
typedef NS_ENUM(NSUInteger, JILOutDataSourceGenderType) {
    /// 女性
    JILOutDataSourceGenderType_Female,
    /// 男性
    JILOutDataSourceGenderType_Male,
};

#pragma mark - 内部使用
#pragma mark 服务端返回的数据
/// 房间类型
typedef NS_ENUM(NSInteger, JILModuleRoomStateType) {
    /// 未开播
    JILModuleRoomStateType_NoStart          = 1,
    /// 直播中
    JILModuleRoomStateType_Living           = 2,
    /// 主持人私聊挂起
    JILModuleRoomStateType_PrivateChat      = 3,
    /// 结束
    JILModuleRoomStateType_Finish           = 4,
    /// PK匹配中
    JILModuleRoomStateType_PKMatching       = 5,
    /// PK中
    JILModuleRoomStateType_PKing            = 6,
    /// PK下一场等待中
    JILModuleRoomStateType_WaitNextPKing    = 7,
    /// PK惩罚中
    JILModuleRoomStateType_PKPunishing      = 8,
    /// 挂起
    JILModuleRoomStateType_Waiting          = 9,
};

/// 房间成员类型
typedef NS_ENUM(NSInteger, JILModuleMemberType) {
    /// 用户
    JILModuleMemberType_User    = 1,
    /// 主播
    JILModuleMemberType_Anchor  = 2
};

/// 拉黑状态
typedef NS_ENUM(NSInteger, JILModuleBlackListStatusType) {
    /// 不在黑名单
    JILModuleBlackListStatusType_NoBlock        = 1,
    /// 对方在自己的黑名单
    JILModuleBlackListStatusType_BlockOther     = 2,
    /// 自己在对方的黑名单
    JILModuleBlackListStatusType_OtherBlockMe   = 3,
    /// 相互拉黑
    JILModuleBlackListStatusType_BlockEachOther = 4,
};

/// 房间私聊开关
typedef NS_ENUM(NSInteger, JILModulePrivateChatStatusType) {
    /// 开启
    JILModulePrivateChatStatusType_Open     = 1,
    /// 关闭
    JILModulePrivateChatStatusType_Close    = 2,
};

/// 房间销毁原因
typedef NS_ENUM(NSInteger, JILModuleDestoryReasonType) {
    // ----- 用户信息 -----
    /// 正常关闭
    JILModuleDestoryReasonType_NormalClose  = 1,
    /// 被举报
    JILModuleDestoryReasonType_ReportRoom   = 2,
};

#pragma mark 本地自定义的数据
typedef NS_ENUM(NSInteger, JILModuleEventType) {
    /// 清除所有数据
    JILModuleEventType_ClearAllData         = 1,
    /// 加入房间
    JILModuleEventType_JoinRoom,
    /// PK匹配成功
    JILModuleEventType_PKMatchSuccess,
    /// PK倒计时结束
    JILModuleEventType_PKTimeEnd,
    /// 更新私聊按钮状态
    JILModuleEventType_UpdatePrivateChat,
    /// 目标更新
    JILModuleEventType_UpdateGoal,
    /// 更新标签
    JILModuleEventType_UpdateUserMedal,
    /// 更新优惠按钮
    JILModuleEventType_UpdateDiscountButton,
    /// 更新转盘信息
    JILModuleEventType_UpdateRandomTable,
    /// 更新转盘显示隐藏
    JILModuleEventType_UpdateRandomTableIsShow,
    /// 显示进场动画
    JILModuleEventType_ShowEnterPagEffect
};

/// 单人视频大小类型
typedef NS_ENUM(NSInteger, JILModuleSingleVideoSizeType) {
    /// 全屏单人
    JILModuleSingleVideoSizeType_FullSingle = 1,
    /// 全屏PK
    JILModuleSingleVideoSizeType_FullPK     = 2,
    /// 小窗状态
    JILModuleSingleVideoSizeType_FloatState = 3
};

/// 单人视频主播类型
typedef NS_ENUM(NSInteger, JILModuleSingleVideoAnchorType) {
    /// 己方主播
    JILModuleSingleVideoAnchorType_Mine     = 1,
    /// 对面主播
    JILModuleSingleVideoAnchorType_Other    = 2,
};

#endif /* JICEnum_h */
