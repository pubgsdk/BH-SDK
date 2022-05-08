#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InventoryRangedModSlots_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C
// 0x0138 (0x03B8 - 0x0280)
class UTBP_UI_InventoryRangedModSlots_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UGridPanel*                                  Slots;                                                    // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                   // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	struct FSlateBrush                                 ModBorderBrush;                                           // 0x0298(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                DefaultBorderColor;                                       // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FSlateBrush                                 DefaultBackgroundBrush;                                   // 0x0330(0x0088) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C"));
		return ptr;
	}


	void SetModBorderColor(int InSlotIndex, const struct FLinearColor& InColor);
	void PopulateMods(ETigerWeaponSlot InWeaponSlot, TArray<struct FTigerModSlotInfo> InModSlots);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_InventoryRangedModSlots(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
