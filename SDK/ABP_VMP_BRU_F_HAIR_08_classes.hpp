#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_VMP_BRU_F_HAIR_08_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_VMP_BRU_F_HAIR_08.ABP_VMP_BRU_F_HAIR_08_C
// 0x0D40 (0x1000 - 0x02C0)
class UABP_VMP_BRU_F_HAIR_08_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x02F8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                             // 0x0320(0x0440)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0760(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                             // 0x0780(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x0BC0(0x0440)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_VMP_BRU_F_HAIR_08.ABP_VMP_BRU_F_HAIR_08_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_VMP_BRU_F_HAIR_08(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
