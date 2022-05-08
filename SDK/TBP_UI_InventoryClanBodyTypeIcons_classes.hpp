#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InventoryClanBodyTypeIcons_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C
// 0x0018 (0x0298 - 0x0280)
class UTBP_UI_InventoryClanBodyTypeIcons_C : public UTigerWidget
{
public:
	class UImage*                                      BodyTypeIcon;                                             // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      ClanIcon;                                                 // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      ClanStrikethrough;                                        // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C"));
		return ptr;
	}


	void SetOwnerIndicators(class UTigerInventoryItemBase* InItem);
	void SetClanOrArchetypeIcon(TArray<ETigerClan>* InClans, TArray<ETigerPowerKitType>* InArchetypes);
	void CheckIfShouldDisplayDisallowedClan(TArray<ETigerClan>* InClans, TArray<ETigerPowerKitType>* InArchetypes, bool* bSuccessful);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
