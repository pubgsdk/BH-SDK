// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_NeedsToMoveCloser_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_AI_NeedsToMoveCloser.TBP_AI_NeedsToMoveCloser_C.PerformConditionCheck
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_AI_NeedsToMoveCloser_C::PerformConditionCheck(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_NeedsToMoveCloser.TBP_AI_NeedsToMoveCloser_C.PerformConditionCheck"));

	struct
	{
		class AActor*                  OwnerActor;
		bool                           ReturnValue;
	} params = {};

	params.OwnerActor = OwnerActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_AI_NeedsToMoveCloser.TBP_AI_NeedsToMoveCloser_C.ExecuteUbergraph_TBP_AI_NeedsToMoveCloser
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_AI_NeedsToMoveCloser_C::ExecuteUbergraph_TBP_AI_NeedsToMoveCloser(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_NeedsToMoveCloser.TBP_AI_NeedsToMoveCloser_C.ExecuteUbergraph_TBP_AI_NeedsToMoveCloser"));

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
