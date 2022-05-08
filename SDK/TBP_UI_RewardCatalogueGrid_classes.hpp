#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_RewardCatalogueGrid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_RewardCatalogueGrid.TBP_UI_RewardCatalogueGrid_C
// 0x0010 (0x0290 - 0x0280)
class UTBP_UI_RewardCatalogueGrid_C : public UTigerWidget
{
public:
	class UTigerStyledRichTextBlock*                   EmptyText;                                                // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UUniformGridPanel*                           Grid;                                                     // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_RewardCatalogueGrid.TBP_UI_RewardCatalogueGrid_C"));
		return ptr;
	}


	void UpdateAllRewards();
	void AddReward(class UTigerChallenge* InChallenge, class UTigerInventoryItemBase* InReward, class UTBP_UI_RewardCatalogueItem_C** OutItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
