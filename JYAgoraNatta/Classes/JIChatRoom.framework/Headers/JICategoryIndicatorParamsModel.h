
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "JICategoryViewDefines.h"

@interface JICategoryIndicatorParamsModel : NSObject


@property (nonatomic, assign) NSInteger selectedIndex;      
@property (nonatomic, assign) CGRect rightCellFrame;        
@property (nonatomic, assign) NSInteger rightIndex;         
@property (nonatomic, assign) JICategoryCellSelectedType selectedType;  
@property (nonatomic, assign) NSInteger leftIndex;          
@property (nonatomic, assign) CGRect selectedCellFrame;     
@property (nonatomic, assign) NSInteger lastSelectedIndex;  
@property (nonatomic, assign) CGFloat percent;              
@property (nonatomic, assign) CGRect leftCellFrame;         
@end
