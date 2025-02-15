@interface IDSValidationSession : NSObject
- (NSDictionary * __nonnull)headersBySigningData:(NSData * __nonnull)data serverTimestamp:(int)ts error:(NSError * __nullable * __nullable)error;
@end

@interface IDSRegistrationCenter
+ (instancetype __nonnull)sharedInstance;
- (id<NSObject> __nullable)_sendAuthenticateRegistration:(id __nullable)reg;
@end

@interface IDSRegistration : NSObject
@end

@interface IDSDAccount
- (id __nullable)_rebuildRegistrationInfo:(BOOL)rebuild;
- (IDSRegistration * __nullable)registration;
@end

@interface IDSDAccountController : NSObject
+ (instancetype __nonnull)sharedInstance;
- (NSArray<IDSDAccount *> * __nonnull)accounts;
@end

