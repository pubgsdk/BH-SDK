// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_PoseableMesh_F_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_PoseableMesh_F.ABP_PoseableMesh_F_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UABP_PoseableMesh_F_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_PoseableMesh_F.ABP_PoseableMesh_F_C.AnimGraph"));

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


// Function ABP_PoseableMesh_F.ABP_PoseableMesh_F_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_F_AnimGraphNode_ModifyBone_9D0F60E84DD53BC88DAD299B16A4D6F6
// (FUNC_BlueprintEvent)

void UABP_PoseableMesh_F_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_F_AnimGraphNode_ModifyBone_9D0F60E84DD53BC88DAD299B16A4D6F6()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_PoseableMesh_F.ABP_PoseableMesh_F_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_F_AnimGraphNode_ModifyBone_9D0F60E84DD53BC88DAD299B16A4D6F6"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_PoseableMesh_F.ABP_PoseableMesh_F_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_F_AnimGraphNode_ModifyBone_D648B7EA447C5AD52C901ABECC2AEE73
// (FUNC_BlueprintEvent)

void UABP_PoseableMesh_F_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_F_AnimGraphNode_ModifyBone_D648B7EA447C5AD52C901ABECC2AEE73()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_PoseableMesh_F.ABP_PoseableMesh_F_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_F_AnimGraphNode_ModifyBone_D648B7EA447C5AD52C901ABECC2AEE73"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_PoseableMesh_F.ABP_PoseableMesh_F_C.ExecuteUbergraph_ABP_PoseableMesh_F
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_PoseableMesh_F_C::ExecuteUbergraph_ABP_PoseableMesh_F(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_PoseableMesh_F.ABP_PoseableMesh_F_C.ExecuteUbergraph_ABP_PoseableMesh_F"));

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
