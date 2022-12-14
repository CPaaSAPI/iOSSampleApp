#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CSAPICPaaSAPI, NSURL, CSAPICPaaSAPISettings, CSAPIServiceType, CSAPIREGISTRATION_STATE, CSAPICPaaSResultCompanion, CSAPIKotlinUnit, CSAPICPaaSResult<__covariant T, TException>, CSAPIKotlinEnumCompanion, CSAPIKotlinEnum<E>, CSAPIKotlinArray<T>, CSAPICPaaSReason, CSAPICallOptions, CSAPICallStartError, CSAPICallStartErrorNotRegisteredError, CSAPIVideoViewProvider, CSAPIViewAttachmentError, CSAPIViewContentMode, CSAPILocalCameraSettings, CSAPILocalCameraResolution, UIView, CSAPIOperationType, CSAPIKotlinThrowable, CSAPIKotlinException, CSAPICPaaSError, CSAPIOpenCloseVideoError, CSAPISessionDescriptionType, CSAPILogLevel, NSError, CSAPICommonLib, CSAPIConst, CSAPIConstStorage, CSAPIPlatformName, CSAPICallInfo, CSAPICallOptionService, CSAPICognitoResult<T>, CSAPIKotlinByteIterator, CSAPIKotlinByteArray, NSData, CSAPIKotlinx_serialization_coreSerializersModule, CSAPIKotlinx_serialization_coreSerialKind, CSAPIKotlinNothing;

