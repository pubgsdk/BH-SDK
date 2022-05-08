// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ConfirmPurchase_Premium_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.PurchaseHandled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InSuccess                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   InMessage                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ConfirmPurchase_Premium_C::PurchaseHandled(bool InSuccess, const struct FText& InMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.PurchaseHandled"));

	struct
	{
		bool                           InSuccess;
		struct FText                   InMessage;
	} params = {};

	params.InSuccess = InSuccess;
	params.InMessage = InMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.CloseWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ConfirmPurchase_Premium_C::CloseWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.CloseWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.Show
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ConfirmPurchase_Premium_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.Show"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ConfirmPurchase_Premium_C::BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ConfirmPurchase_Premium_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.PreConstruct"));

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


// Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.ExecuteUbergraph_TBP_UI_ConfirmPurchase_Premium
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ConfirmPurchase_Premium_C::ExecuteUbergraph_TBP_UI_ConfirmPurchase_Premium(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.ExecuteUbergraph_TBP_UI_ConfirmPurchase_Premium"));

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


// Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.OnClosed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ConfirmedPurchase              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ConfirmPurchase_Premium_C::OnClosed__DelegateSignature(bool ConfirmedPurchase)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.OnClosed__DelegateSignature"));

	struct
	{
		bool                           ConfirmedPurchase;
	} params = {};

	params.ConfirmedPurchase = ConfirmedPurchase;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
