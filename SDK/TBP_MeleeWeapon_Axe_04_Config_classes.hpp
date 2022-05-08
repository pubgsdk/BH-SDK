#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MeleeWeapon_Axe_04_Config_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MeleeWeapon_Axe_04_Config.TBP_MeleeWeapon_Axe_04_Config_C
// 0x0000 (0x0048 - 0x0048)
class UTBP_MeleeWeapon_Axe_04_Config_C : public UTigerMeleeWeaponTrailConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_MeleeWeapon_Axe_04_Config.TBP_MeleeWeapon_Axe_04_Config_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
