
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIConfigeManager : NSObject





















/// - Parameter ji_key: key
//多语言（en/ar/tr）
//en,ar,al
///服务器返回消息多语言
/// 文字多语言
///注册字体
- (BOOL)ji_isArl;
- (void)ji_loadSensitizeWorld;
- (void)ji_registerFontPath:(NSString *)ji_path;
- (NSString *)ji_localizableString:(NSString *)ji_key;
- (void)ji_loadLocalizableDic;
- (NSString *)ji_localizableCode;
+ (instancetype)manager;
- (CGRect)ji_arlTargetRect:(CGRect)targetRect bySuperRect:(CGRect)superRect;
- (NSString *)ji_localizableServerCodeString:(JIRespondObj *)respondObj;
- (NSString *)fromStr;
- (UIFont *)ji_fontWithSize:(CGFloat)ji_size weight:(UIFontWeight)ji_weight;
- (NSString *)ji_desensitizeWorld:(NSString *)ji_world;
@property (nonatomic, assign) JIChatRoomFromType from;
@property (nonatomic, assign) BOOL beFanRemindShow;
@property (nonatomic, copy) NSString * language;
@property (nonatomic, assign) BOOL sliderRemindShow;
@property (nonatomic, assign) BOOL guideShow;
@property (nonatomic, assign) BOOL beBossRemindShow;
@end

NS_ASSUME_NONNULL_END
