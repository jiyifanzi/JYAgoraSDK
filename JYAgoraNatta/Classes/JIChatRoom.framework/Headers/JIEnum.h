
#ifndef JIEnum_h
#define JIEnum_h


#endif /* JIEnum_h */

typedef NS_ENUM(NSInteger, JIRoomType) {
    JIRoomTypeHot = 1,
    JIRoomTypeNew,
    JIRoomTypeNormal,
};

typedef NS_ENUM(NSInteger, JIHostBossSeatType){
    JIHostBossSeatTypeBoss,
    JIHostBossSeatTypeHost,
};

typedef NS_ENUM(NSUInteger, JIDownloadType) {
    JIDownloadTypePhoto = 0,//图片
    JIDownloadTypeSvg, //svg
    JIDownloadTypeFont 
};

typedef NS_ENUM(NSUInteger, JIRequestMethod) {
    JIRequestMethodGet = 0,
    JIRequestMethodPost
};

typedef NS_ENUM(NSUInteger, JITipsType) {
    JITipsTypeSuccess = 0,
    JITipsTypeError,
    JITipsTypeTip,
};


typedef NS_ENUM(NSInteger, JIPrivileges){
    JIPrivilegeHeaderFrame = 1,
    JIPrivilegePrimaryTreasureCase = 2,
    JIPrivilegeFreeMessage = 3,
    JIPrivilegeInRoom = 4,
    JIPrivilegeSeniorTreasureCase = 5,
    JIPrivilegeInvisible = 6,
    JIPrivilegeSupremeHeaderFrame = 7    //至尊头像框
};

typedef  NS_ENUM(NSInteger, JIChatRoomFromType) {
    JIChatRoomFromTypeHomeList,
    JIChatRoomFromTypeDetail,
    JIChatRoomFromTypeScroll,
    JIChatRoomFromTypeFollowedAvatar,
    JIChatRoomFromTypeBroadcast,
};

typedef  NS_ENUM(NSInteger, JIChatRoomEventType) {
    JIChatRoomEventTypeNormal,
    JIChatRoomEventTypeTime,
};
