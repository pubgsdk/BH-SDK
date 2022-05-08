#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OnlineSubsystemSharkmob_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemSharkmob.AccountErrorHandler
// 0x0000 (0x0028 - 0x0028)
class UAccountErrorHandler : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OnlineSubsystemSharkmob.AccountErrorHandler"));
		return ptr;
	}


	static bool IsAccountLinkingRequired();
	static int GetThirdPartyErrorCode(EAccountThirdPartyErrorCode InErrorEnum);
	static struct FString GetAccountErrorMessage(int InErrorCode, EAccountErrorType InErrorType);
};


// Class OnlineSubsystemSharkmob.INTLLoginWithEmailCallbackProxy
// 0x0060 (0x0090 - 0x0030)
class UINTLLoginWithEmailCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OnlineSubsystemSharkmob.INTLLoginWithEmailCallbackProxy"));
		return ptr;
	}


	static class UINTLLoginWithEmailCallbackProxy* ConnectToINTLServiceWithEmail(class UObject* WorldContextObject, const struct FString& InEmail, const struct FString& InPassword);
};


// Class OnlineSubsystemSharkmob.INTLLoginWithTokenCallbackProxy
// 0x0040 (0x0070 - 0x0030)
class UINTLLoginWithTokenCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OnlineSubsystemSharkmob.INTLLoginWithTokenCallbackProxy"));
		return ptr;
	}


	static class UINTLLoginWithTokenCallbackProxy* ConnectToINTLServiceWithToken(class UObject* WorldContextObject);
};


// Class OnlineSubsystemSharkmob.INTLQueryEmailAvailabilityCallbackProxy
// 0x0050 (0x0080 - 0x0030)
class UINTLQueryEmailAvailabilityCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OnlineSubsystemSharkmob.INTLQueryEmailAvailabilityCallbackProxy"));
		return ptr;
	}


	static class UINTLQueryEmailAvailabilityCallbackProxy* QueryEmailAvailabilityWithINTL(class UObject* WorldContextObject, const struct FString& InEmail);
};


// Class OnlineSubsystemSharkmob.INTLQueryUserNameAvailabilityCallbackProxy
// 0x0050 (0x0080 - 0x0030)
class UINTLQueryUserNameAvailabilityCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OnlineSubsystemSharkmob.INTLQueryUserNameAvailabilityCallbackProxy"));
		return ptr;
	}


	static class UINTLQueryUserNameAvailabilityCallbackProxy* QueryUserNameAvailabilityWithINTL(class UObject* WorldContextObject, const struct FString& InUsername);
};


// Class OnlineSubsystemSharkmob.INTLRegisterAndLoginCallbackProxy
// 0x0090 (0x00C0 - 0x0030)
class UINTLRegisterAndLoginCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0050(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OnlineSubsystemSharkmob.INTLRegisterAndLoginCallbackProxy"));
		return ptr;
	}


	static class UINTLRegisterAndLoginCallbackProxy* RegisterAndLoginToINTL(class UObject* WorldContextObject, const struct FString& InEmail, const struct FString& InPassword, const struct FString& InUsername, const struct FString& InVerificationCode, int InRegionId, bool InReceiveNewsletterEmail, const struct FDateTime& InBirthday);
};


// Class OnlineSubsystemSharkmob.INTLSendRegisterVerificationCodeCallbackProxy
// 0x0050 (0x0080 - 0x0030)
class UINTLSendRegisterVerificationCodeCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OnlineSubsystemSharkmob.INTLSendRegisterVerificationCodeCallbackProxy"));
		return ptr;
	}


	static class UINTLSendRegisterVerificationCodeCallbackProxy* SendRegisterVerificationCode(class UObject* WorldContextObject, const struct FString& InUsername);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
