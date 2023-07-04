

#import "JICLiveModuleBaseView.h"
#import "JICLModulePKTopUserModel.h"
NS_ASSUME_NONNULL_BEGIN

@protocol JICLivePKRankListUserInfoViewDelegate <NSObject>
@required
- (void)jif_pkRankListUserInfoClickAction:(JICLModulePKTopUserModel *)model;


@end

@interface JICLivePKRankListUserInfoView : UIView





- (instancetype)initWithIsTopOne:(BOOL)isTopOne;
@property (nonatomic, strong) JICLModulePKTopUserModel *jip_model;
@property (nonatomic, weak) id <JICLivePKRankListUserInfoViewDelegate> delegate;
@property (nonatomic, assign) NSInteger jip_rank;
@end

NS_ASSUME_NONNULL_END
