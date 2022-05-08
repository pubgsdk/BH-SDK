#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_PoseableMesh_F_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_PoseableMesh_F.ABP_PoseableMesh_F_C
// 0x0278 (0x0588 - 0x0310)
class UABP_PoseableMesh_F_C : public UTigerCharacterPoseableMeshAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0318(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                // 0x0348(0x0010)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0358(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x0378(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x0480(0x0108)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_PoseableMesh_F.ABP_PoseableMesh_F_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_F_AnimGraphNode_ModifyBone_9D0F60E84DD53BC88DAD299B16A4D6F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_F_AnimGraphNode_ModifyBone_D648B7EA447C5AD52C901ABECC2AEE73();
	void ExecuteUbergraph_ABP_PoseableMesh_F(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
