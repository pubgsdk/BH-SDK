#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Weapon_Unarmed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Weapon_Unarmed.TBP_Weapon_Unarmed_C
// 0x0000 (0x0200 - 0x0200)
class UTBP_Weapon_Unarmed_C : public UTBP_MeleeWeapon_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Weapon_Unarmed.TBP_Weapon_Unarmed_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
