
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (JICustom)
-(void)ji_downloadImageWithName:(NSString *)ji_iconName;

-(void)ji_downloadArImageWithName:(NSString *)ji_iconName;

-(void)ji_downloadImageMirrorWithName:(NSString *)ji_iconName;

-(void)ji_downloadGifImageWithName:(NSString *)ji_iconName;

-(void)ji_downloadImageWithUrl:(NSString *)ji_url;
- (void)ji_downloadImageWithUrl:(NSString *)ji_url placeHolderImage:(nullable UIImage *)ji_placeHolderImage;

@end

NS_ASSUME_NONNULL_END
