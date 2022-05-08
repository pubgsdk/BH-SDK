#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TooltipActionsContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_TooltipActionsContainer.TBP_UI_TooltipActionsContainer_C
// 0x00E0 (0x0340 - 0x0260)
class UTBP_UI_TooltipActionsContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHorizontalBox*                              ActionsContainer;                                         // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FSlateFontInfo                              InFont;                                                   // 0x0270(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	TArray<class UTBP_UI_InputPrompt_Keyboard_C*>      KeyboardWidgets;                                          // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TArray<class UTBP_UI_InputPrompt_Gamepad_C*>       GamepadWidgets;                                           // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FText                                       HoldText;                                                 // 0x02E8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       EmptyText;                                                // 0x0300(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	int                                                LastActionCount;                                          // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	TArray<class UHorizontalBoxSlot*>                  KeyboardSlotObjects;                                      // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TArray<class UHorizontalBoxSlot*>                  GamepadSlotObjects;                                       // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_TooltipActionsContainer.TBP_UI_TooltipActionsContainer_C"));
		return ptr;
	}


	void SetActions(TArray<struct FTigerTooltipAction>* InActions);
	void OnInitialized();
	void ExecuteUbergraph_TBP_UI_TooltipActionsContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
