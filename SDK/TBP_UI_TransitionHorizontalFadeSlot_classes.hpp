#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TransitionHorizontalFadeSlot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C
// 0x002C (0x028C - 0x0260)
class UTBP_UI_TransitionHorizontalFadeSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            InAnimation;                                              // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_HorizontalFadeSlot_C*                HorizontalFadeSlot;                                       // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_TransitionWidget_C*                  TransitionWidget;                                         // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	float                                              AnimationDelay;                                           // 0x0280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	float                                              LeftFadeWidth;                                            // 0x0284(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	float                                              RightFadeWidth;                                           // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C"));
		return ptr;
	}


	void SetFadeWidth(float InLeftFadeWidth, float InRightFadeWidth);
	void SetAnimationDelay(float InAnimationDelay, bool bTriggerIntroAnimation);
	void SetColor(const struct FLinearColor& InColor);
	void OnInitialized();
	void Construct();
	void TriggerInAnimation();
	void PreConstruct(bool IsDesignTime);
	void OnTransitionStarted();
	void ExecuteUbergraph_TBP_UI_TransitionHorizontalFadeSlot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
