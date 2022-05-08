#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RangedWeapon_Shotgun_Multibarreled_Rifle_4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_RangedWeapon_Shotgun_Multibarreled_Rifle_4.TBP_RangedWeapon_Shotgun_Multibarreled_Rifle_3_C
// 0x0000 (0x022C - 0x022C)
class UTBP_RangedWeapon_Shotgun_Multibarreled_Rifle_3_C : public UTBP_RangedWeapon_Shotgun_Multibarreled_Rifle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_RangedWeapon_Shotgun_Multibarreled_Rifle_4.TBP_RangedWeapon_Shotgun_Multibarreled_Rifle_3_C"));
		return ptr;
	}


	void OnHitAuthority(class ATigerCharacter* Instigator, class ATigerCharacter* Target);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
