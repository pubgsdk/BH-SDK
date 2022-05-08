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

// Enum OnlineSubsystemSharkmob.EAccountThirdPartyErrorCode
enum class EAccountThirdPartyErrorCode : uint8_t
{
	EAccountThirdPartyErrorCode__AccountServiceError = 0,
	EAccountThirdPartyErrorCode__AccountServiceConnectionError = 1,
	EAccountThirdPartyErrorCode__AccountDoesNotExist = 2,
	EAccountThirdPartyErrorCode__EmailAlreadyInUse = 3,
	EAccountThirdPartyErrorCode__ProfanityInUsername = 4,
	EAccountThirdPartyErrorCode__InvalidVerificationCode = 5,
	EAccountThirdPartyErrorCode__UsernameUnavailable = 6,
	EAccountThirdPartyErrorCode__SharkmobAccountAlreadyLinkedToPSN = 7,
	EAccountThirdPartyErrorCode__EAccountThirdPartyErrorCode_MAX = 8
};


// Enum OnlineSubsystemSharkmob.EAccountErrorType
enum class EAccountErrorType : uint8_t
{
	EAccountErrorType__Native      = 0,
	EAccountErrorType__ThirdParty  = 1,
	EAccountErrorType__EAccountErrorType_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
