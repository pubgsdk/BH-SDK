#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_AdvancedTextBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C
// 0x006C (0x02CC - 0x0260)
class UTBP_UI_AdvancedTextBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            MoveHint;                                                 // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   HintText;                                                 // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image;                                                    // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_TextBoxWrapper_C*                    WrappedTextBox;                                           // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       Hint_Text;                                                // 0x0288(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               Is_Password;                                              // 0x02A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    On_Text_Settled;                                          // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    On_Text_Changed;                                          // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	int                                                CharCap;                                                  // 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C"));
		return ptr;
	}


	void Reset();
	struct FText GetText();
	void SetError(bool Error, const struct FText& Message);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_0_Focus_Received__DelegateSignature();
	void BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_1_Focus_Lost__DelegateSignature();
	void BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_2_Text_Settled__DelegateSignature();
	void BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_3_Text_Changed__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_AdvancedTextBox(int EntryPoint);
	void On_Text_Changed__DelegateSignature();
	void On_Text_Settled__DelegateSignature(const struct FText& Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
