#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TSS.ETSSAccountType
enum class ETSSAccountType : uint8_t
{
	ETSSAccountType__Common        = 0,
	ETSSAccountType__ETSSAccountType_MAX = 1
};


// Enum TSS.ETSSAddUserResult
enum class ETSSAddUserResult : uint8_t
{
	ETSSAddUserResult__Success     = 0,
	ETSSAddUserResult__Error_NoServerInterface = 1,
	ETSSAddUserResult__Error_NotServer = 2,
	ETSSAddUserResult__Error_AccountInfoConversionFailure = 3,
	ETSSAddUserResult__Error_SdkReturnedError = 4,
	ETSSAddUserResult__Error_NoServerApiHandler = 5,
	ETSSAddUserResult__Error_OwnerNotPlayerController = 6,
	ETSSAddUserResult__Error_FailedToGetRemoteAddress = 7,
	ETSSAddUserResult__Error_AlreadyLoggedIn = 8,
	ETSSAddUserResult__ETSSAddUserResult_MAX = 9
};


// Enum TSS.ETSSBroadcastedTextCategory
enum class ETSSBroadcastedTextCategory : uint8_t
{
	ETSSBroadcastedTextCategory__Unknown = 0,
	ETSSBroadcastedTextCategory__ProfileInformation = 1,
	ETSSBroadcastedTextCategory__InstantMessages = 2,
	ETSSBroadcastedTextCategory__SocialOperation = 3,
	ETSSBroadcastedTextCategory__ForumContent = 4,
	ETSSBroadcastedTextCategory__ETSSBroadcastedTextCategory_MAX = 5
};


// Enum TSS.ETSSClientPlatformType
enum class ETSSClientPlatformType : uint8_t
{
	ETSSClientPlatformType__PcClient = 0,
	ETSSClientPlatformType__PS     = 1,
	ETSSClientPlatformType__ETSSClientPlatformType_MAX = 2
};


// Enum TSS.ETSSDeleteUserResult
enum class ETSSDeleteUserResult : uint8_t
{
	ETSSDeleteUserResult__Success  = 0,
	ETSSDeleteUserResult__Error_NoServerInterface = 1,
	ETSSDeleteUserResult__Error_NotServer = 2,
	ETSSDeleteUserResult__Error_ClientNotFound = 3,
	ETSSDeleteUserResult__Error_AccountInfoConversionFailure = 4,
	ETSSDeleteUserResult__Error_SdkReturnedError = 5,
	ETSSDeleteUserResult__Error_NoServerApiHandler = 6,
	ETSSDeleteUserResult__Error_AlreadyLoggedOut = 7,
	ETSSDeleteUserResult__ETSSDeleteUserResult_MAX = 8
};


// Enum TSS.ETSSProfanityFilterResult
enum class ETSSProfanityFilterResult : uint8_t
{
	ETSSProfanityFilterResult__NoProfanity = 0,
	ETSSProfanityFilterResult__SeverProfanity = 1,
	ETSSProfanityFilterResult__Profanity = 2,
	ETSSProfanityFilterResult__ETSSProfanityFilterResult_MAX = 3
};


// Enum TSS.ETSSReceivedClientDataResult
enum class ETSSReceivedClientDataResult : uint8_t
{
	ETSSReceivedClientDataResult__Success = 0,
	ETSSReceivedClientDataResult__Error_ClientNotFound = 1,
	ETSSReceivedClientDataResult__Error_AntiCheatNotInitalized = 2,
	ETSSReceivedClientDataResult__Error_NoClientData = 3,
	ETSSReceivedClientDataResult__Error_NotServer = 4,
	ETSSReceivedClientDataResult__Error_AccountInfoConversionFailure = 5,
	ETSSReceivedClientDataResult__Error_SdkReturnedError = 6,
	ETSSReceivedClientDataResult__ETSSReceivedClientDataResult_MAX = 7
};


