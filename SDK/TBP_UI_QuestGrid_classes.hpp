#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_QuestGrid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_QuestGrid.TBP_UI_QuestGrid_C
// 0x0048 (0x02C8 - 0x0280)
class UTBP_UI_QuestGrid_C : public UTigerWidget
{
public:
	class UVerticalBox*                                PreviewContainer;                                         // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       Title;                                                    // 0x0288(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FMulticastScriptDelegate                    QuestSelected;                                            // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMargin                                     ElementPadding;                                           // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	class UTBP_UI_QuestPreview_C*                      SelectedWidget;                                           // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_QuestGrid.TBP_UI_QuestGrid_C"));
		return ptr;
	}


	void SelectFirstQuest();
	void OnButtonClicked(class UTBP_UI_QuestPreview_C* InClickedWidget);
	void PopulateGrid(int InStartIndex, TArray<class UTigerQuest*>* InQuests);
	void QuestSelected__DelegateSignature(class UTigerQuest* InSelectedQuest);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
