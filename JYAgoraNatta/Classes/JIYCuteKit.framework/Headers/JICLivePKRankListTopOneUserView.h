

#import "JICLiveModuleBaseView.h"
#import "JICLModulePKTopUserModel.h"
#import "JICLivePKRankListUserInfoView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLivePKRankListTopOneUserView : UIView




- (instancetype)initWithIsOtherAnchor:(BOOL)isOtherAnchor;
@property (nonatomic, strong) JICLModulePKTopUserModel *jip_model;
@property (nonatomic, weak) id <JICLivePKRankListUserInfoViewDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
