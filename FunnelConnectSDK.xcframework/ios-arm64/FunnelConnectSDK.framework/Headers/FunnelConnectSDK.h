#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NSError, FCSDKIdcData, FCSDKPermissionsMap, FCSDKFCUser, FCSDKFCOptions, FCSDKFunnelConnectSDK, FCSDKBasePermissionsMap, FCSDKKotlinByteArray, FCSDKReference<__covariant T>, FCSDKKotlinThrowable, FCSDKKotlinArray<T>, FCSDKKotlinException, FCSDKRestClientException, FCSDKBasicCdpPermission, FCSDKKotlinByteIterator;

@protocol FCSDKCdpService, FCSDKTrustPidService, FCSDKKotlinIterator;

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
@interface FCSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface FCSDKBase (FCSDKBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface FCSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface FCSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorFCSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface FCSDKNumber : NSNumber
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
@interface FCSDKByte : FCSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface FCSDKUByte : FCSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface FCSDKShort : FCSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface FCSDKUShort : FCSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface FCSDKInt : FCSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface FCSDKUInt : FCSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface FCSDKLong : FCSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface FCSDKULong : FCSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface FCSDKFloat : FCSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface FCSDKDouble : FCSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface FCSDKBoolean : FCSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("TrustPidService")))
@protocol FCSDKTrustPidService
@required
- (void)acceptConsent __attribute__((swift_name("acceptConsent()")));
- (BOOL)isConsentAccepted __attribute__((swift_name("isConsentAccepted()")));
- (void)rejectConsent __attribute__((swift_name("rejectConsent()")));
- (void)rejectConsentSuccessCallback:(void (^)(void))successCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("rejectConsent(successCallback:errorCallback:)")));
- (void)startService __attribute__((swift_name("startService()")));
- (void)startServiceDataCallback:(void (^)(FCSDKIdcData *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("startService(dataCallback:errorCallback:)")));
- (void)startServiceIsStub:(BOOL)isStub __attribute__((swift_name("startService(isStub:)")));
- (void)startServiceIsStub:(BOOL)isStub dataCallback:(void (^)(FCSDKIdcData *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("startService(isStub:dataCallback:errorCallback:)")));
@end;

__attribute__((swift_name("CdpService")))
@protocol FCSDKCdpService
@required
- (FCSDKPermissionsMap *)getPermissions __attribute__((swift_name("getPermissions()")));
- (NSString * _Nullable)getUmid __attribute__((swift_name("getUmid()")));
- (NSString * _Nullable)getUserId __attribute__((swift_name("getUserId()")));
- (void)logEventKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("logEvent(key:value:)")));
- (void)logEventKey:(NSString *)key value:(NSString *)value successCallback:(void (^)(void))successCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("logEvent(key:value:successCallback:errorCallback:)")));
- (void)logEventsEvents:(NSDictionary<NSString *, NSString *> *)events __attribute__((swift_name("logEvents(events:)")));
- (void)logEventsEvents:(NSDictionary<NSString *, NSString *> *)events successCallback:(void (^)(void))successCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("logEvents(events:successCallback:errorCallback:)")));
- (void)setUserFcUser:(FCSDKFCUser *)fcUser __attribute__((swift_name("setUser(fcUser:)")));
- (void)setUserFcUser:(FCSDKFCUser *)fcUser dataCallback:(void (^)(NSString *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("setUser(fcUser:dataCallback:errorCallback:)")));
- (void)startService __attribute__((swift_name("startService()")));
- (void)startServiceDataCallback:(void (^)(NSString *))dataCallback errorCallback_:(void (^)(NSError *))errorCallback __attribute__((swift_name("startService(dataCallback:errorCallback_:)")));
- (void)startServiceFcUser:(FCSDKFCUser *)fcUser __attribute__((swift_name("startService(fcUser:)")));
- (void)startServiceFcUser:(FCSDKFCUser *)fcUser dataCallback:(void (^)(NSString *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("startService(fcUser:dataCallback:errorCallback:)")));
- (void)startServiceFcUser:(FCSDKFCUser *)fcUser notificationsVersion:(int32_t)notificationsVersion __attribute__((swift_name("startService(fcUser:notificationsVersion:)")));
- (void)startServiceFcUser:(FCSDKFCUser *)fcUser notificationsVersion:(int32_t)notificationsVersion dataCallback:(void (^)(NSString *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("startService(fcUser:notificationsVersion:dataCallback:errorCallback:)")));
- (void)startServiceNotificationsVersion:(int32_t)notificationsVersion __attribute__((swift_name("startService(notificationsVersion:)")));
- (void)startServiceNotificationsVersion:(int32_t)notificationsVersion dataCallback:(void (^)(NSString *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("startService(notificationsVersion:dataCallback:errorCallback:)")));
- (void)updatePermissionsPermissions:(FCSDKPermissionsMap *)permissions notificationsVersion:(int32_t)notificationsVersion dataCallback:(void (^)(NSString *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("updatePermissions(permissions:notificationsVersion:dataCallback:errorCallback:)")));
@end;

