#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Tutorial_Objective_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Tutorial_Objective.TBP_UI_Tutorial_Objective_C
// 0x00F8 (0x0378 - 0x0280)
class UTBP_UI_Tutorial_Objective_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            Objective_FadeIn;                                         // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            Objective_Completed;                                      // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            Objective_FadeOut;                                        // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            CompleteObjectiveAnimation;                               // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            IntroAnimation;                                           // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      BG_CompletionFlash;                                       // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCheckBox*                                   CheckBox_1;                                               // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerRichTextBlock*                         Objective_Text;                                           // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputFormattedRichText_C*            TBP_UI_InputFormattedRichText;                            // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnCheckStateChanged;                                      // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FText                                       ObjectiveText;                                            // 0x02E0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FMulticastScriptDelegate                    OnCompleteObjectiveFinished;                              // 0x02F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	float                                              TimeToShowCompletedObjective;                             // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       ObjectiveIdentifier;                                      // 0x030C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FName                                       Action_to_Embed;                                          // 0x0314(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FName                                       GamepadOverride_Action_to_Embed;                          // 0x031C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               Has_Additional_Keyboard_Input;                            // 0x0324(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0325(0x0003) MISSED OFFSET
	struct FKey                                        Additional_Keyboard_Input;                                // 0x0328(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               Has_Additional_Gamepad_Input;                             // 0x0340(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	struct FKey                                        Additional_Gamepad_Input;                                 // 0x0348(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               Override_Image;                                           // 0x0360(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	struct FName                                       ImageToOverride;                                          // 0x0364(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               Persistant_Objective;                                     // 0x036C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData03[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	struct FName                                       GamepadImageToOverride;                                   // 0x0370(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Tutorial_Objective.TBP_UI_Tutorial_Objective_C"));
		return ptr;
	}


	void GenerateText();
	void PlayIntroAudio();
	void CallbackFinishedObjective();
	void MarkObjectiveAsComplete();
	void PlayIntroAnimation();
	struct FText GetText();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void WidgetAnimationEvt_Objective_Completed_K2Node_WidgetAnimationEvent_1();
	void ExecuteUbergraph_TBP_UI_Tutorial_Objective(int EntryPoint);
	void OnCompleteObjectiveFinished__DelegateSignature(class UTBP_UI_Tutorial_Objective_C* CompletedObjective, const struct FName& ObjectiveIdentifier);
	void OnCheckStateChanged__DelegateSignature(bool bIsChecked);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
