// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ErrorPrompt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.ShowErrorString
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InSourceString                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ErrorPrompt_C::ShowErrorString(const struct FString& InSourceString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.ShowErrorString"));

	struct
	{
		struct FString                 InSourceString;
	} params = {};

	params.InSourceString = InSourceString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.BndEvt__ConfirmMenu_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ErrorPrompt_C::BndEvt__ConfirmMenu_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.BndEvt__ConfirmMenu_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.ExecuteUbergraph_TBP_UI_ErrorPrompt
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ErrorPrompt_C::ExecuteUbergraph_TBP_UI_ErrorPrompt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.ExecuteUbergraph_TBP_UI_ErrorPrompt"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.OnClose__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ErrorPrompt_C::OnClose__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.OnClose__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
