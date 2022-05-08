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

// Enum INTLPlugin.EINTLUpdateStep
enum class EINTLUpdateStep : uint8_t
{
	EINTLUpdateStep__kUnknown      = 0,
	EINTLUpdateStep__kFirstResourceAnalyze = 1,
	EINTLUpdateStep__kCheckUpdate  = 2,
	EINTLUpdateStep__kDownload     = 3,
	EINTLUpdateStep__EINTLUpdateStep_MAX = 4
};


// Enum INTLPlugin.EINTLUpdateResourceCopyType
enum class EINTLUpdateResourceCopyType : uint8_t
{
	EINTLUpdateResourceCopyType__kUnknown = 0,
	EINTLUpdateResourceCopyType__kCopyAll = 1,
	EINTLUpdateResourceCopyType__kCopyOnDemand = 2,
	EINTLUpdateResourceCopyType__EINTLUpdateResourceCopyType_MAX = 3
};


// Enum INTLPlugin.EINTLUpdateActionType
enum class EINTLUpdateActionType : uint8_t
{
	EINTLUpdateActionType__kUnknown = 0,
	EINTLUpdateActionType__kAppUpdate = 1,
	EINTLUpdateActionType__kResourceUpdate = 2,
	EINTLUpdateActionType__kResourceRepair = 3,
	EINTLUpdateActionType__EINTLUpdateActionType_MAX = 4
};


// Enum INTLPlugin.EINTLUpdateNewVersionType
enum class EINTLUpdateNewVersionType : uint8_t
{
	EINTLUpdateNewVersionType__kUnknown = 0,
	EINTLUpdateNewVersionType__kNoNeedUpdate = 1,
	EINTLUpdateNewVersionType__kOptionalUpdate = 2,
	EINTLUpdateNewVersionType__kForcibleUpdate = 3,
	EINTLUpdateNewVersionType__EINTLUpdateNewVersionType_MAX = 4
};


// Enum INTLPlugin.EINTLCrashLevel
enum class EINTLCrashLevel : uint8_t
{
	EINTLCrashLevel__LogLevelSilent = 0,
	EINTLCrashLevel__LogLevelError = 1,
	EINTLCrashLevel__LogLevelWarn  = 2,
	EINTLCrashLevel__LogLevelInfo  = 3,
	EINTLCrashLevel__LogLevelDebug = 4,
	EINTLCrashLevel__LogLevelVerbose = 5,
	EINTLCrashLevel__EINTLCrashLevel_MAX = 6
};


// Enum INTLPlugin.EINTLWebViewOrientation
enum class EINTLWebViewOrientation : uint8_t
{
	EINTLWebViewOrientation__kAuto = 0,
	EINTLWebViewOrientation__kPortrait = 1,
	EINTLWebViewOrientation__kLandscape = 2,
	EINTLWebViewOrientation__EINTLWebViewOrientation_MAX = 3
};


// Enum INTLPlugin.EINTLFriendReqType
enum class EINTLFriendReqType : uint8_t
{
	EINTLFriendReqType__kReqText   = 0,
	EINTLFriendReqType__kReqLink   = 1,
	EINTLFriendReqType__kReqImage  = 2,
	EINTLFriendReqType__kReqInvite = 3,
	EINTLFriendReqType__kReqVideo  = 4,
	EINTLFriendReqType__EINTLFriendReqType_MAX = 5
};


// Enum INTLPlugin.EComplianceParentCertificateStatus
enum class EComplianceParentCertificateStatus : uint8_t
{
	EComplianceParentCertificateStatus__kDeny = 0,
	EComplianceParentCertificateStatus__kUnknown = 1,
	EComplianceParentCertificateStatus__kAgree = 2,
	EComplianceParentCertificateStatus__EComplianceParentCertificateStatus_MAX = 3
};


// Enum INTLPlugin.EComplianceAgreeStatus
enum class EComplianceAgreeStatus : uint8_t
{
	EComplianceAgreeStatus__kDeny  = 0,
	EComplianceAgreeStatus__kUnknown = 1,
	EComplianceAgreeStatus__kAgree = 2,
	EComplianceAgreeStatus__EComplianceAgreeStatus_MAX = 3
};


// Enum INTLPlugin.EComplianceAgeStatus
enum class EComplianceAgeStatus : uint8_t
{
	EComplianceAgeStatus__kMinor   = 0,
	EComplianceAgeStatus__kUnknown = 1,
	EComplianceAgeStatus__kAdult   = 2,
	EComplianceAgeStatus__EComplianceAgeStatus_MAX = 3
};


// Enum INTLPlugin.EINTLLoginChannel
enum class EINTLLoginChannel : uint8_t
{
	EINTLLoginChannel__kChannelDefault = 0,
	EINTLLoginChannel__kChannelWeChat = 1,
	EINTLLoginChannel__kChannelQQ  = 2,
	EINTLLoginChannel__kChannelGuest = 3,
	EINTLLoginChannel__kChannelFacebook = 4,
	EINTLLoginChannel__kChannelGameCenter = 5,
	EINTLLoginChannel__kChannelGoogle = 6,
	EINTLLoginChannel__kChannelIEGPassport = 7,
	EINTLLoginChannel__kChannelTwitter = 8,
	EINTLLoginChannel__kChannelGarena = 9,
	EINTLLoginChannel__kChannelCustomAccount = 10,
	EINTLLoginChannel__kChannelEGame = 11,
	EINTLLoginChannel__kChannelSwitch = 12,
	EINTLLoginChannel__kChannelLine = 13,
	EINTLLoginChannel__kChannelApple = 14,
	EINTLLoginChannel__kChannelVK  = 15,
	EINTLLoginChannel__kChannelXboxOne = 16,
	EINTLLoginChannel__kChannelSteam = 17,
	EINTLLoginChannel__kChannelPS4 = 18,
	EINTLLoginChannel__kChannelEpic = 19,
	EINTLLoginChannel__kChannelSharkmob = 20,
	EINTLLoginChannel__kChannelDiscord = 21,
	EINTLLoginChannel__kChannelPS5 = 22,
	EINTLLoginChannel__kChannelDmm = 23,
	EINTLLoginChannel__kChannelSupercell = 24,
	EINTLLoginChannel__EINTLLoginChannel_MAX = 25
};


// Enum INTLPlugin.EVerifyCodeType
enum class EVerifyCodeType : uint8_t
{
	EVerifyCodeType__kVerifyCodeTypeRegister = 0,
	EVerifyCodeType__kVerifyCodeTypeResetPassword = 1,
	EVerifyCodeType__kVerifyCodeTypeRegisterThenLogin = 2,
	EVerifyCodeType__kVerifyCodeTypeModifyAccount = 3,
	EVerifyCodeType__EVerifyCodeType_MAX = 4
};


// Enum INTLPlugin.EAccountType
enum class EAccountType : uint8_t
{
	EAccountType__kAccountTypeNone = 0,
	EAccountType__kAccountTypeEmail = 1,
	EAccountType__kAccountTypeMobilePhone = 2,
	EAccountType__EAccountType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
