#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AIEntityCombatComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AIEntityCombatComponent.TBP_AIEntityCombatComponent_C
// 0x0000 (0x0138 - 0x0138)
class UTBP_AIEntityCombatComponent_C : public UTigerEntityCombatComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AIEntityCombatComponent.TBP_AIEntityCombatComponent_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
