#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InventoryMeleeSlot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C
// 0x0088 (0x0308 - 0x0280)
class UTBP_UI_InventoryMeleeSlot_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      Border;                                                   // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     Button_OnHoover;                                          // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      MeleeBackgroundPane;                                      // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      RarityIndicator;                                          // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      SelectedImage;                                            // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      WeaponImage;                                              // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	ETigerWeaponSlot                                   Weapon_Slot;                                              // 0x02B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	struct FName                                       SelectInputAction;                                        // 0x02BC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Current_Opacity;                                          // 0x02C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTigerPingNotificationNetData               PingNetData;                                              // 0x02C8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class UTigerItemAsset*                             ItemAsset;                                                // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    MeleeSlotHovered;                                         // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    MeleeSlotUnhovered;                                       // 0x02F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C"));
		return ptr;
	}


	void UpdateRarityMarker();
	void PingEmpty();
	void PingWeapon();
	void CreateTooltipActions();
	class UTigerTooltipWidget* ConstructTooltipWidget();
	void EquipWeapon();
	void DropWeapon();
	void GetSelectedSlotColor(ETigerWeaponSlot SelectedSlot, struct FSlateColor* Color);
	void UpdateNoWeapon();
	void UpdateVisibleWeapon(class UTigerMeleeWeapon* MeleeWeapon, class UTigerItemAsset* WeaponItem, class UTigerDisciplineComponent* Discipline, ETigerWeaponSlot EquippedSlot);
	void BndEvt__TBP_UI_InventoryMeleeSlot_Button_142_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TBP_UI_InventoryMeleeSlot_Button_142_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Melee_Slot_Updated();
	void Select();
	void Unselect();
	void ExecuteUbergraph_TBP_UI_InventoryMeleeSlot(int EntryPoint);
	void MeleeSlotUnhovered__DelegateSignature();
	void MeleeSlotHovered__DelegateSignature(class UTBP_UI_InventoryMeleeSlot_C* MeleeSlot);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
