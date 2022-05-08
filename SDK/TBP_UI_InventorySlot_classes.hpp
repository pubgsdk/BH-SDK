#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InventorySlot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_InventorySlot.TBP_UI_InventorySlot_C
// 0x0494 (0x0714 - 0x0280)
class UTBP_UI_InventorySlot_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      AmmotypeColorIndicator;                                   // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      BackgroundImage;                                          // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                BigSlotContent;                                           // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      BorderImage;                                              // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  CountDivider;                                             // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      InnerBorder;                                              // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     IsHoveredCheck;                                           // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      ItemImage;                                                // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    ItemUnusableContainer;                                    // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      ItemUnusableWidget;                                       // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  MaxCountText;                                             // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      SelectedImage;                                            // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   StackCountText;                                           // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  TypeText;                                                 // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Inventory_C*                         Inventory;                                                // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerItemAsset*                             ItemAsset;                                                // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                StackCount;                                               // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0310(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 AmmoBackgroundBrush;                                      // 0x0398(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 ModBorderBrush;                                           // 0x0420(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 AmmoBorderBrush;                                          // 0x04A8(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 ConsumableBorderBrush;                                    // 0x0530(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 SlotMissingModBrush;                                      // 0x05B8(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FLinearColor                                DefaultBorderColor;                                       // 0x0640(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	ETigerWeaponSlot                                   ModOnWeaponSlot;                                          // 0x0650(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsWeaponModSlot;                                         // 0x0651(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bIsModEquippedInWeaponSlot;                               // 0x0652(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0653(0x0001) MISSED OFFSET
	struct FName                                       Config_MenuPrimary;                                       // 0x0654(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       Config_MenuSecondary;                                     // 0x065C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0664(0x0004) MISSED OFFSET
	struct FSlateBrush                                 CollectibleBorderBrush;                                   // 0x0668(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FMulticastScriptDelegate                    OnUnhovered;                                              // 0x06F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnHover;                                                  // 0x0700(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	int                                                InventorySlotIndex;                                       // 0x0710(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_InventorySlot.TBP_UI_InventorySlot_C"));
		return ptr;
	}


	void ClearTooltipActions();
	void ResetImageColourForArtifacts();
	void UpdateArtifact(int InStackCount);
	void UpdateCollectible(int InStackCount);
	void UpdateMod();
	void UpdateConsumable();
	void UpdateAmmo(class UTigerAmmoAsset* InAmmoAsset);
	void AddDynamicPingTooltipAction();
	void SwapWeaponEquippedOn();
	void SendHasItemPing();
	void SendWantItemPing();
	void IsValidAmmoItemForWeaponSlot(class UTigerInventoryComponent* InInventoryComponent, ETigerWeaponSlot InWeaponSlot, class UTigerAmmoAsset* InAmmoAsset, bool* bCanUseAmmo);
	void SetModUnavailableState();
	void SetAmmoUnavailableState();
	void CreateTooltipActions();
	void GetRangedModInfo(class UTigerRangedModItemAsset* ModItemAsset, bool bIgnoreEquippedMod, bool* bIsModSlotEmpty, bool* bSupportsSwap, bool* bHasHigherPriority);
	class UTigerTooltipWidget* ConstructTooltipWidget();
	void UnequipMod();
	void EquipMod();
	void SetModInWeapon(ETigerWeaponSlot InWeaponSlot, class UTigerRangedModItemAsset* InModItemAsset, bool bInIsUnlocked, bool bInIsOnHud);
	void UseConsumable();
	void DropPack(bool bWholeStack);
	void UpdateInventorySlot(class UTigerItemAsset* NewItemAsset, int ItemStackSize);
	void SetStackCount(int InStackCount);
	void Construct();
	void OnDropSinglePack();
	void OnDropStack();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__TBP_UI_InventorySlot_Button_232_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TBP_UI_InventorySlot_IsHoveredCheck_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Select();
	void Unselect();
	void BndEvt__TBP_UI_InventorySlot_IsHoveredCheck_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_InventorySlot(int EntryPoint);
	void OnHover__DelegateSignature(class UTBP_UI_InventorySlot_C* InventorySlot);
	void OnUnhovered__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
