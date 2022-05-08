#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InputPromptCombined_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C
// 0x0091 (0x0311 - 0x0280)
class UTBP_UI_InputPromptCombined_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UButton*                                     Button;                                                   // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               InputPrompt_Gamepad;                                      // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Keyboard_C*              InputPrompt_Keyboard;                                     // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             InputSwitcher;                                            // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       PrefixText;                                               // 0x02A8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       PostfixText;                                              // 0x02C0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       Action;                                                   // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsAxis;                                                   // 0x02E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         FontInfo;                                                 // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_ExposeOnSpawn)
	struct FMulticastScriptDelegate                    OnClicked;                                                // 0x02F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               IsClickable;                                              // 0x0308(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               bShowCustomOpacity;                                       // 0x0309(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData01[0x2];                                       // 0x030A(0x0002) MISSED OFFSET
	float                                              CustomOpacity;                                            // 0x030C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               bIsHoldAction;                                            // 0x0310(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C"));
		return ptr;
	}


	void UpdatePromptVisibility();
	void Update_Properties(const struct FText& PrefixText, const struct FText& PostfixText, const struct FName& Action, bool IsAxis);
	void OnUseGamepadChanged(bool bNewIsProbablyUsingGamepad);
	void Construct();
	void BndEvt__Button_89_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void SetClickability(bool Index);
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_InputPromptCombined(int EntryPoint);
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
