
#ifndef JICMacroDef_h
#define JICMacroDef_h

#import "JICUtil.h"
#import "JICLMoudleCompressionTool.h"

#define kJILGilroyRegularFont(s) [JICLMoudleCompressionTool jif_getCorrespondFontWith:@"gilroy-regular" andSize:s]
#define kJILGilroyMediumFont(s) [JICLMoudleCompressionTool jif_getCorrespondFontWith:@"gilroy-Medium" andSize:s]
#define kJILGilroyBoldFont(s) [JICLMoudleCompressionTool jif_getCorrespondFontWith:@"gilroy-bold" andSize:s]
#define kJILGilroyExtraBoldItalicFont(s) [JICLMoudleCompressionTool jif_getCorrespondFontWith:@"gilroy-ExtraBoldItalic" andSize:s]

/// 宽高
#define kJILScreenWidth [UIScreen mainScreen].bounds.size.width
#define kJILScreenHeight [UIScreen mainScreen].bounds.size.height
#define kJILStatusBarHeight [[UIApplication sharedApplication] statusBarFrame].size.height
#define kJILIPhoneBottomHeight ([JICUtil jif_isIPhoneX] ? 34 : 0)
#define kJILScreenBounds     [UIScreen mainScreen].bounds

/// 屏幕适配
#define kJILWidthScale(float) (float * kJILScreenWidth/375)
#define kJILHeightScale(float) (float * kJILScreenHeight/667)

/// 颜色
#define kJILColorFromRGB(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define kJILColorFromRGBA(rgbValue, aValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:aValue]

#define kJILLocalString(_key) [_key jif_localString]

#define kJILLocalBundle [NSBundle mainBundle]

/// 弱引用
#define kJILWeakSelf __weak typeof(self) weakSelf = self;

#define kJILStrongSelf     __strong __typeof(weakSelf) strongSelf = weakSelf;

/** 资源zip包名 */
#define kJILZipName @"ji_resources"

/** 解压密码 */
#define kJILRecourcePW @"123456"

/** 解压后的资源文件夹名 */
#define kJILResourceName @"ji_downloadResource"

/** 多语言文件夹（在zip包里面）*/
#define kJILStringFileInZip @"localString"

#define kJILDownloadPath [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject]
#define kJILDownloadPathPag      [kJILDownloadPath stringByAppendingString:@"/jil_localPag"]

#endif /* JICMacroDef_h */
