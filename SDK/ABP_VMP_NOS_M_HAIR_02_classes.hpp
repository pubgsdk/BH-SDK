#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_VMP_NOS_M_HAIR_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_VMP_NOS_M_HAIR_02.ABP_VMP_NOS_M_HAIR_02_C
// 0x1E40 (0x2100 - 0x02C0)
class UABP_VMP_NOS_M_HAIR_02_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x02F8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0318(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7;                             // 0x0340(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6;                             // 0x0780(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                             // 0x0BC0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                             // 0x1000(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                             // 0x1440(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                             // 0x1880(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x1CC0(0x0440)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_VMP_NOS_M_HAIR_02.ABP_VMP_NOS_M_HAIR_02_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_VMP_NOS_M_HAIR_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
