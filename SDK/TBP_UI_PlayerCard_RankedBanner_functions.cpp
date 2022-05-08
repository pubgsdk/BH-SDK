// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PlayerCard_RankedBanner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PlayerCard_RankedBanner.TBP_UI_PlayerCard_RankedBanner_C.UpdatePlayerDataSubscription
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PreviousID                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CurrentID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerCard_RankedBanner_C::UpdatePlayerDataSubscription(int PreviousID, int CurrentID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_RankedBanner.TBP_UI_PlayerCard_RankedBanner_C.UpdatePlayerDataSubscription"));

	struct
	{
		int                            PreviousID;
		int                            CurrentID;
	} params = {};

	params.PreviousID = PreviousID;
	params.CurrentID = CurrentID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard_RankedBanner.TBP_UI_PlayerCard_RankedBanner_C.GetDataFromID
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTigerPlayerStateGameData OutData                        (CPF_Parm, CPF_OutParm)

void UTBP_UI_PlayerCard_RankedBanner_C::GetDataFromID(bool* IsValid, struct FTigerPlayerStateGameData* OutData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_RankedBanner.TBP_UI_PlayerCard_RankedBanner_C.GetDataFromID"));

	struct
	{
		bool                           IsValid;
		struct FTigerPlayerStateGameData OutData;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (OutData != nullptr)
		*OutData = params.OutData;
}


// Function TBP_UI_PlayerCard_RankedBanner.TBP_UI_PlayerCard_RankedBanner_C.UpdateRepresentedPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InPlayerId                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerCard_RankedBanner_C::UpdateRepresentedPlayer(int InPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_RankedBanner.TBP_UI_PlayerCard_RankedBanner_C.UpdateRepresentedPlayer"));

	struct
	{
		int                            InPlayerId;
	} params = {};

	params.InPlayerId = InPlayerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard_RankedBanner.TBP_UI_PlayerCard_RankedBanner_C.UpdateRank
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_RankedBanner_C::UpdateRank()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_RankedBanner.TBP_UI_PlayerCard_RankedBanner_C.UpdateRank"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard_RankedBanner.TBP_UI_PlayerCard_RankedBanner_C.PlayerDataUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_RankedBanner_C::PlayerDataUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_RankedBanner.TBP_UI_PlayerCard_RankedBanner_C.PlayerDataUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard_RankedBanner.TBP_UI_PlayerCard_RankedBanner_C.ExecuteUbergraph_TBP_UI_PlayerCard_RankedBanner
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerCard_RankedBanner_C::ExecuteUbergraph_TBP_UI_PlayerCard_RankedBanner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_RankedBanner.TBP_UI_PlayerCard_RankedBanner_C.ExecuteUbergraph_TBP_UI_PlayerCard_RankedBanner"));

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
