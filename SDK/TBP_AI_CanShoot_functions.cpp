// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_CanShoot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_AI_CanShoot.TBP_AI_CanShoot_C.PerformConditionCheck
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_AI_CanShoot_C::PerformConditionCheck(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_CanShoot.TBP_AI_CanShoot_C.PerformConditionCheck"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
