
#ifndef JIMarco_h
#define JIMarco_h


//屏幕尺寸
#define JIScreenBounds     [UIScreen mainScreen].bounds
#define JIScreenSize       [UIScreen mainScreen].bounds.size
#define JIScreenWidth      [UIScreen mainScreen].bounds.size.width
#define JIScreenHeight     [UIScreen mainScreen].bounds.size.height


#define JIStatusBarHeight [[UIApplication sharedApplication] statusBarFrame].size.height
#define JIIsFullScreen      (JIStatusBarHeight > 20.f)
#define JINaviBarHeight    44.0f
#define JITopSafeHeight    ([[UIApplication sharedApplication] delegate].window.safeAreaInsets.top)
#define JITopHeight        ((JIIsFullScreen ? JITopSafeHeight : JIStatusBarHeight)  + JINaviBarHeight)

#define JIBottomSafeHeight ([[UIApplication sharedApplication] delegate].window.safeAreaInsets.bottom)
#define JITabBarHeight (JIBottomSafeHeight + 49.0f)

#define JIWeakSelf       __weak typeof(self) weakSelf = self;
#define JIStrongSelf     __strong __typeof(weakSelf) strongSelf = weakSelf;


//path
#define JIDownloadDocumentPath [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]
#define JIDownloadIconPath     [JIDownloadDocumentPath stringByAppendingString:@"/ji_icon"]
#define JIDownloadSvgPath      [JIDownloadDocumentPath stringByAppendingString:@"/ji_svg"]
#define JIDownloadFontPath      [JIDownloadDocumentPath stringByAppendingString:@"/ji_font"]
#define JIDownloadStringPath   [JIDownloadDocumentPath stringByAppendingString:@"/ji_string"]
#define JIDownloadPAGPath      [JIDownloadDocumentPath stringByAppendingString:@"/ji_pag"]



//Color
#define JIColorAlphaHex(str,alp) [UIColor ji_hex:str alpha:alp]
#define JIColorHex(str) [UIColor ji_hex:str]

//Localizable

#define JIString(str)  [[JIConfigeManager manager] ji_localizableString: str]

#define JIServer(obj)  [[JIConfigeManager manager] ji_localizableServerCodeString: obj]

// font
#define  JIFont(size,wei)  [[JIConfigeManager manager] ji_fontWithSize:size weight:wei]

//root
#define JI_ROOTVC [UIApplication sharedApplication].keyWindow

#define zbnHelper  [JIChatRoomHelper helper]
#define zbnMManager  [JIManager manager]
#define zbnConfige [JIConfigeManager manager]
#define zbnBanner [JIChannalBannerManager manager]

#define zbnIsAppR2L [zbnConfige ji_isArl]

#define zbnBundle [NSBundle bundleWithPath:[[NSBundle bundleForClass:[JIChatRoomVC class]] pathForResource:@"JIChatRoom" ofType:@"bundle"]]


#define RTCV4 (__has_include(<AgoraRtcKit/AgoraRtcKit.h>))


#ifdef DEBUG

#  define DLog(...) NSLog(__VA_ARGS__)

#  define DLog_CURRENT_METHOD NSLog(@"%@-%@", NSStringFromClass([self class]), NSStringFromSelector(_cmd))

#else

#  define DLog(...) ;

#  define DLog_CURRENT_METHOD ;

#endif


///顶部视图高度
#define JITopViewHeight            67.f
///底部视图高度
#define JIBottomViewHeight         36.f
///顶部和主持人cell间距
#define JITopViewCellSpace         5.f
///主持人和主播cell间距
#define JIHostAnchorCellSpace      5.f
///主播cell宽度
#define JIAnchorCellWidth          (JIScreenWidth / 3.0f)
///主持人cell宽度/高度
#define JIHostBossCellWidth        100.f
///底部视图距离底部安全区域间距
#define JIBottomViewSpace          10.f
///底部视图距离弹幕视图间距
#define JIBottomViewTextSpace      10.f
///弹幕视图高度
#define JITextTableViewHeight      139.f
///弹幕视图和主播cell间距
#define JITextAnchorCellSpace      5.f
///直播视图距离顶部间距
#define JIVideoViewTopSpace        (JIStatusBarHeight + JITopViewHeight + JIHostAnchorCellSpace)
///直播视图距离底部间距
#define JIVideoViewBottomSpace     (JIBottomSafeHeight + JIBottomViewHeight + JIBottomViewSpace + JIBottomViewTextSpace + JITextTableViewHeight + JITextAnchorCellSpace)
///主播视图高度
#define JIAnchorCellHeight         (JIScreenHeight - JIVideoViewTopSpace - JIVideoViewBottomSpace - JIHostBossCellWidth - JIHostAnchorCellSpace )/ 2.0f

#define JISmallSeatViewWidth       64.f

#endif /* JIMarco_h */