@protocol CSAPICPaaSAPICb, CSAPIIVoice, CSAPIKotlinComparable, CSAPICPaaSCallEvents, CSAPICPaaSCall, CSAPIIBaseVideoProvider, CSAPIILocalVideoProvider, CSAPIIRemoteVideoProvider, CSAPIKotlinIterator, CSAPIKotlinx_serialization_coreSerializersModuleCollector, CSAPIKotlinx_serialization_coreKSerializer, CSAPIKotlinKClass, CSAPIKotlinx_serialization_coreSerializationStrategy, CSAPIKotlinx_serialization_coreDeserializationStrategy, CSAPIKotlinx_serialization_coreEncoder, CSAPIKotlinx_serialization_coreSerialDescriptor, CSAPIKotlinx_serialization_coreDecoder, CSAPIKotlinKDeclarationContainer, CSAPIKotlinKAnnotatedElement, CSAPIKotlinKClassifier, CSAPIKotlinx_serialization_coreCompositeEncoder, CSAPIKotlinAnnotation, CSAPIKotlinx_serialization_coreCompositeDecoder;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface CSAPIBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface CSAPIBase (CSAPIBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface CSAPIMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CSAPIMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorCSAPIKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface CSAPINumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface CSAPIByte : CSAPINumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface CSAPIUByte : CSAPINumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface CSAPIShort : CSAPINumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface CSAPIUShort : CSAPINumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface CSAPIInt : CSAPINumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface CSAPIUInt : CSAPINumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface CSAPILong : CSAPINumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface CSAPIULong : CSAPINumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface CSAPIFloat : CSAPINumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface CSAPIDouble : CSAPINumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface CSAPIBoolean : CSAPINumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CPaaSAPI")))
@interface CSAPICPaaSAPI : CSAPIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cPaaSAPI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSAPICPaaSAPI *shared __attribute__((swift_name("shared")));
- (NSURL * _Nullable)getFilePath __attribute__((swift_name("getFilePath()")));
- (void)logout __attribute__((swift_name("logout()")));
- (void)registerSettings:(CSAPICPaaSAPISettings *)settings cpaasAPICb:(id<CSAPICPaaSAPICb>)cpaasAPICb __attribute__((swift_name("register(settings:cpaasAPICb:)")));
- (void)updateInitParamsSettings:(CSAPICPaaSAPISettings *)settings __attribute__((swift_name("updateInitParams(settings:)")));
@property (readonly) id<CSAPIIVoice> voice __attribute__((swift_name("voice")));
@end;

__attribute__((swift_name("CPaaSAPICb")))
@protocol CSAPICPaaSAPICb
@required
- (void)onIncomingCallCallId:(NSString *)callId callerId:(NSString *)callerId serviceType:(CSAPIServiceType *)serviceType __attribute__((swift_name("onIncomingCall(callId:callerId:serviceType:)")));
- (void)onRegistrationStateState:(CSAPIREGISTRATION_STATE *)state __attribute__((swift_name("onRegistrationState(state:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CPaaSResult")))
@interface CSAPICPaaSResult<__covariant T, TException> : CSAPIBase
@property (class, readonly, getter=companion) CSAPICPaaSResultCompanion *companion __attribute__((swift_name("companion")));
- (CSAPIKotlinUnit * _Nullable)foldOnSuccess:(void (^)(T _Nullable))onSuccess onFailure:(void (^)(TException _Nullable))onFailure __attribute__((swift_name("fold(onSuccess:onFailure:)")));
- (CSAPICPaaSResult<T, TException> *)onFailureAction:(void (^)(TException _Nullable))action __attribute__((swift_name("onFailure(action:)")));
- (CSAPICPaaSResult<T, TException> *)onSuccessAction:(void (^)(T _Nullable))action __attribute__((swift_name("onSuccess(action:)")));
@property (readonly) BOOL isFailure __attribute__((swift_name("isFailure")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CPaaSResultCompanion")))
@interface CSAPICPaaSResultCompanion : CSAPIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSAPICPaaSResultCompanion *shared __attribute__((swift_name("shared")));
- (CSAPICPaaSResult<id, id> *)failureException:(id _Nullable)exception __attribute__((swift_name("failure(exception:)")));
- (CSAPICPaaSResult<id, id> *)successValue:(id _Nullable)value __attribute__((swift_name("success(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CPaaSResultFailure")))
@interface CSAPICPaaSResultFailure<TException> : CSAPIBase
- (instancetype)initWithException:(TException _Nullable)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TException _Nullable exception __attribute__((swift_name("exception")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol CSAPIKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface CSAPIKotlinEnum<E> : CSAPIBase <CSAPIKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSAPIKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("REGISTRATION_STATE")))
@interface CSAPIREGISTRATION_STATE : CSAPIKotlinEnum<CSAPIREGISTRATION_STATE *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSAPIREGISTRATION_STATE *registered __attribute__((swift_name("registered")));
@property (class, readonly) CSAPIREGISTRATION_STATE *registerFailed __attribute__((swift_name("registerFailed")));
+ (CSAPIKotlinArray<CSAPIREGISTRATION_STATE *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("CPaaSCall")))
@protocol CSAPICPaaSCall
@required
- (void)endCall __attribute__((swift_name("endCall()")));
- (NSString *)getCallId __attribute__((swift_name("getCallId()")));
- (NSString *)getCandidateTypeData __attribute__((swift_name("getCandidateTypeData()")));
- (NSString *)getDestinationId __attribute__((swift_name("getDestinationId()")));
- (CSAPIBoolean * _Nullable)isMute __attribute__((swift_name("isMute()")));
- (void)muteCompletion:(void (^)(CSAPIBoolean *))completion __attribute__((swift_name("mute(completion:)")));
- (void)unMuteCompletion:(void (^)(CSAPIBoolean *))completion __attribute__((swift_name("unMute(completion:)")));
@property id<CSAPICPaaSCallEvents> _Nullable eventListener __attribute__((swift_name("eventListener")));
@end;

__attribute__((swift_name("CPaaSCallEvents")))
@protocol CSAPICPaaSCallEvents
@required
- (void)onCallEndReason:(CSAPICPaaSReason *)reason __attribute__((swift_name("onCallEnd(reason:)")));
- (void)onConnected __attribute__((swift_name("onConnected()")));
- (void)onConnectedFailureReason:(CSAPICPaaSReason *)reason __attribute__((swift_name("onConnectedFailure(reason:)")));
- (void)onReconnectingReason:(CSAPICPaaSReason *)reason __attribute__((swift_name("onReconnecting(reason:)")));
- (void)onRinging __attribute__((swift_name("onRinging()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CPaaSReason")))
@interface CSAPICPaaSReason : CSAPIKotlinEnum<CSAPICPaaSReason *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSAPICPaaSReason *busy __attribute__((swift_name("busy")));
@property (class, readonly) CSAPICPaaSReason *reject __attribute__((swift_name("reject")));
@property (class, readonly) CSAPICPaaSReason *badRequest __attribute__((swift_name("badRequest")));
@property (class, readonly) CSAPICPaaSReason *unauthorized __attribute__((swift_name("unauthorized")));
@property (class, readonly) CSAPICPaaSReason *notFound __attribute__((swift_name("notFound")));
@property (class, readonly) CSAPICPaaSReason *gone __attribute__((swift_name("gone")));
@property (class, readonly) CSAPICPaaSReason *timeOut __attribute__((swift_name("timeOut")));
@property (class, readonly) CSAPICPaaSReason *rtpLost __attribute__((swift_name("rtpLost")));
@property (class, readonly) CSAPICPaaSReason *network __attribute__((swift_name("network")));
@property (class, readonly) CSAPICPaaSReason *byUser __attribute__((swift_name("byUser")));
@property (class, readonly) CSAPICPaaSReason *byServer __attribute__((swift_name("byServer")));
+ (CSAPIKotlinArray<CSAPICPaaSReason *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("IVoice")))
@protocol CSAPIIVoice
@required
- (void)connectCallId:(NSString *)callId callOptions:(CSAPICallOptions *)callOptions result:(void (^)(CSAPICPaaSResult<id<CSAPICPaaSCall>, CSAPICallStartError *> *))result __attribute__((swift_name("connect(callId:callOptions:result:)")));
- (void)createResult:(void (^)(CSAPICPaaSResult<NSString *, CSAPICallStartErrorNotRegisteredError *> *))result __attribute__((swift_name("create(result:)")));
- (id<CSAPICPaaSCall> _Nullable)getExistingCallCallId:(NSString *)callId __attribute__((swift_name("getExistingCall(callId:)")));
- (void)rejectCallId:(NSString *)callId __attribute__((swift_name("reject(callId:)")));
@end;

__attribute__((swift_name("IBaseVideoProvider")))
@protocol CSAPIIBaseVideoProvider
@required
- (void)attachVideoViewProvider:(CSAPIVideoViewProvider *)videoViewProvider __attribute__((swift_name("attach(videoViewProvider:)")));
- (void)release_ __attribute__((swift_name("release()")));
@property (readonly) BOOL isVideoActive __attribute__((swift_name("isVideoActive")));
@property void (^ _Nullable onError)(CSAPIViewAttachmentError *) __attribute__((swift_name("onError")));
@property void (^ _Nullable onFirstFrameRendered)(void) __attribute__((swift_name("onFirstFrameRendered")));
@property void (^ _Nullable onResolutionChanged)(CSAPIInt *, CSAPIInt *) __attribute__((swift_name("onResolutionChanged")));
@property (readonly) CSAPIVideoViewProvider * _Nullable viewContainer __attribute__((swift_name("viewContainer")));
@property CSAPIViewContentMode *viewContentMode __attribute__((swift_name("viewContentMode")));
@end;

__attribute__((swift_name("ILocalVideoProvider")))
@protocol CSAPIILocalVideoProvider <CSAPIIBaseVideoProvider>
@required
- (void)updateSettingsLocalCameraSettings:(CSAPILocalCameraSettings *)localCameraSettings __attribute__((swift_name("updateSettings(localCameraSettings:)")));
@end;

__attribute__((swift_name("IRemoteVideoProvider")))
@protocol CSAPIIRemoteVideoProvider <CSAPIIBaseVideoProvider>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalCameraResolution")))
@interface CSAPILocalCameraResolution : CSAPIBase
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("init(width:height:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (CSAPILocalCameraResolution *)doCopyWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("doCopy(width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalCameraSettings")))
@interface CSAPILocalCameraSettings : CSAPIBase
- (instancetype)initWithFps:(int32_t)fps resolution:(CSAPILocalCameraResolution *)resolution cameraSource:(NSString *)cameraSource __attribute__((swift_name("init(fps:resolution:cameraSource:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (CSAPILocalCameraResolution *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (CSAPILocalCameraSettings *)doCopyFps:(int32_t)fps resolution:(CSAPILocalCameraResolution *)resolution cameraSource:(NSString *)cameraSource __attribute__((swift_name("doCopy(fps:resolution:cameraSource:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cameraSource __attribute__((swift_name("cameraSource")));
@property (readonly) int32_t fps __attribute__((swift_name("fps")));
@property (readonly) CSAPILocalCameraResolution *resolution __attribute__((swift_name("resolution")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoViewManager")))
@interface CSAPIVideoViewManager : CSAPIBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clearLocalProvider __attribute__((swift_name("clearLocalProvider()")));
- (void)clearRemoteProvider __attribute__((swift_name("clearRemoteProvider()")));
@property id<CSAPIILocalVideoProvider> _Nullable localVideoProvider __attribute__((swift_name("localVideoProvider")));
@property id<CSAPIIRemoteVideoProvider> _Nullable remoteVideoProvider __attribute__((swift_name("remoteVideoProvider")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoViewProvider")))
@interface CSAPIVideoViewProvider : CSAPIBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) UIView *view __attribute__((swift_name("view")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewContentMode")))
@interface CSAPIViewContentMode : CSAPIKotlinEnum<CSAPIViewContentMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSAPIViewContentMode *aspectFit __attribute__((swift_name("aspectFit")));
@property (class, readonly) CSAPIViewContentMode *aspectFill __attribute__((swift_name("aspectFill")));
+ (CSAPIKotlinArray<CSAPIViewContentMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("IOperation")))
@protocol CSAPIIOperation
@required
- (void)abort __attribute__((swift_name("abort()")));
- (void)executeCompleteListener:(void (^)(CSAPIBoolean *))completeListener __attribute__((swift_name("execute(completeListener:)")));
- (CSAPIOperationType *)getType __attribute__((swift_name("getType()")));
@property BOOL isRunning __attribute__((swift_name("isRunning")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationType")))
@interface CSAPIOperationType : CSAPIKotlinEnum<CSAPIOperationType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSAPIOperationType *createPeerConnection __attribute__((swift_name("createPeerConnection")));
@property (class, readonly) CSAPIOperationType *createConnectionOffer __attribute__((swift_name("createConnectionOffer")));
@property (class, readonly) CSAPIOperationType *createConnectionAnswer __attribute__((swift_name("createConnectionAnswer")));
@property (class, readonly) CSAPIOperationType *mute __attribute__((swift_name("mute")));
@property (class, readonly) CSAPIOperationType *createOffer __attribute__((swift_name("createOffer")));
@property (class, readonly) CSAPIOperationType *sendOffer __attribute__((swift_name("sendOffer")));
@property (class, readonly) CSAPIOperationType *sendAnswer __attribute__((swift_name("sendAnswer")));
@property (class, readonly) CSAPIOperationType *endCall __attribute__((swift_name("endCall")));
@property (class, readonly) CSAPIOperationType *endCallAck __attribute__((swift_name("endCallAck")));
@property (class, readonly) CSAPIOperationType *register_ __attribute__((swift_name("register_")));
@property (class, readonly) CSAPIOperationType *reject __attribute__((swift_name("reject")));
@property (class, readonly) CSAPIOperationType *getIceSettings __attribute__((swift_name("getIceSettings")));
@property (class, readonly) CSAPIOperationType *mock __attribute__((swift_name("mock")));
@property (class, readonly) CSAPIOperationType *popDiscovery __attribute__((swift_name("popDiscovery")));
@property (class, readonly) CSAPIOperationType *cognitoAuth __attribute__((swift_name("cognitoAuth")));
@property (class, readonly) CSAPIOperationType *openWs __attribute__((swift_name("openWs")));
@property (class, readonly) CSAPIOperationType *closeRemoteCamera __attribute__((swift_name("closeRemoteCamera")));
@property (class, readonly) CSAPIOperationType *openRemoteCamera __attribute__((swift_name("openRemoteCamera")));
@property (class, readonly) CSAPIOperationType *closeLocalCamera __attribute__((swift_name("closeLocalCamera")));
@property (class, readonly) CSAPIOperationType *openLocalCamera __attribute__((swift_name("openLocalCamera")));
@property (class, readonly) CSAPIOperationType *addMediaSenders __attribute__((swift_name("addMediaSenders")));
+ (CSAPIKotlinArray<CSAPIOperationType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface CSAPIKotlinThrowable : CSAPIBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (CSAPIKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSAPIKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface CSAPIKotlinException : CSAPIKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("CPaaSError")))
@interface CSAPICPaaSError : CSAPIKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CSAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("CallStartError")))
@interface CSAPICallStartError : CSAPICPaaSError
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallStartError.CallAlreadyExistError")))
@interface CSAPICallStartErrorCallAlreadyExistError : CSAPICallStartError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallStartError.ConnectionError")))
@interface CSAPICallStartErrorConnectionError : CSAPICallStartError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallStartError.MicrophonePermissionError")))
@interface CSAPICallStartErrorMicrophonePermissionError : CSAPICallStartError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallStartError.NotRegisteredError")))
@interface CSAPICallStartErrorNotRegisteredError : CSAPICallStartError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileNotExistError")))
@interface CSAPIFileNotExistError : CSAPICPaaSError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("OpenCloseVideoError")))
@interface CSAPIOpenCloseVideoError : CSAPICPaaSError
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenCloseVideoError.CameraPermissionError")))
@interface CSAPIOpenCloseVideoErrorCameraPermissionError : CSAPIOpenCloseVideoError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenCloseVideoError.ConnectionError")))
@interface CSAPIOpenCloseVideoErrorConnectionError : CSAPIOpenCloseVideoError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewAttachmentError")))
@interface CSAPIViewAttachmentError : CSAPICPaaSError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionDescriptionType")))
@interface CSAPISessionDescriptionType : CSAPIKotlinEnum<CSAPISessionDescriptionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSAPISessionDescriptionType *offer __attribute__((swift_name("offer")));
@property (class, readonly) CSAPISessionDescriptionType *answer __attribute__((swift_name("answer")));
+ (CSAPIKotlinArray<CSAPISessionDescriptionType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogLevel")))
@interface CSAPILogLevel : CSAPIKotlinEnum<CSAPILogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSAPILogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) CSAPILogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) CSAPILogLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) CSAPILogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) CSAPILogLevel *verbose __attribute__((swift_name("verbose")));
+ (CSAPIKotlinArray<CSAPILogLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSErrorException")))
@interface CSAPINSErrorException : CSAPIKotlinException
- (instancetype)initWithNsError:(NSError *)nsError __attribute__((swift_name("init(nsError:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CSAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonLib")))
@interface CSAPICommonLib : CSAPIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)commonLib __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSAPICommonLib *shared __attribute__((swift_name("shared")));
- (NSString *)getVersion __attribute__((swift_name("getVersion()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Const")))
@interface CSAPIConst : CSAPIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)const_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSAPIConst *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *AUTH_HEADER_PREFIX __attribute__((swift_name("AUTH_HEADER_PREFIX")));
@property (readonly) NSString *AUTH_HEADER_TOKEN __attribute__((swift_name("AUTH_HEADER_TOKEN")));
@property (readonly) NSString *CLIENT_VERSION __attribute__((swift_name("CLIENT_VERSION")));
@property (readonly) NSString *COGNITO_CLIENT_ID __attribute__((swift_name("COGNITO_CLIENT_ID")));
@property (readonly) NSString *COGNITO_ID_TOKEN __attribute__((swift_name("COGNITO_ID_TOKEN")));
@property (readonly) NSString *COGNITO_ID_TOKEN_EXP __attribute__((swift_name("COGNITO_ID_TOKEN_EXP")));
@property (readonly) int32_t COGNITO_NUMBER_OF_TOKEN_CHECKS __attribute__((swift_name("COGNITO_NUMBER_OF_TOKEN_CHECKS")));
@property (readonly) NSString *COGNITO_POOL_ID __attribute__((swift_name("COGNITO_POOL_ID")));
@property (readonly) NSString *COGNITO_REGION __attribute__((swift_name("COGNITO_REGION")));
@property (readonly) int64_t COGNITO_TOKEN_CHECK_DELAY __attribute__((swift_name("COGNITO_TOKEN_CHECK_DELAY")));
@property (readonly) int64_t COGNITO_WAIT_AFTER_EXP __attribute__((swift_name("COGNITO_WAIT_AFTER_EXP")));
@property (readonly) NSString *DEVICE_ID __attribute__((swift_name("DEVICE_ID")));
@property (readonly) NSString *FILE_NAME_EXTENSION __attribute__((swift_name("FILE_NAME_EXTENSION")));
@property (readonly) NSString *GATEWAY_DESTINATION_ID __attribute__((swift_name("GATEWAY_DESTINATION_ID")));
@property (readonly) NSString *HTTP_URL __attribute__((swift_name("HTTP_URL")));
@property (readonly) NSString *HTTP_URL_AWS_DEV __attribute__((swift_name("HTTP_URL_AWS_DEV")));
@property (readonly) NSString *HTTP_URL_AWS_STG __attribute__((swift_name("HTTP_URL_AWS_STG")));
@property (readonly) int32_t MAX_STATISTICS_HISTORY_SIZE __attribute__((swift_name("MAX_STATISTICS_HISTORY_SIZE")));
@property (readonly) int64_t PING_INTERVAL __attribute__((swift_name("PING_INTERVAL")));
@property (readonly) int64_t PING_TIMEOUT __attribute__((swift_name("PING_TIMEOUT")));
@property (readonly) NSString *POP_DISCOVERY __attribute__((swift_name("POP_DISCOVERY")));
@property (readonly) NSString *PREFIX_FILE_NAME __attribute__((swift_name("PREFIX_FILE_NAME")));
@property (readonly) NSString *PROTOCOL_VERSION __attribute__((swift_name("PROTOCOL_VERSION")));
@property (readonly) int64_t REGISTRATION_ACK_TIMEOUT __attribute__((swift_name("REGISTRATION_ACK_TIMEOUT")));
@property (readonly) NSString *SOURCE __attribute__((swift_name("SOURCE")));
@property (readonly) NSString *STUN_GOOGL __attribute__((swift_name("STUN_GOOGL")));
@property (readonly) NSString *STUN_XIRSYS __attribute__((swift_name("STUN_XIRSYS")));
@property (readonly) NSString *VIDEO_VP8_INTEL_HW_ENCODER_FIELDTRIAL __attribute__((swift_name("VIDEO_VP8_INTEL_HW_ENCODER_FIELDTRIAL")));
@property (readonly) NSString *WEBRTC_API_GW __attribute__((swift_name("WEBRTC_API_GW")));
@property (readonly) NSString *XIRSYS_TURN_PASSWORD __attribute__((swift_name("XIRSYS_TURN_PASSWORD")));
@property (readonly) NSString *XIRSYS_TURN_URL1 __attribute__((swift_name("XIRSYS_TURN_URL1")));
@property (readonly) NSString *XIRSYS_TURN_URL2 __attribute__((swift_name("XIRSYS_TURN_URL2")));
@property (readonly) NSString *XIRSYS_TURN_USERNAME __attribute__((swift_name("XIRSYS_TURN_USERNAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Const.Storage")))
@interface CSAPIConstStorage : CSAPIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)storage __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSAPIConstStorage *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *LOG_PATH __attribute__((swift_name("LOG_PATH")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformUtils")))
@interface CSAPIPlatformUtils : CSAPIBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)base64EncodeToStringValue:(NSString *)value __attribute__((swift_name("base64EncodeToString(value:)")));
- (int64_t)getCurrentTimestamp __attribute__((swift_name("getCurrentTimestamp()")));
- (CSAPIPlatformName *)getPlatformType __attribute__((swift_name("getPlatformType()")));
- (NSString *)getVersion __attribute__((swift_name("getVersion()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CPaaSAPISettings")))
@interface CSAPICPaaSAPISettings : CSAPIBase
- (instancetype)initWithCustomDomain:(NSString *)customDomain accountSid:(NSString *)accountSid authToken:(NSString *)authToken appSid:(NSString *)appSid clientId:(NSString *)clientId PNSToken:(NSString *)PNSToken baseURL:(NSString *)baseURL __attribute__((swift_name("init(customDomain:accountSid:authToken:appSid:clientId:PNSToken:baseURL:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (CSAPICPaaSAPISettings *)doCopyCustomDomain:(NSString *)customDomain accountSid:(NSString *)accountSid authToken:(NSString *)authToken appSid:(NSString *)appSid clientId:(NSString *)clientId PNSToken:(NSString *)PNSToken baseURL:(NSString *)baseURL __attribute__((swift_name("doCopy(customDomain:accountSid:authToken:appSid:clientId:PNSToken:baseURL:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *PNSToken __attribute__((swift_name("PNSToken")));
@property (readonly) NSString *accountSid __attribute__((swift_name("accountSid")));
@property (readonly) NSString *appSid __attribute__((swift_name("appSid")));
@property (readonly) NSString *authToken __attribute__((swift_name("authToken")));
@property (readonly) NSString *baseURL __attribute__((swift_name("baseURL")));
@property (readonly) NSString *clientId __attribute__((swift_name("clientId")));
@property (readonly) NSString *customDomain __attribute__((swift_name("customDomain")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallInfo")))
@interface CSAPICallInfo : CSAPIBase
- (instancetype)initWithCallId:(NSString *)callId sourceId:(NSString *)sourceId destinationId:(NSString *)destinationId __attribute__((swift_name("init(callId:sourceId:destinationId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (CSAPICallInfo *)doCopyCallId:(NSString *)callId sourceId:(NSString *)sourceId destinationId:(NSString *)destinationId __attribute__((swift_name("doCopy(callId:sourceId:destinationId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *callId __attribute__((swift_name("callId")));
@property (readonly) NSString *destinationId __attribute__((swift_name("destinationId")));
@property (readonly) NSString *sourceId __attribute__((swift_name("sourceId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallOptionService")))
@interface CSAPICallOptionService : CSAPIKotlinEnum<CSAPICallOptionService *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSAPICallOptionService *p2p __attribute__((swift_name("p2p")));
@property (class, readonly) CSAPICallOptionService *p2a __attribute__((swift_name("p2a")));
@property (class, readonly) CSAPICallOptionService *a2p __attribute__((swift_name("a2p")));
@property (class, readonly) CSAPICallOptionService *p2m __attribute__((swift_name("p2m")));
+ (CSAPIKotlinArray<CSAPICallOptionService *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallOptions")))
@interface CSAPICallOptions : CSAPIBase
- (instancetype)initWithAudio:(BOOL)audio destination:(NSString * _Nullable)destination __attribute__((swift_name("init(audio:destination:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CSAPICallOptions *)doCopyAudio:(BOOL)audio destination:(NSString * _Nullable)destination __attribute__((swift_name("doCopy(audio:destination:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL audio __attribute__((swift_name("audio")));
@property (readonly) NSString * _Nullable destination __attribute__((swift_name("destination")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformName")))
@interface CSAPIPlatformName : CSAPIKotlinEnum<CSAPIPlatformName *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSAPIPlatformName *android __attribute__((swift_name("android")));
@property (class, readonly) CSAPIPlatformName *ios __attribute__((swift_name("ios")));
@property (class, readonly) CSAPIPlatformName *webBrowser __attribute__((swift_name("webBrowser")));
@property (class, readonly) CSAPIPlatformName *webDesktop __attribute__((swift_name("webDesktop")));
+ (CSAPIKotlinArray<CSAPIPlatformName *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceType")))
@interface CSAPIServiceType : CSAPIKotlinEnum<CSAPIServiceType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSAPIServiceType *voice __attribute__((swift_name("voice")));
@property (class, readonly) CSAPIServiceType *video __attribute__((swift_name("video")));
+ (CSAPIKotlinArray<CSAPIServiceType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CognitoResult")))
@interface CSAPICognitoResult<T> : CSAPIBase
- (instancetype)initWithResult:(T _Nullable)result error:(NSError * _Nullable)error __attribute__((swift_name("init(result:error:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSError * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CSAPICognitoResult<T> *)doCopyResult:(T _Nullable)result error:(NSError * _Nullable)error __attribute__((swift_name("doCopy(result:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((swift_name("PlatformSocketListener")))
@protocol CSAPIPlatformSocketListener
@required
- (void)onClosedCode:(int32_t)code reason:(NSString *)reason __attribute__((swift_name("onClosed(code:reason:)")));
- (void)onClosingCode:(int32_t)code reason:(NSString *)reason __attribute__((swift_name("onClosing(code:reason:)")));
- (void)onFailureT:(CSAPIKotlinThrowable *)t __attribute__((swift_name("onFailure(t:)")));
- (void)onMessageMsg:(NSString *)msg __attribute__((swift_name("onMessage(msg:)")));
- (void)onOpen __attribute__((swift_name("onOpen()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface CSAPIKotlinByteArray : CSAPIBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CSAPIByte *(^)(CSAPIInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CSAPIKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface CSAPIKotlinByteArray (Extensions)
- (NSData *)toNSData __attribute__((swift_name("toNSData()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CPaaSFileLoggerKt")))
@interface CSAPICPaaSFileLoggerKt : CSAPIBase
+ (id _Nullable)throwErrorBlock:(id _Nullable (^)(id))block __attribute__((swift_name("throwError(block:)")));
+ (NSURL *)append:(NSURL *)receiver component:(NSString *)component isDirectory:(BOOL)isDirectory __attribute__((swift_name("append(_:component:isDirectory:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseBodyKt")))
@interface CSAPIBaseBodyKt : CSAPIBase
@property (class, readonly) CSAPIKotlinx_serialization_coreSerializersModule *module __attribute__((swift_name("module")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface CSAPIKotlinUnit : CSAPIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSAPIKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface CSAPIKotlinEnumCompanion : CSAPIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSAPIKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CSAPIKotlinArray<T> : CSAPIBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CSAPIInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CSAPIKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol CSAPIKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface CSAPIKotlinByteIterator : CSAPIBase <CSAPIKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CSAPIByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface CSAPIKotlinx_serialization_coreSerializersModule : CSAPIBase
- (void)dumpToCollector:(id<CSAPIKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<CSAPIKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<CSAPIKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<CSAPIKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<CSAPIKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CSAPIKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<CSAPIKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CSAPIKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol CSAPIKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<CSAPIKotlinKClass>)kClass provider:(id<CSAPIKotlinx_serialization_coreKSerializer> (^)(NSArray<id<CSAPIKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<CSAPIKotlinKClass>)kClass serializer:(id<CSAPIKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<CSAPIKotlinKClass>)baseClass actualClass:(id<CSAPIKotlinKClass>)actualClass actualSerializer:(id<CSAPIKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<CSAPIKotlinKClass>)baseClass defaultDeserializerProvider:(id<CSAPIKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<CSAPIKotlinKClass>)baseClass defaultDeserializerProvider:(id<CSAPIKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<CSAPIKotlinKClass>)baseClass defaultSerializerProvider:(id<CSAPIKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol CSAPIKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<CSAPIKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<CSAPIKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol CSAPIKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CSAPIKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<CSAPIKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol CSAPIKotlinx_serialization_coreKSerializer <CSAPIKotlinx_serialization_coreSerializationStrategy, CSAPIKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CSAPIKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CSAPIKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol CSAPIKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol CSAPIKotlinKClass <CSAPIKotlinKDeclarationContainer, CSAPIKotlinKAnnotatedElement, CSAPIKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol CSAPIKotlinx_serialization_coreEncoder
@required
- (id<CSAPIKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<CSAPIKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<CSAPIKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<CSAPIKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CSAPIKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) CSAPIKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol CSAPIKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<CSAPIKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<CSAPIKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<CSAPIKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) CSAPIKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol CSAPIKotlinx_serialization_coreDecoder
@required
- (id<CSAPIKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<CSAPIKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (CSAPIKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CSAPIKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CSAPIKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) CSAPIKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol CSAPIKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<CSAPIKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CSAPIKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CSAPIKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) CSAPIKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol CSAPIKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface CSAPIKotlinx_serialization_coreSerialKind : CSAPIBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol CSAPIKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<CSAPIKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CSAPIKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CSAPIKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<CSAPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) CSAPIKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CSAPIKotlinNothing : CSAPIBase
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
