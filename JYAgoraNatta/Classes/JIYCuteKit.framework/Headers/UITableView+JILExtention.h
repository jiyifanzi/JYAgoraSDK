
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITableView (JILExtention)

- (void)jif_insertSection:(NSUInteger)section withAnimation:(UITableViewRowAnimation)animation;

- (void)jif_deleteSection:(NSUInteger)section withAnimation:(UITableViewRowAnimation)animation;

- (void)jif_scrollToRow:(NSUInteger)row inSection:(NSUInteger)section atScrollPosition:(UITableViewScrollPosition)scrollPosition animated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
