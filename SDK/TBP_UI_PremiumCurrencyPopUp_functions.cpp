// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PremiumCurrencyPopUp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.SetItemNameAndCost
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ItemName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Cost                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PremiumCurrencyPopUp_C::SetItemNameAndCost(const struct FText& ItemName, int Cost)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.SetItemNameAndCost"));

	struct
	{
		struct FText                   ItemName;
		int                            Cost;
	} params = {};

	params.ItemName = ItemName;
	params.Cost = Cost;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PremiumCurrencyPopUp_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnOpen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PremiumCurrencyPopUp_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnClose
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PremiumCurrencyPopUp_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnExitKeyPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PremiumCurrencyPopUp_C::OnExitKeyPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnExitKeyPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.BndEvt__TBP_UI_PremiumCurrencyPopUp_InputPrompt_Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_PremiumCurrencyPopUp_C::BndEvt__TBP_UI_PremiumCurrencyPopUp_InputPrompt_Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.BndEvt__TBP_UI_PremiumCurrencyPopUp_InputPrompt_Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.ExecuteUbergraph_TBP_UI_PremiumCurrencyPopUp
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PremiumCurrencyPopUp_C::ExecuteUbergraph_TBP_UI_PremiumCurrencyPopUp(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.ExecuteUbergraph_TBP_UI_PremiumCurrencyPopUp"));

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


// Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnClosed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PremiumCurrencyPopUp_C::OnClosed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnClosed__DelegateSignature"));

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
