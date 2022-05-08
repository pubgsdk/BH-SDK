// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MatchVariationContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_MatchVariationContainer.TBP_UI_MatchVariationContainer_C.Check and Create Card
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MatchVariationContainer_C::Check_and_Create_Card(const struct FName& RowName, bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchVariationContainer.TBP_UI_MatchVariationContainer_C.Check and Create Card"));

	struct
	{
		struct FName                   RowName;
		bool                           Active;
	} params = {};

	params.RowName = RowName;
	params.Active = Active;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchVariationContainer.TBP_UI_MatchVariationContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_MatchVariationContainer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchVariationContainer.TBP_UI_MatchVariationContainer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchVariationContainer.TBP_UI_MatchVariationContainer_C.OnGameModeVariationsUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MatchVariationContainer_C::OnGameModeVariationsUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchVariationContainer.TBP_UI_MatchVariationContainer_C.OnGameModeVariationsUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchVariationContainer.TBP_UI_MatchVariationContainer_C.PopulateList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMatchSettings     MatchSettings                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_MatchVariationContainer_C::PopulateList(const struct FTigerMatchSettings& MatchSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchVariationContainer.TBP_UI_MatchVariationContainer_C.PopulateList"));

	struct
	{
		struct FTigerMatchSettings     MatchSettings;
	} params = {};

	params.MatchSettings = MatchSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchVariationContainer.TBP_UI_MatchVariationContainer_C.StopGlowForAllCards
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MatchVariationContainer_C::StopGlowForAllCards()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchVariationContainer.TBP_UI_MatchVariationContainer_C.StopGlowForAllCards"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchVariationContainer.TBP_UI_MatchVariationContainer_C.SetupVariationsData
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MatchVariationContainer_C::SetupVariationsData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchVariationContainer.TBP_UI_MatchVariationContainer_C.SetupVariationsData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchVariationContainer.TBP_UI_MatchVariationContainer_C.ExecuteUbergraph_TBP_UI_MatchVariationContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MatchVariationContainer_C::ExecuteUbergraph_TBP_UI_MatchVariationContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchVariationContainer.TBP_UI_MatchVariationContainer_C.ExecuteUbergraph_TBP_UI_MatchVariationContainer"));

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
