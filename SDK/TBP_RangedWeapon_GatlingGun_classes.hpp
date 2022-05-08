#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RangedWeapon_GatlingGun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_RangedWeapon_GatlingGun.TBP_RangedWeapon_GatlingGun_C
// 0x0000 (0x022C - 0x022C)
class UTBP_RangedWeapon_GatlingGun_C : public UTBP_RangedWeapon_AssaultRifle_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_RangedWeapon_GatlingGun.TBP_RangedWeapon_GatlingGun_C"));
		return ptr;
	}


	void PlayLoopingAkEvents(class ATigerCharacter* InInstigator);
	void OnEndFireAudio(class ATigerCharacter* InInstigator);
	void OnBeginFireAudio(class ATigerCharacter* InInstigator);
	void OnHitAuthority(class ATigerCharacter* Instigator, class ATigerCharacter* Target);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
