#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_RootCategoryMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C
// 0x0038 (0x02B8 - 0x0280)
class UTBP_UI_Grimoire_RootCategoryMenu_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHorizontalBox*                              MenuItems;                                                // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UTBP_UI_Grimoire_RootButton_C*>       MenuButtons;                                              // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	class UTBP_UI_Grimoire_C*                          GrimoireUI;                                               // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ActiveIndex;                                              // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	class UTBP_UI_Grimoire_Searchbar_C*                SearchBar;                                                // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C"));
		return ptr;
	}


	void GetActiveCategory(class UTigerGrimoireCategory** Return);
	void TabSelectSearchbar(bool Select);
	void DecrementMenuIndex();
	void IncrementMenuIndex();
	void SetupMenuButtons();
	void SelectMenuOnClick(class UTigerGrimoireCategory* SelectedCategory);
	void OnOpen(class UTBP_UI_Grimoire_C* GrimoireUI);
	void MenuLeftPressed();
	void MenuRightPressed();
	void OnClose();
	void SelectSearchbarOnClick();
	void ExecuteUbergraph_TBP_UI_Grimoire_RootCategoryMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
