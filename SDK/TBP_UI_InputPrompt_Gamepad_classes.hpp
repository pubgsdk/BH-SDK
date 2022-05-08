#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InputPrompt_Gamepad_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C
// 0x00A9 (0x0391 - 0x02E8)
class UTBP_UI_InputPrompt_Gamepad_C : public UTigerInputPrompt
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTigerStyledRichTextBlock*                   HoldText;                                                 // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   PostFixTextBlock;                                         // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   PrefixTextBlock;                                          // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_XboxIcon_C*                          TBP_UI_XboxIcon;                                          // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FSlateFontInfo                              FontInfo;                                                 // 0x0310(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FMargin                                     CustomPadding;                                            // 0x0368(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FDataTableRowHandle                         Font;                                                     // 0x0378(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               bShowCustomOpacity;                                       // 0x0388(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	float                                              CustomOpacity;                                            // 0x038C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               bIsHoldAction;                                            // 0x0390(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C"));
		return ptr;
	}


	void Set_Show_Input(bool bInShowInput, bool bInShouldToggleVisibilityOnGamepadChanged);
	void IsHoldAction(bool ShowHoldAction);
	void ChangeColor(bool Hovered);
	void InputBindingChanged(const struct FName& InInputName);
	void UpdatePromptVisibility(bool bUsingGamePad);
	void ConstructIcon();
	void Construct();
	void Destruct();
	void OnUseGamepadChanged(bool bNewIsProbablyUsingGamepad);
	void PreConstruct(bool IsDesignTime);
	void UpdateIcon();
	void UpdateProperties(const struct FText& NewPrefixText, const struct FText& NewPostfixText, bool bNewUseKey, const struct FName& NewInputAction, const struct FName& NewInputAxis, const struct FKey& NewInputKey);
	void OnInputBindingChanged(const struct FInputActionKeyMapping& OldKeyBinding, const struct FInputActionKeyMapping& NewKeyBinding);
	void OnInputPresetChanged();
	void OnAxisInputBindingChanged(const struct FInputAxisKeyMapping& OldKeyBinding, const struct FInputAxisKeyMapping& NewKeyBinding);
	void ExecuteUbergraph_TBP_UI_InputPrompt_Gamepad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
