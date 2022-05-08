// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_GuardSuspiciousOfPlayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_AI_GuardSuspiciousOfPlayer.TBP_AI_GuardSuspiciousOfPlayer_C.ReceiveTickAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_AI_GuardSuspiciousOfPlayer_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_GuardSuspiciousOfPlayer.TBP_AI_GuardSuspiciousOfPlayer_C.ReceiveTickAI"));

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
		float                          DeltaSeconds;
	} params = {};

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_GuardSuspiciousOfPlayer.TBP_AI_GuardSuspiciousOfPlayer_C.ExecuteUbergraph_TBP_AI_GuardSuspiciousOfPlayer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_AI_GuardSuspiciousOfPlayer_C::ExecuteUbergraph_TBP_AI_GuardSuspiciousOfPlayer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_GuardSuspiciousOfPlayer.TBP_AI_GuardSuspiciousOfPlayer_C.ExecuteUbergraph_TBP_AI_GuardSuspiciousOfPlayer"));

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
