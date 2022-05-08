#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MeleeWeapon_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C
// 0x0060 (0x0200 - 0x01A0)
class UTBP_MeleeWeapon_Master_C : public UTigerMeleeWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	TMap<TEnumAsByte<ENUM_MeleeWeaponCategories>, struct FName> WeaponToAudioName;                                        // 0x01A8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TEnumAsByte<ENUM_MeleeWeaponCategories>            AnimMeleeWeaponCategory;                                  // 0x01F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01F9(0x0003) MISSED OFFSET
	float                                              LifestealMultiplier;                                      // 0x01FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C"));
		return ptr;
	}


	void GetMeleeWeaponCategory(TEnumAsByte<ENUM_MeleeWeaponCategories>* MeleeWeaponCategory);
	void OnWorldObjectHit(class ATigerCharacter* InInstigator, const struct FHitResult& InWorldObjectHitResult, const struct FVector& InSwingDirection);
	void OnHit(class ATigerCharacter* Instigator, class ATigerCharacter* Target, ETigerWeaponMeleeAttackType AttackType, float Damage);
	void ExecuteUbergraph_TBP_MeleeWeapon_Master(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
