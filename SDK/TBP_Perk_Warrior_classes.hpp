#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Perk_Warrior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Perk_Warrior.TBP_Perk_Warrior_C
// 0x0018 (0x00D8 - 0x00C0)
class UTBP_Perk_Warrior_C : public UTigerPassiveComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<class UTigerItemAsset*>                     PossibleStartingWeapons;                                  // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Perk_Warrior.TBP_Perk_Warrior_C"));
		return ptr;
	}


	void SelectWeapon(class UTigerItemAsset** OutWeaponAsset);
	void OnCreated(class ATigerPlayer* InPlayer, bool InHasAuthority);
	void ExecuteUbergraph_TBP_Perk_Warrior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
