#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_NeedsToMoveCloser_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_NeedsToMoveCloser.TBP_AI_NeedsToMoveCloser_C
// 0x0060 (0x0100 - 0x00A0)
class UTBP_AI_NeedsToMoveCloser_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FBlackboardKeySelector                      TargetPlayer;                                             // 0x00A8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              MaxDistanceFromTarget;                                    // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      CanShoot;                                                 // 0x00D8(0x0028) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_NeedsToMoveCloser.TBP_AI_NeedsToMoveCloser_C"));
		return ptr;
	}


	bool PerformConditionCheck(class AActor* OwnerActor);
	void ExecuteUbergraph_TBP_AI_NeedsToMoveCloser(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
