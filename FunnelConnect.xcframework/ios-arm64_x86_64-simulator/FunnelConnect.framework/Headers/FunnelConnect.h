#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class FunnelConnectFCOptions, FunnelConnectFCUserCompanion, FunnelConnectFCUser, FunnelConnectPassQueryCompanion, FunnelConnectPassQuery, FunnelConnectKotlinThrowable, FunnelConnectKotlinArray<T>, FunnelConnectCoreBaseError, FunnelConnectIdentificationNotEnabledException, FunnelConnectInfoNotEnabledException, FunnelConnectTrackingNotEnabledException, NSError, FunnelConnectFunnelConnectSDK, FunnelConnectPermissions, FunnelConnectBasePermissions, NSDictionary, FunnelConnectKotlinx_serialization_coreSerializersModule, FunnelConnectKotlinx_serialization_coreSerialKind, FunnelConnectKotlinNothing;

@protocol FunnelConnectKotlinx_serialization_coreKSerializer, FunnelConnectCoreSDKMainClassUtils, FunnelConnectKotlinx_serialization_coreEncoder, FunnelConnectKotlinx_serialization_coreSerialDescriptor, FunnelConnectKotlinx_serialization_coreSerializationStrategy, FunnelConnectKotlinx_serialization_coreDecoder, FunnelConnectKotlinx_serialization_coreDeserializationStrategy, FunnelConnectKotlinIterator, FunnelConnectKotlinx_serialization_coreCompositeEncoder, FunnelConnectKotlinAnnotation, FunnelConnectKotlinx_serialization_coreCompositeDecoder, FunnelConnectKotlinx_serialization_coreSerializersModuleCollector, FunnelConnectKotlinKClass, FunnelConnectKotlinKDeclarationContainer, FunnelConnectKotlinKAnnotatedElement, FunnelConnectKotlinKClassifier;

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
@interface FunnelConnectBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface FunnelConnectBase (FunnelConnectBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface FunnelConnectMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface FunnelConnectMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorFunnelConnectKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface FunnelConnectNumber : NSNumber
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
@end

__attribute__((swift_name("KotlinByte")))
@interface FunnelConnectByte : FunnelConnectNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface FunnelConnectUByte : FunnelConnectNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface FunnelConnectShort : FunnelConnectNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface FunnelConnectUShort : FunnelConnectNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface FunnelConnectInt : FunnelConnectNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface FunnelConnectUInt : FunnelConnectNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface FunnelConnectLong : FunnelConnectNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface FunnelConnectULong : FunnelConnectNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface FunnelConnectFloat : FunnelConnectNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface FunnelConnectDouble : FunnelConnectNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface FunnelConnectBoolean : FunnelConnectNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FCOptions")))
@interface FunnelConnectFCOptions : FunnelConnectBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FunnelConnectFCOptions *)enableLogging __attribute__((swift_name("enableLogging()")));
- (FunnelConnectFCOptions *)setFallBackConfigJsonJson:(NSString *)json __attribute__((swift_name("setFallBackConfigJson(json:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FCUser")))
@interface FunnelConnectFCUser : FunnelConnectBase
- (instancetype)initWithUserIdType:(NSString *)userIdType userId:(NSString *)userId __attribute__((swift_name("init(userIdType:userId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FunnelConnectFCUserCompanion *companion __attribute__((swift_name("companion")));
- (FunnelConnectFCUser *)doCopyUserIdType:(NSString *)userIdType userId:(NSString *)userId __attribute__((swift_name("doCopy(userIdType:userId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) NSString *userIdType __attribute__((swift_name("userIdType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FCUser.Companion")))
@interface FunnelConnectFCUserCompanion : FunnelConnectBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FunnelConnectFCUserCompanion *shared __attribute__((swift_name("shared")));
- (id<FunnelConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PassQuery")))
@interface FunnelConnectPassQuery : FunnelConnectBase
- (instancetype)initWithKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("init(key:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FunnelConnectPassQueryCompanion *companion __attribute__((swift_name("companion")));
- (FunnelConnectPassQuery *)doCopyKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("doCopy(key:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PassQuery.Companion")))
@interface FunnelConnectPassQueryCompanion : FunnelConnectBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FunnelConnectPassQueryCompanion *shared __attribute__((swift_name("shared")));
- (id<FunnelConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface FunnelConnectKotlinThrowable : FunnelConnectBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FunnelConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FunnelConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (FunnelConnectKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FunnelConnectKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("CoreBaseError")))
@interface FunnelConnectCoreBaseError : FunnelConnectKotlinThrowable
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(FunnelConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FunnelConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) int64_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentificationNotEnabledException")))
@interface FunnelConnectIdentificationNotEnabledException : FunnelConnectCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)identificationNotEnabledException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FunnelConnectIdentificationNotEnabledException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoNotEnabledException")))
@interface FunnelConnectInfoNotEnabledException : FunnelConnectCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)infoNotEnabledException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FunnelConnectInfoNotEnabledException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackingNotEnabledException")))
@interface FunnelConnectTrackingNotEnabledException : FunnelConnectCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)trackingNotEnabledException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FunnelConnectTrackingNotEnabledException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("CoreSDKMainClassUtils")))
@protocol FunnelConnectCoreSDKMainClassUtils
@required

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (id _Nullable)tryOrReThrowAndReturnError:(NSError * _Nullable * _Nullable)error function:(id _Nullable (^)(void))function __attribute__((swift_name("tryOrReThrow(function:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)tryOrReThrowAndReturnError:(NSError * _Nullable * _Nullable)error function_:(void (^)(void))function __attribute__((swift_name("tryOrReThrow(function_:)")));
- (void)tryOrThrowFunction:(void (^)(void))function errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("tryOrThrow(function:errorCallback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FunnelConnectSDK")))
@interface FunnelConnectFunnelConnectSDK : FunnelConnectBase <FunnelConnectCoreSDKMainClassUtils>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)funnelConnectSDK __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FunnelConnectFunnelConnectSDK *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)clearCookiesAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("clearCookies()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)clearDataAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("clearData()")));
- (void)didInitializeWithResultSuccess:(void (^)(void))success failure:(void (^)(NSError *))failure __attribute__((swift_name("didInitializeWithResult(success:failure:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (FunnelConnectPermissions * _Nullable)getPermissionsAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("getPermissions()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (NSString * _Nullable)getUMIDAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("getUMID()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (NSString * _Nullable)getUserIdByKeyKey:(NSString *)key error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("getUserIdByKey(key:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (NSArray<FunnelConnectFCUser *> * _Nullable)getUsersAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("getUsers()")));
- (void)initializeSdkToken:(NSString *)sdkToken __attribute__((swift_name("initialize(sdkToken:)")));
- (void)initializeSdkToken:(NSString *)sdkToken options:(FunnelConnectFCOptions *)options __attribute__((swift_name("initialize(sdkToken:options:)")));
- (BOOL)isInitialize __attribute__((swift_name("isInitialize()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)logEventKey:(NSString *)key value:(NSString *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("logEvent(key:value:)")));
- (void)logEventKey:(NSString *)key value:(NSString *)value successCallback:(void (^)(void))successCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("logEvent(key:value:successCallback:errorCallback:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)logEventsEvents:(NSDictionary<NSString *, NSString *> *)events error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("logEvents(events:)")));
- (void)logEventsEvents:(NSDictionary<NSString *, NSString *> *)events successCallback:(void (^)(void))successCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("logEvents(events:successCallback:errorCallback:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)setUserFcUser:(FunnelConnectFCUser *)fcUser error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("setUser(fcUser:)")));
- (void)setUserFcUser:(FunnelConnectFCUser *)fcUser dataCallback:(void (^)(NSString *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("setUser(fcUser:dataCallback:errorCallback:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)setUsersFcUsers:(NSArray<FunnelConnectFCUser *> *)fcUsers error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("setUsers(fcUsers:)")));
- (void)setUsersFcUsers:(NSArray<FunnelConnectFCUser *> *)fcUsers dataCallback:(void (^)(NSString *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("setUsers(fcUsers:dataCallback:errorCallback:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)startServicePassQuery:(FunnelConnectPassQuery * _Nullable)passQuery error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("startService(passQuery:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)startServiceFcUser:(FunnelConnectFCUser *)fcUser passQuery:(FunnelConnectPassQuery * _Nullable)passQuery error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("startService(fcUser:passQuery:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)startServiceFcUsers:(NSArray<FunnelConnectFCUser *> *)fcUsers passQuery:(FunnelConnectPassQuery * _Nullable)passQuery error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("startService(fcUsers:passQuery:)")));
- (void)startServicePassQuery:(FunnelConnectPassQuery * _Nullable)passQuery dataCallback:(void (^)(NSString *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("startService(passQuery:dataCallback:errorCallback:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)startServicePassQuery:(FunnelConnectPassQuery * _Nullable)passQuery notificationsName:(NSString *)notificationsName notificationsVersion:(int32_t)notificationsVersion error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("startService(passQuery:notificationsName:notificationsVersion:)")));
- (void)startServiceFcUser:(FunnelConnectFCUser *)fcUser passQuery:(FunnelConnectPassQuery * _Nullable)passQuery dataCallback:(void (^)(NSString *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("startService(fcUser:passQuery:dataCallback:errorCallback:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)startServiceFcUser:(FunnelConnectFCUser *)fcUser passQuery:(FunnelConnectPassQuery * _Nullable)passQuery notificationsName:(NSString *)notificationsName notificationsVersion:(int32_t)notificationsVersion error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("startService(fcUser:passQuery:notificationsName:notificationsVersion:)")));
- (void)startServiceFcUsers:(NSArray<FunnelConnectFCUser *> *)fcUsers passQuery:(FunnelConnectPassQuery * _Nullable)passQuery dataCallback:(void (^)(NSString *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("startService(fcUsers:passQuery:dataCallback:errorCallback:)")));
- (void)startServicePassQuery:(FunnelConnectPassQuery * _Nullable)passQuery notificationsName:(NSString *)notificationsName notificationsVersion:(int32_t)notificationsVersion dataCallback:(void (^)(NSString *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("startService(passQuery:notificationsName:notificationsVersion:dataCallback:errorCallback:)")));
- (void)startServiceFcUser:(FunnelConnectFCUser *)fcUser passQuery:(FunnelConnectPassQuery * _Nullable)passQuery notificationsName:(NSString *)notificationsName notificationsVersion:(int32_t)notificationsVersion dataCallback:(void (^)(NSString *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("startService(fcUser:passQuery:notificationsName:notificationsVersion:dataCallback:errorCallback:)")));
- (void)startServiceFcUsers:(NSArray<FunnelConnectFCUser *> *)fcUsers passQuery:(FunnelConnectPassQuery * _Nullable)passQuery notificationsName:(NSString *)notificationsName notificationsVersion:(int32_t)notificationsVersion dataCallback:(void (^)(NSString *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("startService(fcUsers:passQuery:notificationsName:notificationsVersion:dataCallback:errorCallback:)")));
- (void)updatePermissionsPermissions:(FunnelConnectPermissions *)permissions errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("updatePermissions(permissions:errorCallback:)")));
- (void)updatePermissionsPermissions:(FunnelConnectPermissions *)permissions dataCallback:(void (^)(NSString *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("updatePermissions(permissions:dataCallback:errorCallback:)")));
- (void)updatePermissionsPermissions:(FunnelConnectPermissions *)permissions notificationsName:(NSString *)notificationsName notificationsVersion:(int32_t)notificationsVersion errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("updatePermissions(permissions:notificationsName:notificationsVersion:errorCallback:)")));
- (void)updatePermissionsPermissions:(FunnelConnectPermissions *)permissions notificationsName:(NSString *)notificationsName notificationsVersion:(int32_t)notificationsVersion dataCallback:(void (^)(NSString *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("updatePermissions(permissions:notificationsName:notificationsVersion:dataCallback:errorCallback:)")));
@end

__attribute__((swift_name("BasePermissions")))
@interface FunnelConnectBasePermissions : FunnelConnectBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(NSString *)key accepted:(BOOL)accepted __attribute__((swift_name("init(key:accepted:)"))) __attribute__((objc_designated_initializer));
- (void)addPermissionKey:(NSString *)key accepted:(BOOL)accepted __attribute__((swift_name("addPermission(key:accepted:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsKeyKey:(NSString *)key __attribute__((swift_name("containsKey(key:)")));
- (BOOL)containsValueValue:(BOOL)value __attribute__((swift_name("containsValue(value:)")));
- (BOOL)getPermissionKey:(NSString *)key __attribute__((swift_name("getPermission(key:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Permissions")))
@interface FunnelConnectPermissions : FunnelConnectBasePermissions
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(NSString *)key accepted:(BOOL)accepted __attribute__((swift_name("init(key:accepted:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSDictionary *)asDictionary __attribute__((swift_name("asDictionary()")));
- (NSArray<NSString *> *)getAllKeys __attribute__((swift_name("getAllKeys()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol FunnelConnectKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<FunnelConnectKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<FunnelConnectKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol FunnelConnectKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<FunnelConnectKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<FunnelConnectKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol FunnelConnectKotlinx_serialization_coreKSerializer <FunnelConnectKotlinx_serialization_coreSerializationStrategy, FunnelConnectKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface FunnelConnectKotlinArray<T> : FunnelConnectBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(FunnelConnectInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<FunnelConnectKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol FunnelConnectKotlinx_serialization_coreEncoder
@required
- (id<FunnelConnectKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<FunnelConnectKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<FunnelConnectKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<FunnelConnectKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<FunnelConnectKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) FunnelConnectKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol FunnelConnectKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<FunnelConnectKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<FunnelConnectKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) FunnelConnectKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol FunnelConnectKotlinx_serialization_coreDecoder
@required
- (id<FunnelConnectKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<FunnelConnectKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (FunnelConnectKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<FunnelConnectKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<FunnelConnectKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) FunnelConnectKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol FunnelConnectKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol FunnelConnectKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<FunnelConnectKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<FunnelConnectKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<FunnelConnectKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) FunnelConnectKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface FunnelConnectKotlinx_serialization_coreSerializersModule : FunnelConnectBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<FunnelConnectKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FunnelConnectKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<FunnelConnectKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<FunnelConnectKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FunnelConnectKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<FunnelConnectKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FunnelConnectKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<FunnelConnectKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol FunnelConnectKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface FunnelConnectKotlinx_serialization_coreSerialKind : FunnelConnectBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol FunnelConnectKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<FunnelConnectKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<FunnelConnectKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<FunnelConnectKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<FunnelConnectKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) FunnelConnectKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface FunnelConnectKotlinNothing : FunnelConnectBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol FunnelConnectKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<FunnelConnectKotlinKClass>)kClass provider:(id<FunnelConnectKotlinx_serialization_coreKSerializer> (^)(NSArray<id<FunnelConnectKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<FunnelConnectKotlinKClass>)kClass serializer:(id<FunnelConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<FunnelConnectKotlinKClass>)baseClass actualClass:(id<FunnelConnectKotlinKClass>)actualClass actualSerializer:(id<FunnelConnectKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<FunnelConnectKotlinKClass>)baseClass defaultDeserializerProvider:(id<FunnelConnectKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<FunnelConnectKotlinKClass>)baseClass defaultDeserializerProvider:(id<FunnelConnectKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<FunnelConnectKotlinKClass>)baseClass defaultSerializerProvider:(id<FunnelConnectKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol FunnelConnectKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol FunnelConnectKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol FunnelConnectKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol FunnelConnectKotlinKClass <FunnelConnectKotlinKDeclarationContainer, FunnelConnectKotlinKAnnotatedElement, FunnelConnectKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
