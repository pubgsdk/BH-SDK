#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ModularSwitcher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C
// 0x0050 (0x02D0 - 0x0280)
class UTBP_UI_ModularSwitcher_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            SelectSwitcherFromTabList;                                // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            SelectTabListFromSwitcher;                                // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             CoreWidgetSwitcher;                                       // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class URetainerBox*                                RetainerBox_3;                                            // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     SwitcherHoverSensor;                                      // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_ModularList_C*                       TBP_UI_ModularList;                                       // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMargin                                     TabPadding;                                               // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	class UWidget*                                     HighlightedWidget;                                        // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C"));
		return ptr;
	}


	void HighlightSwitcher();
	void HighlightTabsList();
	void OnTabSelected(int InIndex);
	void OnTabHovered(int InIndex);
	void AddTabsWithPrebuiltWidgets(TArray<struct FTigerModularListItemInfo>* InTabItemsInfo, TArray<class UTigerWidget*>* InWidgets);
	void AddTabs(TArray<struct FTigerModularListItemInfo>* InTabItemsInfo, TArray<class UClass* /*UTigerWidget*/>* InWidgetsToBuild);
	void AddTabWithPrebuiltWidget(class UTigerWidget* InWidgetForSwitcher, const struct FTigerModularListItemInfo& InInfo);
	void AddTab(class UClass* /*UTigerWidget*/ InWidgetForSwitcher, const struct FTigerModularListItemInfo& InInfo);
	void BndEvt__TBP_UI_ModularSwitcher_HoverSensor_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_ModularSwitcher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
