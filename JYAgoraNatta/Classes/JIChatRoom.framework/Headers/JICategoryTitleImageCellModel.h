
#import "JICategoryTitleCellModel.h"

typedef NS_ENUM(NSUInteger, JICategoryTitleImageType) {
    JICategoryTitleImageType_TopImage = 0,
    JICategoryTitleImageType_LeftImage,
    JICategoryTitleImageType_BottomImage,
    JICategoryTitleImageType_RightImage,
    JICategoryTitleImageType_OnlyImage,
    JICategoryTitleImageType_OnlyTitle,
};

@interface JICategoryTitleImageCellModel : JICategoryTitleCellModel








/// 以下属性将会被弃用
@property (nonatomic, copy) void(^loadImageBlock)(UIImageView *imageView, id info);
@property (nonatomic, copy) NSString *selectedImageName;
@property (nonatomic, strong) NSURL *selectedImageURL;
@property (nonatomic, copy) void(^loadImageCallback)(UIImageView *imageView, NSURL *imageURL);
@property (nonatomic, assign) CGSize imageSize;     
@property (nonatomic, assign) CGFloat imageZoomScale;
@property (nonatomic, strong) NSURL *imageURL;      
@property (nonatomic, copy) NSString *imageName;    
@property (nonatomic, strong) id imageInfo;
@property (nonatomic, assign, getter=isImageZoomEnabled) BOOL imageZoomEnabled;
@property (nonatomic, assign) JICategoryTitleImageType imageType;
@property (nonatomic, strong) id selectedImageInfo;
@property (nonatomic, assign) CGFloat titleImageSpacing;    
@end
