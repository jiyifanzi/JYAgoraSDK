#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "JIChatRoom.h"
#import "NSData+JICustom.h"
#import "NSDate+JICustom.h"
#import "NSDictionary+JICustom.h"
#import "NSFileManager+JICustom.h"
#import "NSString+JICustom.h"
#import "UIButton+JICustom.h"
#import "UIColor+JICustom.h"
#import "UIFont+JICustom.h"
#import "UIImage+JICustom.h"
#import "UIImageView+JICustom.h"
#import "UILabel+JICustom.h"
#import "UITextView+JICustom.h"
#import "UIView+JICustom.h"
#import "UIViewController+JICustom.h"
#import "JIAuthorityHelper.h"
#import "JIChatRoomSDK.h"
#import "JIConfigeManager.h"
#import "JIDownloadManager.h"
#import "JIManager.h"
#import "JITimerManager.h"
#import "JITools.h"
#import "JIZipManager.h"
#import "JIFont.h"
#import "JIGlobalParam.h"
#import "JILanguageFlowLayout.h"
#import "JIMember.h"
#import "JIRTMModel.h"
#import "JIApi.h"
#import "JIEnum.h"
#import "JIMarco.h"
#import "JINotificationName.h"
#import "JIChannalBannerManager.h"
#import "JIChannalBannerModel.h"
#import "JIChannalBannerCell.h"
#import "JIGameItemCell.h"
#import "JIGameMenuView.h"
#import "JIGamePopView.h"
#import "JIJoinEffectModel.h"
#import "JIJoinEffectView.h"
#import "JICategoryBaseCell.h"
#import "JICategoryBaseCellModel.h"
#import "JICategoryBaseView.h"
#import "JICategoryCollectionView.h"
#import "JICategoryFactory.h"
#import "JICategoryIndicatorParamsModel.h"
#import "JICategoryIndicatorProtocol.h"
#import "JICategoryListContainerRTLCell.h"
#import "JICategoryListContainerView.h"
#import "JICategoryViewAnimator.h"
#import "JICategoryViewDefines.h"
#import "UIColor+JIAdd.h"
#import "JICategoryIndicatorCell.h"
#import "JICategoryIndicatorCellModel.h"
#import "JICategoryIndicatorComponentView.h"
#import "JICategoryIndicatorLineView.h"
#import "JICategoryIndicatorView.h"
#import "JICategoryView.h"
#import "JIRTLManager.h"
#import "JICategoryTitleCell.h"
#import "JICategoryTitleCellModel.h"
#import "JICategoryTitleImageCell.h"
#import "JICategoryTitleImageCellModel.h"
#import "JICategoryTitleImageView.h"
#import "JICategoryTitleView.h"
#import "JIChatRoomVC.h"
#import "JIChatRoomHelper.h"
#import "JIChatRoomRequestHelper.h"
#import "JIBarrageModel.h"
#import "JIChatRoomModel.h"
#import "JIEventLabelModel.h"
#import "JIHorizontalLayout.h"
#import "JITakePrivateModel.h"
#import "JIVoiceCRAnchorModel.h"
#import "JIVoiceCRUserModel.h"
#import "JIBaseSheetAlertView.h"
#import "JIContentLoadingView.h"
#import "JIDisableScreenShotView.h"
#import "JIEdgeLabel.h"
#import "JIScrollView.h"
#import "JITableView.h"
#import "JITextView.h"
#import "JIChatRoomCell.h"
#import "JIPopWebView.h"
#import "JIRoomSvgPlayerView.h"
#import "JITakeHerAlertView.h"
#import "JIAdBannerCell.h"
#import "JIAdBannerView.h"
#import "JIBannerPageView.h"
#import "JIMoreBannerAlertView.h"
#import "JIBarrageInputView.h"
#import "JIBarrageTableViewCell.h"
#import "JIBottomToolBar.h"
#import "JICycleView.h"
#import "JIJoinRoomView.h"
#import "JIRoomToolAlert.h"
#import "JIRoomToolCollectionViewCell.h"
#import "JIRoomToolModel.h"
#import "JIAttributeLabel.h"
#import "JITextAttachment.h"
#import "JIBeBossRemindView.h"
#import "JIBeFanRemindView.h"
#import "JIGuideView.h"
#import "JISliderRemindView.h"
#import "JIBossAuthorView.h"
#import "JIMemberAnchorListCell.h"
#import "JIMemberAnchorsView.h"
#import "JIMemberListView.h"
#import "JIMemberViewerListCell.h"
#import "JIMemberViewersView.h"
#import "JIUserInfoAlertView.h"
#import "JIUserMedalListCell.h"
#import "JIUserMedalListView.h"
#import "JIReportAlertView.h"
#import "JIReportPhotoCollectionViewCell.h"
#import "JIReprtPhotoModel.h"
#import "JIAllSeatView.h"
#import "JIChatRoomSmallView.h"
#import "JISmallSeatView.h"
#import "JIAnchorSeatView.h"
#import "JIHostBossSeatView.h"
#import "JIChooseAnchorAlertView.h"
#import "JIChooseAnchorTableViewCell.h"
#import "JIGiftAlertCollectionViewCell.h"
#import "JIGiftAlertListView.h"
#import "JIGiftAlertView.h"
#import "JISvgPlayView.h"
#import "JIGiftModel.h"
#import "JIGiftOperation.h"
#import "JIGiftShowManager.h"
#import "JIGiftShowView.h"
#import "JIComboAnimationManager.h"
#import "JIComboView.h"
#import "JICountDownView.h"
#import "JIRippleView.h"
#import "JIJoinFanPopView.h"
#import "JIRoomInfoView.h"
#import "JIRoomMemberCell.h"
#import "JIRoomNoticeDetailView.h"

FOUNDATION_EXPORT double JIChatRoomVersionNumber;
FOUNDATION_EXPORT const unsigned char JIChatRoomVersionString[];

