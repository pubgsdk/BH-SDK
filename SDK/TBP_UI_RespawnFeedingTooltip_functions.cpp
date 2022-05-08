// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_RespawnFeedingTooltip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_RespawnFeedingTooltip.TBP_UI_RespawnFeedingTooltip_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_RespawnFeedingTooltip_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RespawnFeedingTooltip.TBP_UI_RespawnFeedingTooltip_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RespawnFeedingTooltip.TBP_UI_RespawnFeedingTooltip_C.UpdatePingActions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewIsProbablyUsingGamepad     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_RespawnFeedingTooltip_C::UpdatePingActions(bool bNewIsProbablyUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RespawnFeedingTooltip.TBP_UI_RespawnFeedingTooltip_C.UpdatePingActions"));

	struct
	{
		bool                           bNewIsProbablyUsingGamepad;
	} params = {};

	params.bNewIsProbablyUsingGamepad = bNewIsProbablyUsingGamepad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RespawnFeedingTooltip.TBP_UI_RespawnFeedingTooltip_C.ExecuteUbergraph_TBP_UI_RespawnFeedingTooltip
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RespawnFeedingTooltip_C::ExecuteUbergraph_TBP_UI_RespawnFeedingTooltip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RespawnFeedingTooltip.TBP_UI_RespawnFeedingTooltip_C.ExecuteUbergraph_TBP_UI_RespawnFeedingTooltip"));

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
