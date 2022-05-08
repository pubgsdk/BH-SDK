// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PremiumCurrency_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.SetTokensAsUnavailable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PremiumCurrency_C::SetTokensAsUnavailable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.SetTokensAsUnavailable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.PopUpMenuSetup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PremiumCurrency_C::PopUpMenuSetup(bool Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.PopUpMenuSetup"));

	struct
	{
		bool                           Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_PremiumCurrency_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.On Currency Button Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPremiumCurrencyPackData InPremiumPackData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_PremiumCurrency_C::On_Currency_Button_Clicked(const struct FTigerPremiumCurrencyPackData& InPremiumPackData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.On Currency Button Clicked"));

	struct
	{
		struct FTigerPremiumCurrencyPackData InPremiumPackData;
	} params = {};

	params.InPremiumPackData = InPremiumPackData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnConfirmPopupClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ConfirmedPurchase              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PremiumCurrency_C::OnConfirmPopupClosed(bool ConfirmedPurchase)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnConfirmPopupClosed"));

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


// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnCurrencyPacksUpdated
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerPremiumCurrencyPackData> InPremiumCurrencyPacks         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_PremiumCurrency_C::OnCurrencyPacksUpdated(TArray<struct FTigerPremiumCurrencyPackData> InPremiumCurrencyPacks)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnCurrencyPacksUpdated"));

	struct
	{
		TArray<struct FTigerPremiumCurrencyPackData> InPremiumCurrencyPacks;
	} params = {};

	params.InPremiumCurrencyPacks = InPremiumCurrencyPacks;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnPurchaseHandled
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInWasSuccesful                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TEnumAsByte<EShPaymentResult>  InPurchaseResult               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PremiumCurrency_C::OnPurchaseHandled(bool bInWasSuccesful, TEnumAsByte<EShPaymentResult> InPurchaseResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnPurchaseHandled"));

	struct
	{
		bool                           bInWasSuccesful;
		TEnumAsByte<EShPaymentResult>  InPurchaseResult;
	} params = {};

	params.bInWasSuccesful = bInWasSuccesful;
	params.InPurchaseResult = InPurchaseResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.BndEvt__ClosePopUpMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_PremiumCurrency_C::BndEvt__ClosePopUpMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.BndEvt__ClosePopUpMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.Open
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PremiumCurrency_C::Open()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.Open"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.Close
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PremiumCurrency_C::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.Close"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnCurrencyPacksUpdateFailed
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_PremiumCurrency_C::OnCurrencyPacksUpdateFailed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnCurrencyPacksUpdateFailed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnCloseCurrencyStore
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_PremiumCurrency_C::OnCloseCurrencyStore()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnCloseCurrencyStore"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.ExecuteUbergraph_TBP_UI_PremiumCurrency
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PremiumCurrency_C::ExecuteUbergraph_TBP_UI_PremiumCurrency(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.ExecuteUbergraph_TBP_UI_PremiumCurrency"));

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


// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnCloseStore__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PremiumCurrency_C::OnCloseStore__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnCloseStore__DelegateSignature"));

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
