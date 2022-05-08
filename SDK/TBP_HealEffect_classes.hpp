#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_HealEffect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_HealEffect.TBP_HealEffect_C
// 0x0000 (0x0028 - 0x0028)
class UTBP_HealEffect_C : public UTigerCharacterEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_HealEffect.TBP_HealEffect_C"));
		return ptr;
	}


	void Apply(class ATigerCharacter* Character);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
