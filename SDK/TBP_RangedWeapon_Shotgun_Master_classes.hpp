#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RangedWeapon_Shotgun_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_RangedWeapon_Shotgun_Master.TBP_RangedWeapon_Shotgun_Master_C
// 0x0010 (0x023C - 0x022C)
class UTBP_RangedWeapon_Shotgun_Master_C : public UTBP_RangedWeapon_Master_C
{
public:
	struct FVector                                     SpreadOfCurrentShot_1;                                    // 0x022C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ShotIndex;                                                // 0x0238(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_RangedWeapon_Shotgun_Master.TBP_RangedWeapon_Shotgun_Master_C"));
		return ptr;
	}


	void Demo(const struct FVector& AimDirection, int BulletIndex, class UTigerRangedWeaponComponent* RangedWeaponComponent, float NoiseMagnitudeInDegrees, struct FTigerRangedRandomState* RandomState, struct FVector* OutDirection);
	struct FVector CalculateBulletDirection(const struct FVector& InAimDirection, int InBulletIndex, class UTigerRangedWeaponComponent* InRangedWeaponComponent, struct FTigerRangedRandomState* InOutRandomState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
