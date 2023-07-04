
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (JICustom)
-(void)ji_downloadImageWithName:(NSString *)ji_iconName state:(UIControlState)ji_state;

-(void)ji_downloadImageMirrorWithName:(NSString *)ji_iconName state:(UIControlState)ji_state;

-(void)ji_downloadArImageWithName:(NSString *)ji_iconName state:(UIControlState)ji_state;
-(void)ji_downloadBackImageWithName:(NSString *)ji_iconName;

-(void)ji_downloadArBackImageWithName:(NSString *)ji_iconName;



- (void)ji_downloadImageWithName:(NSString *)ji_iconName state:(UIControlState)ji_state placeHolderName:(NSString *)ji_placeHolderName;

- (void)ji_downloadImageMirrorWithName:(NSString *)ji_iconName state:(UIControlState)ji_state placeHolderName:(NSString *)ji_placeHolderName;


-(void)ji_downloadImageWithUrl:(NSString *)ji_url  state:(UIControlState)ji_state;

-(void)ji_downloadImageWithUrl:(NSString *)ji_url placeHolderName:(NSString *)ji_placeHolderName  state:(UIControlState)ji_state;

@end

NS_ASSUME_NONNULL_END
