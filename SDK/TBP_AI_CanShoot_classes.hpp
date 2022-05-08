#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_CanShoot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_CanShoot.TBP_AI_CanShoot_C
// 0x0050 (0x00F0 - 0x00A0)
class UTBP_AI_CanShoot_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      CanShoot;                                                 // 0x00A0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      TargetPlayer;                                             // 0x00C8(0x0028) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_CanShoot.TBP_AI_CanShoot_C"));
		return ptr;
	}


	bool PerformConditionCheck(class AActor* OwnerActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
