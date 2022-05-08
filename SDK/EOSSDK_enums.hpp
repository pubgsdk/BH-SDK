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

// Enum EOSSDK.EEOSConnectType
enum class EEOSConnectType : uint8_t
{
	EEOSConnectType__OpenID        = 0,
	EEOSConnectType__EEOSConnectType_MAX = 1
};


// Enum EOSSDK.EEOSInterfaceResult
enum class EEOSInterfaceResult : uint8_t
{
	EEOSInterfaceResult__Success   = 0,
	EEOSInterfaceResult__NoViolationSinceLastPoll = 1,
	EEOSInterfaceResult__ViolationDetected = 2,
	EEOSInterfaceResult__Error_UnsupportedPlatform = 3,
	EEOSInterfaceResult__Error_NoPlatform = 4,
	EEOSInterfaceResult__Error_NoConnectHandle = 5,
	EEOSInterfaceResult__Error_NoReportHandle = 6,
	EEOSInterfaceResult__Error_NoServerHandle = 7,
	EEOSInterfaceResult__Error_NoClientHandle = 8,
	EEOSInterfaceResult__Error_CallbackInitFail = 9,
	EEOSInterfaceResult__Error_InternalEosSdkFail = 10,
	EEOSInterfaceResult__Error_CallbackUnsubFail = 11,
	EEOSInterfaceResult__Error_AlreadyInitialized = 12,
	EEOSInterfaceResult__Error_NotInitialized = 13,
	EEOSInterfaceResult__Error_SessionAlreadyBegun = 14,
	EEOSInterfaceResult__Error_NoSessionRunning = 15,
	EEOSInterfaceResult__Error_UserAlreadyRegistered = 16,
	EEOSInterfaceResult__Error_NoUserRegistered = 17,
	EEOSInterfaceResult__Error_RegisteredUserLost = 18,
	EEOSInterfaceResult__Error_MismatchingUser = 19,
	EEOSInterfaceResult__Error_InvalidAccountId = 20,
	EEOSInterfaceResult__Error_UserNotFound = 21,
	EEOSInterfaceResult__Error_PollTriesExhausted = 22,
	EEOSInterfaceResult__Error_LoginPending = 23,
	EEOSInterfaceResult__Error_NoLoginPending = 24,
	EEOSInterfaceResult__Error_NullPayload = 25,
	EEOSInterfaceResult__Error_DefaultResultCode = 26,
	EEOSInterfaceResult__EEOSInterfaceResult_MAX = 27
};


// Enum EOSSDK.EEOSUserLoginStatus
enum class EEOSUserLoginStatus : uint8_t
{
	EEOSUserLoginStatus__NotLoggedIn = 0,
	EEOSUserLoginStatus__LocalUser = 1,
	EEOSUserLoginStatus__LoggedIn  = 2,
	EEOSUserLoginStatus__UnhandledStatus = 3,
	EEOSUserLoginStatus__EEOSUserLoginStatus_MAX = 4
};


// Enum EOSSDK.EEOSReportCategory
enum class EEOSReportCategory : uint8_t
{
	EEOSReportCategory__Invalid    = 0,
	EEOSReportCategory__Cheating   = 1,
	EEOSReportCategory__Exploiting = 2,
	EEOSReportCategory__OffensiveProfile = 3,
	EEOSReportCategory__VerbalAbuse = 4,
	EEOSReportCategory__Scamming   = 5,
	EEOSReportCategory__Spamming   = 6,
	EEOSReportCategory__Other      = 7,
	EEOSReportCategory__EEOSReportCategory_MAX = 8
};


// Enum EOSSDK.EEOSAntiCheatActionReason
enum class EEOSAntiCheatActionReason : uint8_t
{
	EEOSAntiCheatActionReason__Invalid = 0,
	EEOSAntiCheatActionReason__InternalError = 1,
	EEOSAntiCheatActionReason__InvalidMessage = 2,
	EEOSAntiCheatActionReason__AuthenticaionFailed = 3,
	EEOSAntiCheatActionReason__NullClient = 4,
	EEOSAntiCheatActionReason__HeartbeatTimeout = 5,
	EEOSAntiCheatActionReason__ClientViolation = 6,
	EEOSAntiCheatActionReason__BackendViolation = 7,
	EEOSAntiCheatActionReason__TemporaryCooldown = 8,
	EEOSAntiCheatActionReason__TemporaryBanned = 9,
	EEOSAntiCheatActionReason__PermanentBanned = 10,
	EEOSAntiCheatActionReason__EEOSAntiCheatActionReason_MAX = 11
};


// Enum EOSSDK.EEOSAntiCheatAction
enum class EEOSAntiCheatAction : uint8_t
{
	EEOSAntiCheatAction__Invalid   = 0,
	EEOSAntiCheatAction__RemovePlayer = 1,
	EEOSAntiCheatAction__EEOSAntiCheatAction_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
