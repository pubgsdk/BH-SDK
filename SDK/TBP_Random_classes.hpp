#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Random_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Random.TBP_Random_C
// 0x0004 (0x00A4 - 0x00A0)
class UTBP_Random_C : public UBTDecorator_BlueprintBase
{
public:
	int                                                PercentageChance;                                         // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Random.TBP_Random_C"));
		return ptr;
	}


	bool PerformConditionCheck(class AActor* OwnerActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
