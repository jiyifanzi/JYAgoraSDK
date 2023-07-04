
#import <UIKit/UIKit.h>
#import "JIBaseSheetAlertView.h"
#import "JIEventLabelModel.h"
NS_ASSUME_NONNULL_BEGIN

typedef void(^_Nullable  JIMedalChooseBlock)(void);

@interface JIUserMedalListView : JIBaseSheetAlertView





- (void)ji_loadData:(NSArray <JIEventLabelModel *>*)ji_array;
@property(nonatomic,assign) BOOL isJustShow;
@property(nonatomic,assign) BOOL isMine;
@property(nonatomic,copy) JIMedalChooseBlock chooseBlock;
@end

NS_ASSUME_NONNULL_END