// Enum TSS.ETSSAceLogoutResult
enum class ETSSAceLogoutResult : uint8_t
{
	ETSSAceLogoutResult__Success   = 0,
	ETSSAceLogoutResult__Error_LogoutClientMismatch = 1,
	ETSSAceLogoutResult__Error_NotLoggedIn = 2,
	ETSSAceLogoutResult__Error_NotClientApp = 3,
	ETSSAceLogoutResult__ETSSAceLogoutResult_MAX = 4
};


// Enum TSS.ETSSAceLoginResult
enum class ETSSAceLoginResult : uint8_t
{
	ETSSAceLoginResult__Success    = 0,
	ETSSAceLoginResult__Error_AlreadyLoggedIn = 1,
	ETSSAceLoginResult__Error_GhostLogin = 2,
	ETSSAceLoginResult__Error_AceNotInitialized = 3,
	ETSSAceLoginResult__Error_AccountInfoConversionFailure = 4,
	ETSSAceLoginResult__Error_InternalLoginError = 5,
	ETSSAceLoginResult__Error_NotClientApp = 6,
	ETSSAceLoginResult__ETSSAceLoginResult_MAX = 7
};


// Enum TSS.ETSSSdkLoadState
enum class ETSSSdkLoadState : uint8_t
{
	ETSSSdkLoadState__NotLoaded    = 0,
	ETSSSdkLoadState__LoadFailed   = 1,
	ETSSSdkLoadState__LoadSuccessful = 2,
	ETSSSdkLoadState__Unloaded     = 3,
	ETSSSdkLoadState__ETSSSdkLoadState_MAX = 4
};


// Enum TSS.ETSSSetAccountInfoResult
enum class ETSSSetAccountInfoResult : uint8_t
{
	ETSSSetAccountInfoResult__Success = 0,
	ETSSSetAccountInfoResult__Error_AntiBotNotInitialized = 1,
	ETSSSetAccountInfoResult__Error_NotClient = 2,
	ETSSSetAccountInfoResult__Error_AccountInfoConversionFailure = 3,
	ETSSSetAccountInfoResult__Error_UnhandledDataConversionResult = 4,
	ETSSSetAccountInfoResult__Error_AlreadyInitialized = 5,
	ETSSSetAccountInfoResult__ETSSSetAccountInfoResult_MAX = 6
};


// Enum TSS.ETSSSubmitTextResult
enum class ETSSSubmitTextResult : uint8_t
{
	ETSSSubmitTextResult__Success  = 0,
	ETSSSubmitTextResult__Error_NotServer = 1,
	ETSSSubmitTextResult__Error_UICNotInitalized = 2,
	ETSSSubmitTextResult__Error_ClientNotFound = 3,
	ETSSSubmitTextResult__Error_MessageLengthExceeded = 4,
	ETSSSubmitTextResult__Error_TextCategoryMismatch = 5,
	ETSSSubmitTextResult__Error_SdkReturnedError = 6,
	ETSSSubmitTextResult__ETSSSubmitTextResult_MAX = 7
};


// Enum TSS.ETSSPlatformTypeConversionResult
enum class ETSSPlatformTypeConversionResult : uint8_t
{
	ETSSPlatformTypeConversionResult__Success = 0,
	ETSSPlatformTypeConversionResult__Error_UnhandledType = 1,
	ETSSPlatformTypeConversionResult__ETSSPlatformTypeConversionResult_MAX = 2
};


// Enum TSS.ETSSAccountTypeConversionResult
enum class ETSSAccountTypeConversionResult : uint8_t
{
	ETSSAccountTypeConversionResult__Success = 0,
	ETSSAccountTypeConversionResult__Error_UnhandledType = 1,
	ETSSAccountTypeConversionResult__ETSSAccountTypeConversionResult_MAX = 2
};


// Enum TSS.ETSSAccountInfoConversionResult
enum class ETSSAccountInfoConversionResult : uint8_t
{
	ETSSAccountInfoConversionResult__Success = 0,
	ETSSAccountInfoConversionResult__Error_BadAccountId = 1,
	ETSSAccountInfoConversionResult__Error_UndefinedPlatform = 2,
	ETSSAccountInfoConversionResult__Error_UndefinedAccountType = 3,
	ETSSAccountInfoConversionResult__ETSSAccountInfoConversionResult_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
