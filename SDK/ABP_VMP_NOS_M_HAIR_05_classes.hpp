#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_VMP_NOS_M_HAIR_05_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_VMP_NOS_M_HAIR_05.ABP_VMP_NOS_M_HAIR_05_C
// 0x3380 (0x3640 - 0x02C0)
class UABP_VMP_NOS_M_HAIR_05_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_12;                            // 0x02D0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_11;                            // 0x0710(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_10;                            // 0x0B50(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9;                             // 0x0F90(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8;                             // 0x13D0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7;                             // 0x1810(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6;                             // 0x1C50(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                             // 0x2090(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                             // 0x24D0(0x0440)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x2910(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x2930(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                             // 0x2950(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                             // 0x2D90(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x31D0(0x0440)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x3610(0x0030)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_VMP_NOS_M_HAIR_05.ABP_VMP_NOS_M_HAIR_05_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_VMP_NOS_M_HAIR_05(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
