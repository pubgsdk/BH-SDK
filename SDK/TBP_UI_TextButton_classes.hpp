#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TextButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_TextButton.TBP_UI_TextButton_C
// 0x0095 (0x02F5 - 0x0260)
class UTBP_UI_TextButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            PressedAnimation;                                         // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UButton*                                     Button;                                                   // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   CustomText;                                               // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnClicked;                                                // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnHovered;                                                // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnUnhovered;                                              // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FText                                       Text;                                                     // 0x02B0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FDataTableRowHandle                         TextNeutralStyle;                                         // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_ExposeOnSpawn)
	struct FDataTableRowHandle                         TextHoveredStyle;                                         // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               IsPressed;                                                // 0x02E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	float                                              TextNeutralOpacity;                                       // 0x02EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	float                                              TextHoveredOpacity;                                       // 0x02F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               bIsHovered;                                               // 0x02F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_TextButton.TBP_UI_TextButton_C"));
		return ptr;
	}


	void SetHoveredState();
	void SetNeutralState();
	void SetText(const struct FText& Text);
	void Construct();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void AutoWrapText(bool InAutoTextWrap);
	void WrapTextAt(float InWrapTextAt);
	void ExecuteUbergraph_TBP_UI_TextButton(int EntryPoint);
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
