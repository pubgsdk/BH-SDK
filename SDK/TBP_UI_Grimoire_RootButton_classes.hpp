#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_RootButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C
// 0x0037 (0x0398 - 0x0361)
class UTBP_UI_Grimoire_RootButton_C : public UTBP_UI_MatchMaker_TabButton_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTigerIngameSubmenuWidget*                   MenuWidget;                                               // 0x0370(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnClicked;                                                // 0x0378(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               IsSelected;                                               // 0x0388(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	class UTigerGrimoireCategory*                      MenuItemCategory;                                         // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C"));
		return ptr;
	}


	void OnNewMenuSelected(class UTigerGrimoireCategory* NewCategory);
	void Construct();
	void OnButtonClicked();
	void ExecuteUbergraph_TBP_UI_Grimoire_RootButton(int EntryPoint);
	void OnClicked__DelegateSignature(class UTigerGrimoireCategory* SubmenuWidget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
