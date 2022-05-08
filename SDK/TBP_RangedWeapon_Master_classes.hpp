#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RangedWeapon_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C
// 0x002C (0x022C - 0x0200)
class UTBP_RangedWeapon_Master_C : public UTigerRangedWeapon
{
public:
	class UClass* /*UTigerCameraPreset*/               CrouchingAimingCameraPreset;                              // 0x0200(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     SpreadOfCurrentShot;                                      // 0x0208(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Slowed_Time;                                              // 0x0214(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ENUM_RangedWeaponCategories>           AnimRangedWeaponCategory;                                 // 0x0218(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	struct FLinearColor                                MuzzleFlashColor;                                         // 0x021C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C"));
		return ptr;
	}


	void GetRangedWeaponCategory(TEnumAsByte<ENUM_RangedWeaponCategories>* RangedWeaponCategory);
	struct FVector StandardSpread_16(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector Horizontal_Line(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector Tri(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector Vertical_Line(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector StandardSpread_8(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector StandardSpread_12(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector NeoArmstrongCycloneJetArmstrongCannon(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector ProjectileDirectionList(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector DefaultShotgunSpread(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector RowBasedGrid(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, bool ShouldBeInsideSpreadRadius, int Rows);
	struct FVector SmileyFace__D(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir);
	struct FVector CircularSpread(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir);
	struct FVector TrueShotgunSpread(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector Triangle(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
