// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_CurrentHardCurrencyText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.SetCurrencyCountVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CurrentHardCurrencyText_C::SetCurrencyCountVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.SetCurrencyCountVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.GetInterpolatedPremiumCurrencyBalance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UTBP_UI_CurrentHardCurrencyText_C::GetInterpolatedPremiumCurrencyBalance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.GetInterpolatedPremiumCurrencyBalance"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.SetCurrencyAmount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrencyAmount                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CurrentHardCurrencyText_C::SetCurrencyAmount(int CurrencyAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.SetCurrencyAmount"));

	struct
	{
		int                            CurrencyAmount;
	} params = {};

	params.CurrencyAmount = CurrencyAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.UpdateToCurrentPlayerAmount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CurrentHardCurrencyText_C::UpdateToCurrentPlayerAmount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.UpdateToCurrentPlayerAmount"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.SetCurrencyAppearance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CurrentHardCurrencyText_C::SetCurrencyAppearance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.SetCurrencyAppearance"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.OnPlayerStateCreated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       TigerPlayerState               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CurrentHardCurrencyText_C::OnPlayerStateCreated(class ATigerPlayerState* TigerPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.OnPlayerStateCreated"));

	struct
	{
		class ATigerPlayerState*       TigerPlayerState;
	} params = {};

	params.TigerPlayerState = TigerPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_CurrentHardCurrencyText_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.OnClientTransactionalPlayerDataChangedEvent
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentPlayerTransactionalData TransactionalPlayerData        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_CurrentHardCurrencyText_C::OnClientTransactionalPlayerDataChangedEvent(const struct FTigerPersistentPlayerTransactionalData& TransactionalPlayerData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.OnClientTransactionalPlayerDataChangedEvent"));

	struct
	{
		struct FTigerPersistentPlayerTransactionalData TransactionalPlayerData;
	} params = {};

	params.TransactionalPlayerData = TransactionalPlayerData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_CurrentHardCurrencyText_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.ExecuteUbergraph_TBP_UI_CurrentHardCurrencyText
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CurrentHardCurrencyText_C::ExecuteUbergraph_TBP_UI_CurrentHardCurrencyText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.ExecuteUbergraph_TBP_UI_CurrentHardCurrencyText"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
