#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_CommonItemCardBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C
// 0x008B (0x030B - 0x0280)
class UTBP_UI_CommonItemCardBase_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      Card_Background;                                          // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      ItemImage;                                                // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScaleBox*                                   ItemImage_Scalebox;                                       // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      ItemShadow;                                               // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Rarity_left;                                              // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Rarity_right;                                             // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Gradient_C*                          TBP_UI_Gradient;                                          // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Gradient_C*                          TBP_UI_Gradient_147;                                      // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FTigerItemId                                ItemId;                                                   // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnItemSelected;                                           // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UTexture2D*                                  UITexture;                                                // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerInventoryItemBase*                     InventoryItem;                                            // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass* /*UTigerWidget*/                     ParentWidgetClass;                                        // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	TArray<class UClass* /*UTigerWidget*/>             CompatibleParentWidgets;                                  // 0x02F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	ETigerItemRarity                                   Rarity;                                                   // 0x0308(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	ETigerPersistentStoreCategory                      StoreCategory;                                            // 0x0309(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShowRarityGlow;                                           // 0x030A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C"));
		return ptr;
	}


	void ChooseItemIconToShow(class UTigerInventoryItemBase* InItem, TSoftObjectPtr<class UTexture2D>* UITexture);
	void GetInventoryItemFromPossiblecombineditemContainer(class UTigerInventoryItemBase** PotentialCombinedItem);
	void GetUITexture(TSoftObjectPtr<class UTexture2D>* UITexture);
	void UpdateRarity();
	void UpdateAlignments();
	void OnLoaded_97B679FE49F637758657B59EE4DBCEA0(class UObject* Loaded);
	void ItemSelected();
	void OnTextureLoaded(class UTexture2D* ImageTexture);
	void UpdateItemId(const struct FTigerItemId& ItemId);
	void OnItemLoaded(const struct FTigerItemId& ItemId, class UTigerInventoryItemBase* InventoryItem);
	void UpdateItemVisuals(TSoftObjectPtr<class UTexture2D> _2DTexture, ETigerItemRarity StoreItemRarity, ETigerPersistentStoreCategory StoreCategory);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetAndUpdateRarityVisibility(bool InShowRarityGlow);
	void SetInventoryItem(class UTigerInventoryItemBase* NewInventoryItem);
	void ExecuteUbergraph_TBP_UI_CommonItemCardBase(int EntryPoint);
	void OnItemSelected__DelegateSignature(const struct FTigerItemId& InItemId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
