// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MatchGameState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_MatchGameState.TBP_MatchGameState_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_MatchGameState_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameState.TBP_MatchGameState_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MatchGameState.TBP_MatchGameState_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_MatchGameState_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameState.TBP_MatchGameState_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MatchGameState.TBP_MatchGameState_C.ScreenTransitionAudio
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPreMatchStateInfo PreMatchState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ATBP_MatchGameState_C::ScreenTransitionAudio(const struct FTigerPreMatchStateInfo& PreMatchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameState.TBP_MatchGameState_C.ScreenTransitionAudio"));

	struct
	{
		struct FTigerPreMatchStateInfo PreMatchState;
	} params = {};

	params.PreMatchState = PreMatchState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MatchGameState.TBP_MatchGameState_C.ExecuteUbergraph_TBP_MatchGameState
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_MatchGameState_C::ExecuteUbergraph_TBP_MatchGameState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameState.TBP_MatchGameState_C.ExecuteUbergraph_TBP_MatchGameState"));

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
