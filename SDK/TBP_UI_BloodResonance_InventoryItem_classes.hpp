#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_BloodResonance_InventoryItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C
// 0x0041 (0x02C1 - 0x0280)
class UTBP_UI_BloodResonance_InventoryItem_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTigerStyledRichTextBlock*                   BloodResonanceDescText;                                   // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   BloodResonanceNameText;                                   // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      ResonanceIconImage;                                       // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      ResonanceVFXImage;                                        // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_BloodResonanceSingularSlot_C*        Slot1;                                                    // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_BloodResonanceSingularSlot_C*        Slot2;                                                    // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_BloodResonanceSingularSlot_C*        Slot3;                                                    // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	ETigerBloodType                                    BloodType;                                                // 0x02C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C"));
		return ptr;
	}


	void UpdateStatusAndInfo(const struct FText& TextDesc);
	void InitializeInventoryResonance(const struct FText& InResonanceName, const struct FLinearColor& InResonanceColor, TSoftObjectPtr<class UTexture2D> InResonanceIcon, TSoftObjectPtr<class UTexture2D> InResonanceVFX, ETigerBloodType InBloodType);
	void ExecuteUbergraph_TBP_UI_BloodResonance_InventoryItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
