#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_OutfitItemContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C
// 0x005C (0x02DC - 0x0280)
class UTBP_UI_OutfitItemContainer_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UGridPanel*                                  ItemContainer;                                            // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScrollBox*                                  ScrollContainer;                                          // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Scrollbox_C*                         TBP_UI_Scrollbox;                                         // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UThrobber*                                   UpdateThrobber;                                           // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TScriptInterface<class UTBP_UI_OutfitItemListener_C> ItemListener;                                             // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TArray<class UTBP_UI_OutfitItem_C*>                OutfitWidgets;                                            // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TArray<class UTBP_UI_OutfitItem_C*>                FreeItemWidgets;                                          // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	int                                                CONFIG_NumItemsToPreallocate;                             // 0x02D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C"));
		return ptr;
	}


	void CreateStoreItems(TArray<struct FTigerVendorStoreCategoryItem>* Items);
	void UpdateOwnerStatus(TSoftClassPtr<class UClass> ItemClassPath, int NewInventoryCount, bool bIsEquipped);
	bool DoesPlayerOwnItem(TSoftClassPtr<class UClass> ItemClassPath);
	void SetItemListener(const TScriptInterface<class UTBP_UI_OutfitItemListener_C>& ItemListener);
	void Create_Store_Item(int InIndex, struct FTigerVendorStoreCategoryItem* StoreItem, class UTBP_UI_OutfitItem_C** ItemWidget);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Reset();
	void Construct();
	void ExecuteUbergraph_TBP_UI_OutfitItemContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
