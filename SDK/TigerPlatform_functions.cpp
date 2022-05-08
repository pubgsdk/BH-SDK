// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TigerPlatform_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction TigerPlatform.TigerPlatformBpfl.TigerRestrictedActionResult__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bInCanPerformAction            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTigerPlatformBpfl::TigerRestrictedActionResult__DelegateSignature(bool bInCanPerformAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction TigerPlatform.TigerPlatformBpfl.TigerRestrictedActionResult__DelegateSignature"));

	struct
	{
		bool                           bInCanPerformAction;
	} params = {};

	params.bInCanPerformAction = bInCanPerformAction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TigerPlatform.TigerPlatformBpfl.ShowRestrictedActionSystemPopup
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ETigerPlatformRestrictedAction InAction                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTigerPlatformBpfl::ShowRestrictedActionSystemPopup(ETigerPlatformRestrictedAction InAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TigerPlatform.TigerPlatformBpfl.ShowRestrictedActionSystemPopup"));

	struct
	{
		ETigerPlatformRestrictedAction InAction;
	} params = {};

	params.InAction = InAction;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function TigerPlatform.TigerPlatformBpfl.ShouldSkipNoticeScreens
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UTigerPlatformBpfl::ShouldSkipNoticeScreens()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TigerPlatform.TigerPlatformBpfl.ShouldSkipNoticeScreens"));

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


// Function TigerPlatform.TigerPlatformBpfl.LaunchUrlBypassParentalChecks
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InUrl                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTigerPlatformBpfl::LaunchUrlBypassParentalChecks(const struct FString& InUrl)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TigerPlatform.TigerPlatformBpfl.LaunchUrlBypassParentalChecks"));

	struct
	{
		struct FString                 InUrl;
	} params = {};

	params.InUrl = InUrl;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function TigerPlatform.TigerPlatformBpfl.CanPerformRestrictedAction
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// ETigerPlatformRestrictedAction InAction                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         InDelegate                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UTigerPlatformBpfl::CanPerformRestrictedAction(ETigerPlatformRestrictedAction InAction, const struct FScriptDelegate& InDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TigerPlatform.TigerPlatformBpfl.CanPerformRestrictedAction"));

	struct
	{
		ETigerPlatformRestrictedAction InAction;
		struct FScriptDelegate         InDelegate;
	} params = {};

	params.InAction = InAction;
	params.InDelegate = InDelegate;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
