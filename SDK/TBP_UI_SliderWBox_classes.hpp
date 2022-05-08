#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SliderWBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_SliderWBox.TBP_UI_SliderWBox_C
// 0x0066 (0x02E6 - 0x0280)
class UTBP_UI_SliderWBox_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UEditableTextBox*                            Box;                                                      // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     LeftButton;                                               // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     RightButton;                                              // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USlider*                                     Slider;                                                   // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      SliderBG;                                                 // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnValueChanged;                                           // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FLinearColor                                BG_Color_Override;                                        // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SliderValue;                                              // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BoxValue;                                                 // 0x02D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxValue;                                                 // 0x02D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MinValue;                                                 // 0x02DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              IncrementAmount;                                          // 0x02E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AllowDecimals;                                            // 0x02E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ShouldIncrementSliderValue;                               // 0x02E5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_SliderWBox.TBP_UI_SliderWBox_C"));
		return ptr;
	}


	void CalculateBoxDecrementAmount(float* OutBoxDecrementAmount);
	void CalculateBoxIncrementAmount(float* OutBoxIncrementAmount);
	void GetSliderValue(float* OutSliderValue);
	void GetBoxValue(float* OutBoxValue);
	void SetIncrementAmount(float InIncrementAmount, bool InShouldIncrementSliderValue);
	void UpdateValuesOnWidgets();
	void InitializeValues(float SliderValue, float MinValue, float MaxValue, bool AllowDecimals);
	void SetMaxValue(float InMaxValue);
	void SetMinValue(float MinValue);
	void SetSliderValue(float InValue);
	void Set_Box_Value(float InValue, bool InSkipValueChangedDelegate);
	void BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__Box_K2Node_ComponentBoundEvent_97_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void BndEvt__Slider_K2Node_ComponentBoundEvent_82_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__TBP_UI_SliderWBox_RightButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TBP_UI_SliderWBox_LeftButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_TBP_UI_SliderWBox(int EntryPoint);
	void OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
