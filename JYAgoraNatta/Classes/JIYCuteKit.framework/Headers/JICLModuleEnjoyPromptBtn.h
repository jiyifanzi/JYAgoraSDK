
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JILPromptType) {
    JILPromptType_SayHi    = 1,
    JILPromptType_SendGift  = 2,
    JILPromptType_Follow  = 3
};

@interface JICLModuleEnjoyPromptBtn : UIView



/** 设置类型 */
- (void)jif_setupButtonType:(JILPromptType)jip_type;
@property (nonatomic, copy) void(^jip_tapPromptThis)(JILPromptType jip_type);
@end

NS_ASSUME_NONNULL_END
