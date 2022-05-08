#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_VMP_NOS_F_HAIR_03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_VMP_NOS_F_HAIR_03.ABP_VMP_NOS_F_HAIR_03_C
// 0x37C0 (0x3A80 - 0x02C0)
class UABP_VMP_NOS_F_HAIR_03_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x02C8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x02E8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0308(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_13;                            // 0x0310(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_12;                            // 0x0750(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_11;                            // 0x0B90(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_10;                            // 0x0FD0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9;                             // 0x1410(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8;                             // 0x1850(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7;                             // 0x1C90(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6;                             // 0x20D0(0x0440)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x2510(0x0030)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                             // 0x2540(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                             // 0x2980(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                             // 0x2DC0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                             // 0x3200(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x3640(0x0440)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_VMP_NOS_F_HAIR_03.ABP_VMP_NOS_F_HAIR_03_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_VMP_NOS_F_HAIR_03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
