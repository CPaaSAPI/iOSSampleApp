#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CAPICPaaSAPI, CAPICPaaSAPILogFileProvider, CAPICPaaSAPISettings, CAPICallOptions, CAPIReason, CAPIKotlinEnumCompanion, CAPIKotlinEnum<E>, CAPIKotlinArray<T>, CAPIOperationType, CAPIKotlinThrowable, CAPIKotlinException, CAPIKotlinRuntimeException, CAPISessionDescriptionType, NSURL, CAPILogLevel, NSError, CAPICommonLib, CAPIConst, CAPIPlatformName, CAPICallInfo, CAPIKotlinx_serialization_coreSerializersModule, CAPIKotlinx_serialization_coreSerialKind, CAPIKotlinNothing;

@protocol CAPIICall, CAPICPaaSAPICb, CAPIICallEvents, CAPIKotlinComparable, CAPIKotlinIterator, CAPIKotlinx_serialization_coreSerializersModuleCollector, CAPIKotlinx_serialization_coreKSerializer, CAPIKotlinKClass, CAPIKotlinx_serialization_coreSerializationStrategy, CAPIKotlinx_serialization_coreDeserializationStrategy, CAPIKotlinx_serialization_coreEncoder, CAPIKotlinx_serialization_coreSerialDescriptor, CAPIKotlinx_serialization_coreDecoder, CAPIKotlinKDeclarationContainer, CAPIKotlinKAnnotatedElement, CAPIKotlinKClassifier, CAPIKotlinx_serialization_coreCompositeEncoder, CAPIKotlinAnnotation, CAPIKotlinx_serialization_coreCompositeDecoder;

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
@interface CAPIBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface CAPIBase (CAPIBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface CAPIMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CAPIMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorCAPIKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface CAPINumber : NSNumber
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
@interface CAPIByte : CAPINumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface CAPIUByte : CAPINumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface CAPIShort : CAPINumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface CAPIUShort : CAPINumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface CAPIInt : CAPINumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface CAPIUInt : CAPINumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface CAPILong : CAPINumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface CAPIULong : CAPINumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface CAPIFloat : CAPINumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface CAPIDouble : CAPINumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface CAPIBoolean : CAPINumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CPaaSAPI")))
@interface CAPICPaaSAPI : CAPIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cPaaSAPI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CAPICPaaSAPI *shared __attribute__((swift_name("shared")));
- (id<CAPIICall> _Nullable)getExistingCallCallId:(NSString *)callId __attribute__((swift_name("getExistingCall(callId:)")));
- (CAPICPaaSAPILogFileProvider *)getFileLogProvider __attribute__((swift_name("getFileLogProvider()")));
- (void)logout __attribute__((swift_name("logout()")));
- (void)registerSettings:(CAPICPaaSAPISettings *)settings cpaasAPICb:(id<CAPICPaaSAPICb>)cpaasAPICb __attribute__((swift_name("register(settings:cpaasAPICb:)")));
- (id<CAPIICall> _Nullable)startCallDestinationId:(NSString *)destinationId callOptions:(CAPICallOptions *)callOptions __attribute__((swift_name("startCall(destinationId:callOptions:)")));
- (void)updateInitParamsSettings:(CAPICPaaSAPISettings *)settings __attribute__((swift_name("updateInitParams(settings:)")));
@end;

__attribute__((swift_name("CPaaSAPICb")))
@protocol CAPICPaaSAPICb
@required
- (void)onIncomingCallCall:(id<CAPIICall>)call __attribute__((swift_name("onIncomingCall(call:)")));
- (void)onRegistrationCompleteSuccess:(BOOL)success __attribute__((swift_name("onRegistrationComplete(success:)")));
@end;

__attribute__((swift_name("ICall")))
@protocol CAPIICall
@required
- (void)endCall __attribute__((swift_name("endCall()")));
- (NSString *)getCallId __attribute__((swift_name("getCallId()")));
- (NSString *)getDestinationId __attribute__((swift_name("getDestinationId()")));
- (void)hold __attribute__((swift_name("hold()")));
- (CAPIBoolean * _Nullable)isHold __attribute__((swift_name("isHold()")));
- (CAPIBoolean * _Nullable)isMute __attribute__((swift_name("isMute()")));
- (void)joinCall __attribute__((swift_name("joinCall()")));
- (void)muteCompletion:(void (^)(CAPIBoolean *))completion __attribute__((swift_name("mute(completion:)")));
- (void)rejectCall __attribute__((swift_name("rejectCall()")));
- (void)resume __attribute__((swift_name("resume()")));
- (void)unMuteCompletion:(void (^)(CAPIBoolean *))completion __attribute__((swift_name("unMute(completion:)")));
@property id<CAPIICallEvents> _Nullable eventListener __attribute__((swift_name("eventListener")));
@end;

__attribute__((swift_name("ICallEvents")))
@protocol CAPIICallEvents
@required
- (void)onCallEndReason:(CAPIReason * _Nullable)reason __attribute__((swift_name("onCallEnd(reason:)")));
- (void)onConnected __attribute__((swift_name("onConnected()")));
- (void)onConnectedFailureReason:(CAPIReason *)reason __attribute__((swift_name("onConnectedFailure(reason:)")));
- (void)onReconnectingReason:(CAPIReason *)reason __attribute__((swift_name("onReconnecting(reason:)")));
- (void)onRinging __attribute__((swift_name("onRinging()")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol CAPIKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface CAPIKotlinEnum<E> : CAPIBase <CAPIKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CAPIKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Reason")))
@interface CAPIReason : CAPIKotlinEnum<CAPIReason *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CAPIReason *busy __attribute__((swift_name("busy")));
@property (class, readonly) CAPIReason *reject __attribute__((swift_name("reject")));
@property (class, readonly) CAPIReason *badRequest __attribute__((swift_name("badRequest")));
@property (class, readonly) CAPIReason *unauthorized __attribute__((swift_name("unauthorized")));
@property (class, readonly) CAPIReason *notFound __attribute__((swift_name("notFound")));
@property (class, readonly) CAPIReason *gone __attribute__((swift_name("gone")));
@property (class, readonly) CAPIReason *timeOut __attribute__((swift_name("timeOut")));
@property (class, readonly) CAPIReason *rtpLost __attribute__((swift_name("rtpLost")));
+ (CAPIKotlinArray<CAPIReason *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DCHandler")))
@interface CAPIDCHandler : CAPIBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("IOperation")))
@protocol CAPIIOperation
@required
- (void)abort __attribute__((swift_name("abort()")));
- (void)executeCompleteListener:(void (^)(CAPIBoolean *))completeListener __attribute__((swift_name("execute(completeListener:)")));
- (CAPIOperationType *)getType __attribute__((swift_name("getType()")));
@property BOOL isRunning __attribute__((swift_name("isRunning")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationType")))
@interface CAPIOperationType : CAPIKotlinEnum<CAPIOperationType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CAPIOperationType *createPeerConnection __attribute__((swift_name("createPeerConnection")));
@property (class, readonly) CAPIOperationType *createConnectionOffer __attribute__((swift_name("createConnectionOffer")));
@property (class, readonly) CAPIOperationType *createConnectionAnswer __attribute__((swift_name("createConnectionAnswer")));
@property (class, readonly) CAPIOperationType *mute __attribute__((swift_name("mute")));
@property (class, readonly) CAPIOperationType *createOffer __attribute__((swift_name("createOffer")));
@property (class, readonly) CAPIOperationType *sendOffer __attribute__((swift_name("sendOffer")));
@property (class, readonly) CAPIOperationType *sendAnswer __attribute__((swift_name("sendAnswer")));
@property (class, readonly) CAPIOperationType *endCall __attribute__((swift_name("endCall")));
@property (class, readonly) CAPIOperationType *endCallAck __attribute__((swift_name("endCallAck")));
@property (class, readonly) CAPIOperationType *register_ __attribute__((swift_name("register_")));
@property (class, readonly) CAPIOperationType *reject __attribute__((swift_name("reject")));
@property (class, readonly) CAPIOperationType *getIceSettings __attribute__((swift_name("getIceSettings")));
@property (class, readonly) CAPIOperationType *mock __attribute__((swift_name("mock")));
@property (class, readonly) CAPIOperationType *popDiscovery __attribute__((swift_name("popDiscovery")));
@property (class, readonly) CAPIOperationType *cognitoAuth __attribute__((swift_name("cognitoAuth")));
@property (class, readonly) CAPIOperationType *openWs __attribute__((swift_name("openWs")));
+ (CAPIKotlinArray<CAPIOperationType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface CAPIKotlinThrowable : CAPIBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (CAPIKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CAPIKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface CAPIKotlinException : CAPIKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface CAPIKotlinRuntimeException : CAPIKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PeerConnectionErrorException")))
@interface CAPIPeerConnectionErrorException : CAPIKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionDescriptionType")))
@interface CAPISessionDescriptionType : CAPIKotlinEnum<CAPISessionDescriptionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CAPISessionDescriptionType *offer __attribute__((swift_name("offer")));
@property (class, readonly) CAPISessionDescriptionType *answer __attribute__((swift_name("answer")));
+ (CAPIKotlinArray<CAPISessionDescriptionType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CPaaSAPILogFileProvider")))
@interface CAPICPaaSAPILogFileProvider : CAPIBase
- (instancetype)initWithFile:(NSURL *)file __attribute__((swift_name("init(file:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogLevel")))
@interface CAPILogLevel : CAPIKotlinEnum<CAPILogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CAPILogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) CAPILogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) CAPILogLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) CAPILogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) CAPILogLevel *verbose __attribute__((swift_name("verbose")));
+ (CAPIKotlinArray<CAPILogLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSErrorException")))
@interface CAPINSErrorException : CAPIKotlinException
- (instancetype)initWithNsError:(NSError *)nsError __attribute__((swift_name("init(nsError:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CAPIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonLib")))
@interface CAPICommonLib : CAPIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)commonLib __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CAPICommonLib *shared __attribute__((swift_name("shared")));
- (NSString *)getVersion __attribute__((swift_name("getVersion()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Const")))
@interface CAPIConst : CAPIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)const_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CAPIConst *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *AUTH_HEADER_NAME __attribute__((swift_name("AUTH_HEADER_NAME")));
@property (readonly) NSString *AUTH_HEADER_PREFIX __attribute__((swift_name("AUTH_HEADER_PREFIX")));
@property (readonly) NSString *AUTH_HEADER_TOKEN __attribute__((swift_name("AUTH_HEADER_TOKEN")));
@property (readonly) NSString *CLIENT_VERSION __attribute__((swift_name("CLIENT_VERSION")));
@property (readonly) NSString *DEVICE_ID __attribute__((swift_name("DEVICE_ID")));
@property (readonly) NSString *FILE_NAME_EXTENSION __attribute__((swift_name("FILE_NAME_EXTENSION")));
@property (readonly) NSString *LIB_VERSION __attribute__((swift_name("LIB_VERSION")));
@property (readonly) int32_t MAX_STATISTICS_HISTORY_SIZE __attribute__((swift_name("MAX_STATISTICS_HISTORY_SIZE")));
@property (readonly) int64_t PING_INTERVAL __attribute__((swift_name("PING_INTERVAL")));
@property (readonly) int64_t PING_TIMEOUT __attribute__((swift_name("PING_TIMEOUT")));
@property (readonly) NSString *PREFIX_FILE_NAME __attribute__((swift_name("PREFIX_FILE_NAME")));
@property (readonly) NSString *PROTOCOL_VERSION __attribute__((swift_name("PROTOCOL_VERSION")));
@property (readonly) NSString *SOURCE __attribute__((swift_name("SOURCE")));
@property (readonly) NSString *STUN_GOOGL __attribute__((swift_name("STUN_GOOGL")));
@property (readonly) NSString *STUN_XIRSYS __attribute__((swift_name("STUN_XIRSYS")));
@property (readonly) NSString *TURN_URL __attribute__((swift_name("TURN_URL")));
@property (readonly) NSString *VIDEO_VP8_INTEL_HW_ENCODER_FIELDTRIAL __attribute__((swift_name("VIDEO_VP8_INTEL_HW_ENCODER_FIELDTRIAL")));
@property (readonly) NSString *WS_MESSAGE_DESTINATION __attribute__((swift_name("WS_MESSAGE_DESTINATION")));
@property (readonly) NSString *WS_URL __attribute__((swift_name("WS_URL")));
@property (readonly) NSString *WS_URL_AWS __attribute__((swift_name("WS_URL_AWS")));
@property (readonly) NSString *XIRSYS_TURN_PASSWORD __attribute__((swift_name("XIRSYS_TURN_PASSWORD")));
@property (readonly) NSString *XIRSYS_TURN_URL1 __attribute__((swift_name("XIRSYS_TURN_URL1")));
@property (readonly) NSString *XIRSYS_TURN_URL2 __attribute__((swift_name("XIRSYS_TURN_URL2")));
@property (readonly) NSString *XIRSYS_TURN_USERNAME __attribute__((swift_name("XIRSYS_TURN_USERNAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformUtils")))
@interface CAPIPlatformUtils : CAPIBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)base64EncodeToStringValue:(NSString *)value __attribute__((swift_name("base64EncodeToString(value:)")));
- (id)getBuildNumber __attribute__((swift_name("getBuildNumber()")));
- (int64_t)getCurrentTimestamp __attribute__((swift_name("getCurrentTimestamp()")));
- (CAPIPlatformName *)getPlatformType __attribute__((swift_name("getPlatformType()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CPaaSAPISettings")))
@interface CAPICPaaSAPISettings : CAPIBase
- (instancetype)initWithCustomDomain:(NSString *)customDomain accountSid:(NSString *)accountSid accountToken:(NSString *)accountToken appSid:(NSString *)appSid clientId:(NSString *)clientId PNSToken:(NSString *)PNSToken BaseURL:(NSString *)BaseURL __attribute__((swift_name("init(customDomain:accountSid:accountToken:appSid:clientId:PNSToken:BaseURL:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (CAPICPaaSAPISettings *)doCopyCustomDomain:(NSString *)customDomain accountSid:(NSString *)accountSid accountToken:(NSString *)accountToken appSid:(NSString *)appSid clientId:(NSString *)clientId PNSToken:(NSString *)PNSToken BaseURL:(NSString *)BaseURL __attribute__((swift_name("doCopy(customDomain:accountSid:accountToken:appSid:clientId:PNSToken:BaseURL:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *BaseURL __attribute__((swift_name("BaseURL")));
@property (readonly) NSString *PNSToken __attribute__((swift_name("PNSToken")));
@property (readonly) NSString *accountSid __attribute__((swift_name("accountSid")));
@property (readonly) NSString *accountToken __attribute__((swift_name("accountToken")));
@property (readonly) NSString *appSid __attribute__((swift_name("appSid")));
@property (readonly) NSString *clientId __attribute__((swift_name("clientId")));
@property (readonly) NSString *customDomain __attribute__((swift_name("customDomain")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallInfo")))
@interface CAPICallInfo : CAPIBase
- (instancetype)initWithCallId:(NSString *)callId sourceId:(NSString *)sourceId destinationId:(NSString *)destinationId __attribute__((swift_name("init(callId:sourceId:destinationId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (CAPICallInfo *)doCopyCallId:(NSString *)callId sourceId:(NSString *)sourceId destinationId:(NSString *)destinationId __attribute__((swift_name("doCopy(callId:sourceId:destinationId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *callId __attribute__((swift_name("callId")));
@property (readonly) NSString *destinationId __attribute__((swift_name("destinationId")));
@property (readonly) NSString *sourceId __attribute__((swift_name("sourceId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallOptions")))
@interface CAPICallOptions : CAPIBase
- (instancetype)initWithAudio:(BOOL)audio __attribute__((swift_name("init(audio:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (CAPICallOptions *)doCopyAudio:(BOOL)audio __attribute__((swift_name("doCopy(audio:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL audio __attribute__((swift_name("audio")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformName")))
@interface CAPIPlatformName : CAPIKotlinEnum<CAPIPlatformName *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CAPIPlatformName *android __attribute__((swift_name("android")));
@property (class, readonly) CAPIPlatformName *ios __attribute__((swift_name("ios")));
@property (class, readonly) CAPIPlatformName *webBrowser __attribute__((swift_name("webBrowser")));
@property (class, readonly) CAPIPlatformName *webDesktop __attribute__((swift_name("webDesktop")));
+ (CAPIKotlinArray<CAPIPlatformName *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("PlatformSocketListener")))
@protocol CAPIPlatformSocketListener
@required
- (void)onClosedCode:(int32_t)code reason:(NSString *)reason __attribute__((swift_name("onClosed(code:reason:)")));
- (void)onClosingCode:(int32_t)code reason:(NSString *)reason __attribute__((swift_name("onClosing(code:reason:)")));
- (void)onFailureT:(CAPIKotlinThrowable *)t __attribute__((swift_name("onFailure(t:)")));
- (void)onMessageMsg:(NSString *)msg __attribute__((swift_name("onMessage(msg:)")));
- (void)onOpen __attribute__((swift_name("onOpen()")));
@end;

__attribute__((swift_name("WSHandlerCallback")))
@protocol CAPIWSHandlerCallback
@required
- (void)onWsClosedCode:(int32_t)code __attribute__((swift_name("onWsClosed(code:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CPaaSFileLoggerKt")))
@interface CAPICPaaSFileLoggerKt : CAPIBase
+ (id _Nullable)throwErrorBlock:(id _Nullable (^)(id))block __attribute__((swift_name("throwError(block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseBodyKt")))
@interface CAPIBaseBodyKt : CAPIBase
@property (class, readonly) CAPIKotlinx_serialization_coreSerializersModule *module __attribute__((swift_name("module")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface CAPIKotlinEnumCompanion : CAPIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CAPIKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CAPIKotlinArray<T> : CAPIBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CAPIInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CAPIKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface CAPIKotlinx_serialization_coreSerializersModule : CAPIBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<CAPIKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<CAPIKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<CAPIKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<CAPIKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<CAPIKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CAPIKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<CAPIKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CAPIKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol CAPIKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol CAPIKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<CAPIKotlinKClass>)kClass provider:(id<CAPIKotlinx_serialization_coreKSerializer> (^)(NSArray<id<CAPIKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<CAPIKotlinKClass>)kClass serializer:(id<CAPIKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<CAPIKotlinKClass>)baseClass actualClass:(id<CAPIKotlinKClass>)actualClass actualSerializer:(id<CAPIKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<CAPIKotlinKClass>)baseClass defaultDeserializerProvider:(id<CAPIKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<CAPIKotlinKClass>)baseClass defaultDeserializerProvider:(id<CAPIKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<CAPIKotlinKClass>)baseClass defaultSerializerProvider:(id<CAPIKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol CAPIKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<CAPIKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<CAPIKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol CAPIKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CAPIKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<CAPIKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol CAPIKotlinx_serialization_coreKSerializer <CAPIKotlinx_serialization_coreSerializationStrategy, CAPIKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CAPIKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CAPIKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol CAPIKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol CAPIKotlinKClass <CAPIKotlinKDeclarationContainer, CAPIKotlinKAnnotatedElement, CAPIKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol CAPIKotlinx_serialization_coreEncoder
@required
- (id<CAPIKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<CAPIKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<CAPIKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<CAPIKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CAPIKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) CAPIKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol CAPIKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<CAPIKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<CAPIKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<CAPIKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) CAPIKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol CAPIKotlinx_serialization_coreDecoder
@required
- (id<CAPIKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<CAPIKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (CAPIKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CAPIKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CAPIKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) CAPIKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol CAPIKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<CAPIKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CAPIKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CAPIKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) CAPIKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol CAPIKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface CAPIKotlinx_serialization_coreSerialKind : CAPIBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol CAPIKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<CAPIKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CAPIKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CAPIKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<CAPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) CAPIKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CAPIKotlinNothing : CAPIBase
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
