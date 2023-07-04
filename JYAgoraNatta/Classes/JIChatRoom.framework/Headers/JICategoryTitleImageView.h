
#import "JICategoryTitleView.h"
#import "JICategoryTitleImageCell.h"
#import "JICategoryTitleImageCellModel.h"

@interface JICategoryTitleImageView : JICategoryTitleView



//普通状态下的imageNames，通过[UIImage imageNamed:]方法加载
//图片缩放的最大scale。默认1.2，imageZoomEnabled为YES才生效
//选中状态下的imageNames，通过[UIImage imageNamed:]方法加载。可选
//普通状态下的imageURLs，通过loadImageCallback回调加载
//下面的属性将会被弃用，请使用`imageInfoArray`、`selectedImageInfoArray`、`loadImageBlock`属性完成需求。
//imageInfo数组可以传入imageName字符串或者image的URL地址等，然后会通过loadImageBlock透传回来，把imageView对于图片的加载过程完全交给使用者决定。
//使用imageURL从远端下载图片进行加载，建议使用SDWebImage等第三方库进行下载。
//图片尺寸。默认CGSizeMake(20, 20)
//titleLabel和ImageView的间距，默认5
//默认@[JICategoryTitleImageType_LeftImage...]
//图片是否缩放。默认为NO
//选中状态下的selectedImageURLs，通过loadImageCallback回调加载
@property (nonatomic, strong) NSArray <NSString *>*selectedImageNames;
@property (nonatomic, strong) NSArray <NSNumber *> *imageTypes;
@property (nonatomic, strong) NSArray <NSString *>*imageNames;
@property (nonatomic, assign, getter=isImageZoomEnabled) BOOL imageZoomEnabled;
@property (nonatomic, copy) void(^loadImageBlock)(UIImageView *imageView, id info);
@property (nonatomic, copy) void(^loadImageCallback)(UIImageView *imageView, NSURL *imageURL);
@property (nonatomic, strong) NSArray <id>*imageInfoArray;
@property (nonatomic, assign) CGSize imageSize;
@property (nonatomic, strong) NSArray <id>*selectedImageInfoArray;
@property (nonatomic, strong) NSArray <NSURL *>*imageURLs;
@property (nonatomic, strong) NSArray <NSURL *>*selectedImageURLs;
@property (nonatomic, assign) CGFloat imageZoomScale;
@property (nonatomic, assign) CGFloat titleImageSpacing;
@end
