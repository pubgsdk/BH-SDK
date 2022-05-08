// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_CurrencyText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.SetCurrencyAmount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrencyAmount                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           DisplayZeroAsFree              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_CurrencyText_C::SetCurrencyAmount(int CurrencyAmount, bool DisplayZeroAsFree)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.SetCurrencyAmount"));

	struct
	{
		int                            CurrencyAmount;
		bool                           DisplayZeroAsFree;
	} params = {};

	params.CurrencyAmount = CurrencyAmount;
	params.DisplayZeroAsFree = DisplayZeroAsFree;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.UpdateToCurrentPlayerAmount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CurrencyText_C::UpdateToCurrentPlayerAmount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.UpdateToCurrentPlayerAmount"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.OnLoaded_1FBBDA1045CBB28C294A3DB584E90C6E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CurrencyText_C::OnLoaded_1FBBDA1045CBB28C294A3DB584E90C6E(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.OnLoaded_1FBBDA1045CBB28C294A3DB584E90C6E"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_CurrencyText_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.SetCurrencyPath
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>    InCurrencyItemPath             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UTBP_UI_CurrencyText_C::SetCurrencyPath(TSoftClassPtr<class UClass> InCurrencyItemPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.SetCurrencyPath"));

	struct
	{
		TSoftClassPtr<class UClass>    InCurrencyItemPath;
	} params = {};

	params.InCurrencyItemPath = InCurrencyItemPath;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.OnPlayerStateCreated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       TigerPlayerState               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CurrencyText_C::OnPlayerStateCreated(class ATigerPlayerState* TigerPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.OnPlayerStateCreated"));

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


// Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.OnPremiumCurrencyBalanceChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentPlayerTransactionalData TransactionalPlayerData        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_CurrencyText_C::OnPremiumCurrencyBalanceChanged(const struct FTigerPersistentPlayerTransactionalData& TransactionalPlayerData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.OnPremiumCurrencyBalanceChanged"));

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


// Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.ExecuteUbergraph_TBP_UI_CurrencyText
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CurrencyText_C::ExecuteUbergraph_TBP_UI_CurrencyText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.ExecuteUbergraph_TBP_UI_CurrencyText"));

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
