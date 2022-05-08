#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TextBoxWrapper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_TextBoxWrapper.TBP_UI_TextBoxWrapper_C
// 0x1060 (0x12C0 - 0x0260)
class UTBP_UI_TextBoxWrapper_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UEditableTextBox*                            EmailTextBox;                                             // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    Focus_Lost;                                               // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    Focus_Received;                                           // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               PreviousFocus;                                            // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    Text_Settled;                                             // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FTimerHandle                                Text_Settle_Timer_Handle;                                 // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Text_Settle_Time;                                         // 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	struct FEditableTextBoxStyle                       Default_Style;                                            // 0x02B8(0x07F8) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FEditableTextBoxStyle                       Error_Style;                                              // 0x0AB0(0x07F8) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UEditableTextBox*                            NewVar_1;                                                 // 0x12A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    Text_Changed;                                             // 0x12B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_TextBoxWrapper.TBP_UI_TextBoxWrapper_C"));
		return ptr;
	}


	void SetErrorBorder(bool Enabled);
	struct FText GetText();
	void SetIsPassword(bool bIsPassword);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__EmailTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void TextChangeExpire();
	void Construct();
	void ExecuteUbergraph_TBP_UI_TextBoxWrapper(int EntryPoint);
	void Text_Changed__DelegateSignature();
	void Text_Settled__DelegateSignature();
	void Focus_Received__DelegateSignature();
	void Focus_Lost__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
