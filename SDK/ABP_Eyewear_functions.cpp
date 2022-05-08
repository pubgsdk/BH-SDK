// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Eyewear_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Eyewear.ABP_Eyewear_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UABP_Eyewear_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Eyewear.ABP_Eyewear_C.AnimGraph"));

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


// Function ABP_Eyewear.ABP_Eyewear_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Eyewear_AnimGraphNode_ModifyBone_75CEAA9341A2E5F5BEDC008475ECB15D
// (FUNC_BlueprintEvent)

void UABP_Eyewear_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Eyewear_AnimGraphNode_ModifyBone_75CEAA9341A2E5F5BEDC008475ECB15D()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Eyewear.ABP_Eyewear_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Eyewear_AnimGraphNode_ModifyBone_75CEAA9341A2E5F5BEDC008475ECB15D"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Eyewear.ABP_Eyewear_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Eyewear_AnimGraphNode_ModifyBone_CA255A0D46EF5803406ADD9DD0BAF21D
// (FUNC_BlueprintEvent)

void UABP_Eyewear_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Eyewear_AnimGraphNode_ModifyBone_CA255A0D46EF5803406ADD9DD0BAF21D()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Eyewear.ABP_Eyewear_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Eyewear_AnimGraphNode_ModifyBone_CA255A0D46EF5803406ADD9DD0BAF21D"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Eyewear.ABP_Eyewear_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Eyewear_AnimGraphNode_ModifyBone_9030559C422CA45A834828A0869B1D21
// (FUNC_BlueprintEvent)

void UABP_Eyewear_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Eyewear_AnimGraphNode_ModifyBone_9030559C422CA45A834828A0869B1D21()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Eyewear.ABP_Eyewear_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Eyewear_AnimGraphNode_ModifyBone_9030559C422CA45A834828A0869B1D21"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Eyewear.ABP_Eyewear_C.ExecuteUbergraph_ABP_Eyewear
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Eyewear_C::ExecuteUbergraph_ABP_Eyewear(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Eyewear.ABP_Eyewear_C.ExecuteUbergraph_ABP_Eyewear"));

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
