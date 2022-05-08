#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ContextualHelpSlot_Interaction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ContextualHelpSlot_Interaction.TBP_UI_ContextualHelpSlot_Interaction_C
// 0x0020 (0x0280 - 0x0260)
class UTBP_UI_ContextualHelpSlot_Interaction_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      IconImage;                                                // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   PromptText;                                               // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPromptCombined_C*               TBP_UI_InputPromptCombined;                               // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ContextualHelpSlot_Interaction.TBP_UI_ContextualHelpSlot_Interaction_C"));
		return ptr;
	}


	void SetIcon(class UTigerContextualHelp* InData);
	void SetInteractionText(class UTigerContextualHelp* InData);
	void ShowClimbPrompt();
	void HideClimbPrompt();
	void ExecuteUbergraph_TBP_UI_ContextualHelpSlot_Interaction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
