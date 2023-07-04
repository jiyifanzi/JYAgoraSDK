

#import <UIKit/UIKit.h>
#import "JICLivePKRankListUserInfoView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JICLModulePKRankListCell : UITableViewCell




@property (nonatomic, strong) JICLModulePKTopUserModel *jip_model;
@property (nonatomic, weak) id <JICLivePKRankListUserInfoViewDelegate> delegate;
@property (nonatomic, assign) NSInteger jip_rank;
@end

NS_ASSUME_NONNULL_END
