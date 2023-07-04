
#ifndef JICLiveHeader_h
#define JICLiveHeader_h

#pragma mark - 定义类
#import "JICEnum.h"
#import "JICMacroDef.h"
#import "JICNotificationDef.h"

#pragma mark - 三方库
#import <AgoraRtmKit/AgoraRtmKit.h>
#import <AgoraRtcKit/AgoraRtcEngineKit.h>
#import <Masonry/Masonry.h>
#import <MJExtension/MJExtension.h>
#import <Foundation/Foundation.h>
#import <Photos/Photos.h>
#import <SDWebImage/SDWebImage.h>
#import <SVGAPlayer/SVGA.h>

#pragma mark --- 外部 ---
#import "JICLModuleEventLabelModel.h"
#import "JICLModuleRequestApiModel.h"
#import "JICLModulePayModel.h"
#import "JICLModuleFanInfoModel.h"
#import "JICLiveModuleDataSource.h"
#import "JICLiveModuleDelegate.h"
#import "JICLiveModuleManager.h"

#pragma mark --- 内部 ---
#pragma mark 定义
#import "JICLayoutDef.h"

#pragma mark 分类
#import "NSArray+JILExtention.h"
#import "NSObject+JILExtention.h"
#import "NSString+JILExtention.h"
#import "UIImage+JILExtention.h"
#import "NSDictionary+JILExtention.h"
#import "UITableView+JILExtention.h"
#import "UIView+JILExtention.h"
#import "NSMutableArray+JILExtention.h"
#import "UIScrollView+JILExtention.h"
#import "UILabel+JILExtention.h"

#pragma mark 模型
#import "JICLiveModuleBaseModel.h"
#import "JICLiveModuleUserModel.h"
#import "JICLiveModuleAnchorModel.h"
#import "JICLModuleRoomTotalModel.h"
#import "JICLModuleEnterConfigModel.h"
#import "JICLModuleMessageModel.h"
#import "JICLModuleAccountDetailInfoModel.h"

#pragma mark 工具类
#import "JICStringTool.h"
#import "JICUtil.h"
#import "JICUtil+LoadSource.h"
#import "JICLModuleInsideManager.h"
#import "JICLiveModuleManagerConvertTool.h"
#import "JICLModuleRequestApiManager.h"
#import "JICLModuleTongJiTool.h"

#pragma mark 协议
#import "JICLiveModuleBaseViewDelegate.h"
#import "JICLModuleSubManagerDataSource.h"

#endif /* JICLiveHeader_h */
