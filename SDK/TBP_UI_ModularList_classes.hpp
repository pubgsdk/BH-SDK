#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ModularList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ModularList.TBP_UI_ModularList_C
// 0x0048 (0x02C8 - 0x0280)
class UTBP_UI_ModularList_C : public UTigerModularList
{
public:
	class UWidgetAnimation*                            FirstItemHovered;                                         // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                List;                                                     // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnItemSelected;                                           // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<class UTBP_UI_ModularListItem_C*>           Items;                                                    // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	int                                                CurrentlyHoveredIndex;                                    // 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                CurrentlySelectedIndex;                                   // 0x02B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnItemHover;                                              // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ModularList.TBP_UI_ModularList_C"));
		return ptr;
	}


	void GetUpperAndLowerSeperatorsForIndex(int InIndex, class UTBP_UI_ModularSeparator_C** OutUpperSeparator, class UTBP_UI_ModularSeparator_C** OutLowerSeparator);
	void UnhoverCurrentItem();
	void OnItemHovered(int InIndex);
	void OnItemPressed(int InIndex);
	void HoverItemAtIndex(int InIndex);
	void SelectItemAtIndex(int InIndex);
	void SelectCurrentItem();
	void ClearList();
	void AddItemToList(const struct FTigerModularListItemInfo& InItemInfo);
	void FillList(TArray<struct FTigerModularListItemInfo>* InListItems);
	void OnItemHover__DelegateSignature(int InIndex);
	void OnItemSelected__DelegateSignature(int InIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
