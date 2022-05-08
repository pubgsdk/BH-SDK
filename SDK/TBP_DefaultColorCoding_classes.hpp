#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_DefaultColorCoding_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_DefaultColorCoding.TBP_DefaultColorCoding_C
// 0x0000 (0x0058 - 0x0058)
class UTBP_DefaultColorCoding_C : public UTigerDisciplineParticleStrategy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_DefaultColorCoding.TBP_DefaultColorCoding_C"));
		return ptr;
	}


	void ExecutePostSpawnStrategy(class UParticleSystemComponent* InParticleToExecuteOn, class ATigerCharacter* InParticleInstigator);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
