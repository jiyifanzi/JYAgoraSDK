
#import "JICategoryIndicatorCell.h"
#import "JICategoryViewDefines.h"
@class JICategoryTitleCellModel;

@interface JICategoryTitleCell : JICategoryIndicatorCell





- (JICategoryCellSelectedAnimationBlock)ji_preferredTitleColorAnimationBlock:(JICategoryTitleCellModel *)ji_cellModel;
- (JICategoryCellSelectedAnimationBlock)ji_preferredTitleStrokeWidthAnimationBlock:(JICategoryTitleCellModel *)ji_cellModel attributedString:(NSMutableAttributedString *)ji_attributedString;
- (JICategoryCellSelectedAnimationBlock)ji_preferredTitleZoomAnimationBlock:(JICategoryTitleCellModel *)ji_cellModel baseScale:(CGFloat)ji_baseScale;
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) NSLayoutConstraint *titleLabelCenterX;
@property (nonatomic, strong) UILabel *maskTitleLabel;
@property (nonatomic, strong) NSLayoutConstraint *maskTitleLabelCenterX;
@property (nonatomic, strong) NSLayoutConstraint *titleLabelCenterY;
@end
