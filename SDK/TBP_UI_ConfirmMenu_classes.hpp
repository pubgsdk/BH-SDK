#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ConfirmMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C
// 0x00C5 (0x0345 - 0x0280)
class UTBP_UI_ConfirmMenu_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTBP_UI_InputMenuPrompt_C*                   ConfirmWidget;                                            // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   DeclineWidget;                                            // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   InnerCountdownWidget;                                     // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   InnerTitleWidget;                                         // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Popup_Base_C*                        TBP_UI_Popup_Base;                                        // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    Confirm;                                                  // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    Decline;                                                  // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FText                                       AcceptText;                                               // 0x02D0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FText                                       DeclineText;                                              // 0x02E8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	class UAkAudioEvent*                               ConfirmAudioEvent;                                        // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               DeclineAudioEvent;                                        // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       QuestionText;                                             // 0x0310(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	bool                                               bFadeOut;                                                 // 0x0328(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    CountdownFinished;                                        // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	int                                                CountdownTime;                                            // 0x0340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ContinueCountdown;                                        // 0x0344(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C"));
		return ptr;
	}


	void SetTitleText(const struct FText& TitleText);
	void Hide(bool TryFadeOut);
	void Show();
	void PreConstruct(bool IsDesignTime);
	void Yes();
	void No();
	void BndEvt__ConfirmWidget_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature();
	void BndEvt__DeclineWidget_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature();
	void Construct();
	void OnInitialized();
	void InitCountdown(int InSeconds);
	void StopCountdown();
	void BndEvt__TBP_UI_ConfirmMenu_DeclineWidget_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_ConfirmMenu_ConfirmWidget_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_ConfirmMenu(int EntryPoint);
	void CountdownFinished__DelegateSignature();
	void Decline__DelegateSignature();
	void Confirm__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
