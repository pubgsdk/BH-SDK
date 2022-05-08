// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OnlineSubsystemSharkmob_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystemSharkmob.AccountErrorHandler.IsAccountLinkingRequired
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAccountErrorHandler::IsAccountLinkingRequired()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSharkmob.AccountErrorHandler.IsAccountLinkingRequired"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OnlineSubsystemSharkmob.AccountErrorHandler.GetThirdPartyErrorCode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EAccountThirdPartyErrorCode    InErrorEnum                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAccountErrorHandler::GetThirdPartyErrorCode(EAccountThirdPartyErrorCode InErrorEnum)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSharkmob.AccountErrorHandler.GetThirdPartyErrorCode"));

	struct
	{
		EAccountThirdPartyErrorCode    InErrorEnum;
		int                            ReturnValue;
	} params = {};

	params.InErrorEnum = InErrorEnum;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OnlineSubsystemSharkmob.AccountErrorHandler.GetAccountErrorMessage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InErrorCode                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EAccountErrorType              InErrorType                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAccountErrorHandler::GetAccountErrorMessage(int InErrorCode, EAccountErrorType InErrorType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSharkmob.AccountErrorHandler.GetAccountErrorMessage"));

	struct
	{
		int                            InErrorCode;
		EAccountErrorType              InErrorType;
		struct FString                 ReturnValue;
	} params = {};

	params.InErrorCode = InErrorCode;
	params.InErrorType = InErrorType;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OnlineSubsystemSharkmob.INTLLoginWithEmailCallbackProxy.ConnectToINTLServiceWithEmail
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InEmail                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InPassword                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UINTLLoginWithEmailCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UINTLLoginWithEmailCallbackProxy* UINTLLoginWithEmailCallbackProxy::ConnectToINTLServiceWithEmail(class UObject* WorldContextObject, const struct FString& InEmail, const struct FString& InPassword)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSharkmob.INTLLoginWithEmailCallbackProxy.ConnectToINTLServiceWithEmail"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 InEmail;
		struct FString                 InPassword;
		class UINTLLoginWithEmailCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.InEmail = InEmail;
	params.InPassword = InPassword;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OnlineSubsystemSharkmob.INTLLoginWithTokenCallbackProxy.ConnectToINTLServiceWithToken
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UINTLLoginWithTokenCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UINTLLoginWithTokenCallbackProxy* UINTLLoginWithTokenCallbackProxy::ConnectToINTLServiceWithToken(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSharkmob.INTLLoginWithTokenCallbackProxy.ConnectToINTLServiceWithToken"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UINTLLoginWithTokenCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OnlineSubsystemSharkmob.INTLQueryEmailAvailabilityCallbackProxy.QueryEmailAvailabilityWithINTL
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InEmail                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UINTLQueryEmailAvailabilityCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UINTLQueryEmailAvailabilityCallbackProxy* UINTLQueryEmailAvailabilityCallbackProxy::QueryEmailAvailabilityWithINTL(class UObject* WorldContextObject, const struct FString& InEmail)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSharkmob.INTLQueryEmailAvailabilityCallbackProxy.QueryEmailAvailabilityWithINTL"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 InEmail;
		class UINTLQueryEmailAvailabilityCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.InEmail = InEmail;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OnlineSubsystemSharkmob.INTLQueryUserNameAvailabilityCallbackProxy.QueryUserNameAvailabilityWithINTL
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InUsername                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UINTLQueryUserNameAvailabilityCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UINTLQueryUserNameAvailabilityCallbackProxy* UINTLQueryUserNameAvailabilityCallbackProxy::QueryUserNameAvailabilityWithINTL(class UObject* WorldContextObject, const struct FString& InUsername)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSharkmob.INTLQueryUserNameAvailabilityCallbackProxy.QueryUserNameAvailabilityWithINTL"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 InUsername;
		class UINTLQueryUserNameAvailabilityCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.InUsername = InUsername;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OnlineSubsystemSharkmob.INTLRegisterAndLoginCallbackProxy.RegisterAndLoginToINTL
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InEmail                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InPassword                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InUsername                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InVerificationCode             (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InRegionId                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InReceiveNewsletterEmail       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FDateTime               InBirthday                     (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UINTLRegisterAndLoginCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UINTLRegisterAndLoginCallbackProxy* UINTLRegisterAndLoginCallbackProxy::RegisterAndLoginToINTL(class UObject* WorldContextObject, const struct FString& InEmail, const struct FString& InPassword, const struct FString& InUsername, const struct FString& InVerificationCode, int InRegionId, bool InReceiveNewsletterEmail, const struct FDateTime& InBirthday)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSharkmob.INTLRegisterAndLoginCallbackProxy.RegisterAndLoginToINTL"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 InEmail;
		struct FString                 InPassword;
		struct FString                 InUsername;
		struct FString                 InVerificationCode;
		int                            InRegionId;
		bool                           InReceiveNewsletterEmail;
		struct FDateTime               InBirthday;
		class UINTLRegisterAndLoginCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.InEmail = InEmail;
	params.InPassword = InPassword;
	params.InUsername = InUsername;
	params.InVerificationCode = InVerificationCode;
	params.InRegionId = InRegionId;
	params.InReceiveNewsletterEmail = InReceiveNewsletterEmail;
	params.InBirthday = InBirthday;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OnlineSubsystemSharkmob.INTLSendRegisterVerificationCodeCallbackProxy.SendRegisterVerificationCode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InUsername                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UINTLSendRegisterVerificationCodeCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UINTLSendRegisterVerificationCodeCallbackProxy* UINTLSendRegisterVerificationCodeCallbackProxy::SendRegisterVerificationCode(class UObject* WorldContextObject, const struct FString& InUsername)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSharkmob.INTLSendRegisterVerificationCodeCallbackProxy.SendRegisterVerificationCode"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 InUsername;
		class UINTLSendRegisterVerificationCodeCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.InUsername = InUsername;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
