
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSMutableArray (JILExtention)

- (void)jif_removeFirstObject;

- (void)jif_addObjectIfNotNil:(id)anObject;

@end

NS_ASSUME_NONNULL_END
