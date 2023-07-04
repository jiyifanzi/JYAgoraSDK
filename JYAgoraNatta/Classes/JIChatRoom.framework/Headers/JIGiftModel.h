

#import <Foundation/Foundation.h>

@interface JIGiftModel : NSObject



/** 礼物ID */
// 连击参数 ,
/** giftname */
/** count */
/** gift gifimage */
/** 发送的数 */
//连击图标
/** giftimage */
/** 礼物操作的唯一Key */
/** username */
/** usericon */
- (BOOL)ji_canCombo;
@property(nonatomic,copy) NSString * sendUserName;
@property(nonatomic,copy) NSString * receiverName;
@property(nonatomic,copy)NSString *giftKey;
@property (nonatomic, copy) NSString * comboIconUrl;
@property(nonatomic,copy)NSString *giftId;
@property(nonatomic,copy) NSString * giftGifImage;
@property (nonatomic, assign) NSInteger comboSize;
@property(nonatomic,copy) NSString * sendUserAvatar;
@property(nonatomic,copy) NSString * sendUserID;
@property(nonatomic,copy) NSString * giftImage;
@property(nonatomic,assign) NSInteger defaultCount; 
@property(nonatomic,assign) NSInteger sendCount;
@end
