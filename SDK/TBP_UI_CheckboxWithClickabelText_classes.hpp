#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_CheckboxWithClickabelText_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C
// 0x00B0 (0x0310 - 0x0260)
class UTBP_UI_CheckboxWithClickabelText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UButton*                                     Checkbox_button;                                          // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      CheckboxBorder_default_image;                             // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      CheckboxBorder_selected_image;                            // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      CheckboxCheck_image;                                      // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_135;                                                // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_TextButton_C*                        TextButton;                                               // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TextNormal;                                               // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnChecked_true;                                           // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FText                                       Text;                                                     // 0x02B0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	bool                                               IsClickable;                                              // 0x02C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnChecked_false;                                          // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnClickedText;                                            // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               ShouldAutoWrapText;                                       // 0x02F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x02F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               bMustReadPopupBeforeAccepting;                            // 0x02F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnClickedPopupRequirement;                                // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C"));
		return ptr;
	}


	void Reset();
	void BndEvt__TBP_UI_CheckboxWithClickabelText_Checkbox_button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TBP_UI_CheckboxWithClickabelText_Checkbox_button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TBP_UI_CheckboxWithClickabelText_Checkbox_button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TBP_UI_CheckboxWithClickabelText_TextButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void Construct();
	void SetChecked(bool bInChecked);
	void SetClickable(bool InClickable);
	void SetText(const struct FText& InText);
	void ExecuteUbergraph_TBP_UI_CheckboxWithClickabelText(int EntryPoint);
	void OnClickedPopupRequirement__DelegateSignature();
	void OnClickedText__DelegateSignature();
	void OnChecked_false__DelegateSignature();
	void OnChecked_true__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