__attribute__((swift_name("FunnelConnect")))
@protocol FCSDKFunnelConnect
@required

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FCSDKCdpService> _Nullable)cdpAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("cdp()")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)clearCookiesAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("clearCookies()")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)clearDataAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("clearData()")));
- (void)didInitializeWithResultSuccess:(void (^)(void))success failure:(void (^)(NSError *))failure __attribute__((swift_name("didInitializeWithResult(success:failure:)")));
- (void)initializeSdkToken:(NSString *)sdkToken options:(FCSDKFCOptions *)options __attribute__((swift_name("initialize(sdkToken:options:)")));
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FCSDKTrustPidService> _Nullable)trustPidAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("trustPid()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FunnelConnectSDK")))
@interface FCSDKFunnelConnectSDK : FCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)funnelConnectSDK __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FCSDKFunnelConnectSDK *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FCSDKCdpService> _Nullable)cdpAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("cdp()")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)clearCookiesAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("clearCookies()")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)clearDataAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("clearData()")));
- (void)didInitializeWithResultSuccess:(void (^)(void))success failure:(void (^)(NSError *))failure __attribute__((swift_name("didInitializeWithResult(success:failure:)")));
- (void)initializeSdkToken:(NSString *)sdkToken __attribute__((swift_name("initialize(sdkToken:)")));
- (void)initializeSdkToken:(NSString *)sdkToken options:(FCSDKFCOptions *)options __attribute__((swift_name("initialize(sdkToken:options:)")));
- (BOOL)isInitialize __attribute__((swift_name("isInitialize()")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FCSDKTrustPidService> _Nullable)trustPidAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("trustPid()")));
@end;

