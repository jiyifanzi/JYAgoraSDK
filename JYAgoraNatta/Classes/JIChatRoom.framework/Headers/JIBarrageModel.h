
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JIBarrageModel : NSObject








// 连击参数 ,
//连击图标
///初始化富文本
+ (JIBarrageModel *)ji_objectWithKeyValues:(NSDictionary *)dic;
- (CGRect)ji_nameFrame;
-(void)ji_loadAtrribute;
- (CGFloat)ji_joinViewHeight;
- (NSString *)ji_jsonString;
@property (nonatomic, assign) NSInteger type;               
@property(nonatomic,strong)NSMutableAttributedString *attribute;
@property (nonatomic, copy) NSString *activityUrl;         
@property (nonatomic, assign) NSInteger roleType;           
@property (nonatomic, strong) NSString *sendUserName;       
@property (nonatomic, assign) NSInteger giftId;             
@property (nonatomic, assign) NSInteger sendUserId;         
@property (nonatomic, copy) NSString * comboIconUrl;
@property (nonatomic, strong) NSString *reciveUserName;     
@property(nonatomic,copy)void(^refreshUIBlock)(void);
@property (nonatomic, assign) BOOL isBlindBox;              
@property (assign, nonatomic) BOOL isSVip;                  
@property (nonatomic, assign) BOOL hasVoiceChatRoomPrivilege;
@property (nonatomic, strong) NSString *textContent;               
@property (nonatomic, strong) NSString *sendUserAvatar;     
@property (nonatomic, assign) NSInteger receiveGiftUserId;  
@property (nonatomic, copy) NSString *giftIconUrl;            
@property (nonatomic, assign) BOOL isVip;                   
@property (nonatomic, assign) NSInteger comboSize;
@end

NS_ASSUME_NONNULL_END
