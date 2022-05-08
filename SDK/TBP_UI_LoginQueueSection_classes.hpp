#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_LoginQueueSection_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C
// 0x0064 (0x02C4 - 0x0260)
class UTBP_UI_LoginQueueSection_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTBP_UI_Button_CTA_C*                        Button_CTA_Retry;                                         // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   EstimatedWaitTimeValue;                                   // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_TextButton_C*                        TBP_UI_TextButton_ExitGame;                               // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TigerStyledRichTextBlock_91;                              // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                WaitingPanel;                                             // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    ExitGame;                                                 // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	float                                              EstimatedWaitTimeSeconds;                                 // 0x02A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	struct FTimerHandle                                UpdateWaitTimeTimerHandle;                                // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    Retry;                                                    // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	float                                              EstimatedWaitTimeSetAtRealTimeSeconds;                    // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C"));
		return ptr;
	}


	void Set_Estimated_Wait_Time(struct FTimespan* InEstimatedWaitTime);
	void ShowErrorPanel();
	void UpdateWaitTime();
	void Close();
	void Open();
	void OnEstimatedWaitTimeUpdated(const struct FTimespan& InEstimatedWaitTime);
	void BndEvt__TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__Button_CTA_SignIn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_LoginQueueSection(int EntryPoint);
	void Retry__DelegateSignature();
	void ExitGame__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