__attribute__((swift_name("BasePermissionsMap")))
@interface FCSDKBasePermissionsMap : FCSDKBase
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
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionsMap")))
@interface FCSDKPermissionsMap : FCSDKBasePermissionsMap
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(NSString *)key accepted:(BOOL)accepted __attribute__((swift_name("init(key:accepted:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSArray<id> *)getAllKeys __attribute__((swift_name("getAllKeys()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sha256")))
@interface FCSDKSha256 : FCSDKBase
- (instancetype)initWithPlanString:(NSString *)planString __attribute__((swift_name("init(planString:)"))) __attribute__((objc_designated_initializer));
- (FCSDKKotlinByteArray *)digest __attribute__((swift_name("digest()")));
@end;

__attribute__((swift_name("IStringUtils")))
@protocol FCSDKIStringUtils
@required
- (NSDictionary<NSString *, NSString *> *)extractTopLevelKeysAndValuesFromJavascriptWrappedInHTMLHtmlString:(NSString *)htmlString removeCurleyBraces:(BOOL)removeCurleyBraces __attribute__((swift_name("extractTopLevelKeysAndValuesFromJavascriptWrappedInHTML(htmlString:removeCurleyBraces:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Reference")))
@interface FCSDKReference<__covariant T> : FCSDKBase
- (instancetype)initWithCurrent:(T _Nullable)current initor:(T _Nullable (^)(void))initor __attribute__((swift_name("init(current:initor:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)component1 __attribute__((swift_name("component1()")));
- (T _Nullable (^)(void))component2 __attribute__((swift_name("component2()")));
- (FCSDKReference<T> *)doCopyCurrent:(T _Nullable)current initor:(T _Nullable (^)(void))initor __attribute__((swift_name("doCopy(current:initor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable current __attribute__((swift_name("current")));
@property (readonly) T _Nullable (^initor)(void) __attribute__((swift_name("initor")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface FCSDKKotlinThrowable : FCSDKBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (FCSDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FCSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface FCSDKKotlinException : FCSDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("RestClientException")))
@interface FCSDKRestClientException : FCSDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(FCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *errorMessage __attribute__((swift_name("errorMessage")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestClientException.GenericError")))
@interface FCSDKRestClientExceptionGenericError : FCSDKRestClientException
- (instancetype)initWithErrorMessage:(NSString *)errorMessage __attribute__((swift_name("init(errorMessage:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestClientException.HttpError")))
@interface FCSDKRestClientExceptionHttpError : FCSDKRestClientException
- (instancetype)initWithStatusCode:(int32_t)statusCode errorMessage:(NSString *)errorMessage __attribute__((swift_name("init(statusCode:errorMessage:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t statusCode __attribute__((swift_name("statusCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestClientException.InternalServerError")))
@interface FCSDKRestClientExceptionInternalServerError : FCSDKRestClientException
- (instancetype)initWithErrorMessage:(NSString *)errorMessage __attribute__((swift_name("init(errorMessage:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestClientException.RedirectionError")))
@interface FCSDKRestClientExceptionRedirectionError : FCSDKRestClientException
- (instancetype)initWithErrorMessage:(NSString *)errorMessage __attribute__((swift_name("init(errorMessage:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("TeavaroLocalStorage")))
@protocol FCSDKTeavaroLocalStorage
@required
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)getBooleanValueKey:(NSString *)key __attribute__((swift_name("getBooleanValue(key:)")));
- (NSString * _Nullable)getStringValueKey:(NSString *)key __attribute__((swift_name("getStringValue(key:)")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
- (void)removeValueKey:(NSString *)key __attribute__((swift_name("removeValue(key:)")));
- (void)saveKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("save(key:value:)")));
- (void)saveKey:(NSString *)key value_:(NSString *)value __attribute__((swift_name("save(key:value_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FCOptions")))
@interface FCSDKFCOptions : FCSDKBase
- (instancetype)initWithEnableLogging:(BOOL)enableLogging __attribute__((swift_name("init(enableLogging:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (FCSDKFCOptions *)doCopyEnableLogging:(BOOL)enableLogging __attribute__((swift_name("doCopy(enableLogging:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL enableLogging __attribute__((swift_name("enableLogging")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FCUser")))
@interface FCSDKFCUser : FCSDKBase
- (instancetype)initWithUserIdType:(NSString *)userIdType userId:(NSString *)userId __attribute__((swift_name("init(userIdType:userId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (FCSDKFCUser *)doCopyUserIdType:(NSString *)userIdType userId:(NSString *)userId __attribute__((swift_name("doCopy(userIdType:userId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) NSString *userIdType __attribute__((swift_name("userIdType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdcData")))
@interface FCSDKIdcData : FCSDKBase
- (instancetype)initWithMtid:(NSString * _Nullable)mtid atid:(NSString * _Nullable)atid __attribute__((swift_name("init(mtid:atid:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (FCSDKIdcData *)doCopyMtid:(NSString * _Nullable)mtid atid:(NSString * _Nullable)atid __attribute__((swift_name("doCopy(mtid:atid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable atid __attribute__((swift_name("atid")));
@property (readonly) NSString * _Nullable mtid __attribute__((swift_name("mtid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasicCdpPermission")))
@interface FCSDKBasicCdpPermission : FCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)basicCdpPermission __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FCSDKBasicCdpPermission *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *LI_NBA __attribute__((swift_name("LI_NBA")));
@property (readonly) NSString *LI_OM __attribute__((swift_name("LI_OM")));
@property (readonly) NSString *LI_OPT __attribute__((swift_name("LI_OPT")));
@end;

@interface FCSDKKotlinException (Extensions)
- (NSError *)createNSErrorFromKotlinException __attribute__((swift_name("createNSErrorFromKotlinException()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface FCSDKKotlinByteArray : FCSDKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(FCSDKByte *(^)(FCSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (FCSDKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface FCSDKKotlinByteArray (Extensions)
- (NSString *)toHexString __attribute__((swift_name("toHexString()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapKt")))
@interface FCSDKMapKt : FCSDKBase
+ (id _Nullable)getOrNull:(NSDictionary<NSString *, id> *)receiver key:(NSString *)key ignoreKeyCase:(BOOL)ignoreKeyCase __attribute__((swift_name("getOrNull(_:key:ignoreKeyCase:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface FCSDKKotlinArray<T> : FCSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(FCSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<FCSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol FCSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface FCSDKKotlinByteIterator : FCSDKBase <FCSDKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FCSDKByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
