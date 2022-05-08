// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_VMP_BRU_M_HAIR_15_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_VMP_BRU_M_HAIR_15.ABP_VMP_BRU_M_HAIR_14_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UABP_VMP_BRU_M_HAIR_14_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_VMP_BRU_M_HAIR_15.ABP_VMP_BRU_M_HAIR_14_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_VMP_BRU_M_HAIR_15.ABP_VMP_BRU_M_HAIR_14_C.ExecuteUbergraph_ABP_VMP_BRU_M_HAIR_15
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_VMP_BRU_M_HAIR_14_C::ExecuteUbergraph_ABP_VMP_BRU_M_HAIR_15(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_VMP_BRU_M_HAIR_15.ABP_VMP_BRU_M_HAIR_14_C.ExecuteUbergraph_ABP_VMP_BRU_M_HAIR_15"));

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
