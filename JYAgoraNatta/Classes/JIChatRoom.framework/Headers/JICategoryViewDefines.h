
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

static const CGFloat JICategoryViewAutomaticDimension = -1;

typedef void(^JICategoryCellSelectedAnimationBlock)(CGFloat percent);

typedef NS_ENUM(NSUInteger, JICategoryComponentPosition) {
    JICategoryComponentPosition_Bottom,
    JICategoryComponentPosition_Top
};

typedef NS_ENUM(NSUInteger, JICategoryCellSelectedType) {
    JICategoryCellSelectedTypeUnknown, // 未知，不是选中（cellForRow方法里面、两个cell过渡时）
    JICategoryCellSelectedTypeClick,   // 点击选中
    JICategoryCellSelectedTypeCode,    // 调用方法 selectItemAtIndex: 选中
    JICategoryCellSelectedTypeScroll   // 通过滚动到某个 cell 选中
};

typedef NS_ENUM(NSUInteger, JICategoryTitleLabelAnchorPointStyle) {
    JICategoryTitleLabelAnchorPointStyleCenter,
    JICategoryTitleLabelAnchorPointStyleTop,
    JICategoryTitleLabelAnchorPointStyleBottom
};

typedef NS_ENUM(NSUInteger, JICategoryIndicatorScrollStyle) {
    JICategoryIndicatorScrollStyleSimple,           // 简单滚动，即从当前位置过渡到目标位置
    JICategoryIndicatorScrollStyleSameAsUserScroll  // 和用户左右滚动列表时的效果一样
};

#define JICategoryViewDeprecated(instead) NS_DEPRECATED(2_0, 2_0, 2_0, 2_0, instead)
