#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_VMP_BRU_M_HAIR_07_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_VMP_BRU_M_HAIR_07.ABP_VMP_BRU_M_HAIR_07_C
// 0x0900 (0x0BC0 - 0x02C0)
class UABP_VMP_BRU_M_HAIR_07_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                             // 0x0300(0x0440)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0740(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x0760(0x0440)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0BA0(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_VMP_BRU_M_HAIR_07.ABP_VMP_BRU_M_HAIR_07_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_VMP_BRU_M_HAIR_07(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
