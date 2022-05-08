#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RangedWeapon_Shotgun_DoubleBarreled_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_RangedWeapon_Shotgun_DoubleBarreled.TBP_RangedWeapon_Shotgun_DoubleBarreled_C
// 0x0000 (0x023C - 0x023C)
class UTBP_RangedWeapon_Shotgun_DoubleBarreled_C : public UTBP_RangedWeapon_Shotgun_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_RangedWeapon_Shotgun_DoubleBarreled.TBP_RangedWeapon_Shotgun_DoubleBarreled_C"));
		return ptr;
	}


	void OnHitAuthority(class ATigerCharacter* Instigator, class ATigerCharacter* Target);
	struct FVector CalculateBulletDirection(const struct FVector& InAimDirection, int InBulletIndex, class UTigerRangedWeaponComponent* InRangedWeaponComponent, struct FTigerRangedRandomState* InOutRandomState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
