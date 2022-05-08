// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_PoseableMesh_C_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_PoseableMesh_C.ABP_PoseableMesh_C_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UABP_PoseableMesh_C_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_PoseableMesh_C.ABP_PoseableMesh_C_C.AnimGraph"));

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


// Function ABP_PoseableMesh_C.ABP_PoseableMesh_C_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_C_AnimGraphNode_ModifyBone_4436AF3F4D2DA00D79ACACA1E6B5456E
// (FUNC_BlueprintEvent)

void UABP_PoseableMesh_C_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_C_AnimGraphNode_ModifyBone_4436AF3F4D2DA00D79ACACA1E6B5456E()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_PoseableMesh_C.ABP_PoseableMesh_C_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_C_AnimGraphNode_ModifyBone_4436AF3F4D2DA00D79ACACA1E6B5456E"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_PoseableMesh_C.ABP_PoseableMesh_C_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_C_AnimGraphNode_ModifyBone_68D7C2F3493EB5DB53413FBEDC741B7A
// (FUNC_BlueprintEvent)

void UABP_PoseableMesh_C_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_C_AnimGraphNode_ModifyBone_68D7C2F3493EB5DB53413FBEDC741B7A()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_PoseableMesh_C.ABP_PoseableMesh_C_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_C_AnimGraphNode_ModifyBone_68D7C2F3493EB5DB53413FBEDC741B7A"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_PoseableMesh_C.ABP_PoseableMesh_C_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_C_AnimGraphNode_ModifyBone_2C25BF4F4E288E810E80FF8B1F7F9F36
// (FUNC_BlueprintEvent)

void UABP_PoseableMesh_C_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_C_AnimGraphNode_ModifyBone_2C25BF4F4E288E810E80FF8B1F7F9F36()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_PoseableMesh_C.ABP_PoseableMesh_C_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_C_AnimGraphNode_ModifyBone_2C25BF4F4E288E810E80FF8B1F7F9F36"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_PoseableMesh_C.ABP_PoseableMesh_C_C.ExecuteUbergraph_ABP_PoseableMesh_C
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_PoseableMesh_C_C::ExecuteUbergraph_ABP_PoseableMesh_C(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_PoseableMesh_C.ABP_PoseableMesh_C_C.ExecuteUbergraph_ABP_PoseableMesh_C"));

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
