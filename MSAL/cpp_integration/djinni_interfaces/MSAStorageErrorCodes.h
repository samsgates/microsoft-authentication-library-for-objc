// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from error_codes.djinni

#import <Foundation/Foundation.h>

@interface MSAStorageErrorCodes : NSObject
- (nonnull instancetype)init;
+ (nonnull instancetype)storageErrorCodes;

@end

/** 0x0F01 0001 */
extern int32_t const MSAStorageErrorCodesInvalidJson;
/** 0x0F01 0002 */
extern int32_t const MSAStorageErrorCodesReadFailure;
/** 0x0F01 0003 */
extern int32_t const MSAStorageErrorCodesWriteFailure;
/** 0x0F01 0004 */
extern int32_t const MSAStorageErrorCodesUnknownAuthorityTypeEnum;
/** 0x0F01 0005 */
extern int32_t const MSAStorageErrorCodesUnknownAuthorityTypeString;
/** 0x0F01 0006 */
extern int32_t const MSAStorageErrorCodesUnknownCredentialTypeEnum;
/** 0x0F01 0007 */
extern int32_t const MSAStorageErrorCodesUnknownCredentialTypeString;
/** 0x0F01 0008 */
extern int32_t const MSAStorageErrorCodesEmptyPrimaryKey;
/**
 * Windows-specific
 * 0x0F02 0001
 */
extern int32_t const MSAStorageErrorCodesCannotFindLocalappdata;
/** 0x0F02 0002 */
extern int32_t const MSAStorageErrorCodesLocalappdataFolderDoesNotExistOrUnparseable;
/** 0x0F02 0003 */
extern int32_t const MSAStorageErrorCodesCannotMakeCredPathBadCredentialType;
/** 0x0F02 0004 */
extern int32_t const MSAStorageErrorCodesTargetFieldMissingFromAccessToken;
/** 0x0F02 0005 */
extern int32_t const MSAStorageErrorCodesAccessTokenHasNoScopes;
/** 0x0F02 0006 */
extern int32_t const MSAStorageErrorCodesNoAccessTokenScopesRequested;
