#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_TypeAndRarity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBFL_TypeAndRarity.TBFL_TypeAndRarity_C
// 0x0000 (0x0028 - 0x0028)
class UTBFL_TypeAndRarity_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBFL_TypeAndRarity.TBFL_TypeAndRarity_C"));
		return ptr;
	}


	static void GetTextFromLootCategory(ETigerLootCategory LootCategory, class UObject* __WorldContext, struct FText* Text);
	static void GetShortTextFromWeaponType(ETigerWeaponType WeaponType, class UObject* __WorldContext, struct FText* ShortType);
	static void GetTextFromAmmoType(ETigerWeaponAmmoType In_Ammo_Type, class UObject* __WorldContext, struct FText* Text);
	static void GetColorTextFromItemType(class UTigerItemAsset* InItemAsset, class UObject* __WorldContext, struct FText* ColorText);
	static void GetColorTextFromItemRarity(ETigerItemRarity In_Rarity, class UObject* __WorldContext, struct FText* ColorText);
	static void SetRarityMaterialFromWeaponClass(class UMeshComponent* InMeshComponent, class UTigerWeapon* InWeaponClass, class UObject* __WorldContext);
	static void GetTextFromItemType(ETigerInventoryItemType In_Item_Type, bool InGetShortVersion, class UObject* __WorldContext, struct FText* Text);
	static void GetTextFromItemRarity(ETigerItemRarity In_Rarity, class UObject* __WorldContext, struct FText* Text);
	static void GetData(class UObject* __WorldContext, class UTigerTypeAndRarityData** Data);
	static void GetColorFromItemRarity(ETigerItemRarity In_Rarity, class UObject* __WorldContext, struct FLinearColor* Color);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
