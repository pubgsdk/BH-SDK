// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SystemBrightness_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.On Value Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemBrightness_C::On_Value_Changed(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.On Value Changed"));

	struct
	{
		float                          BoxValue;
		float                          SliderValue;
	} params = {};

	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.OnMenuBack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemBrightness_C::OnMenuBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.OnMenuBack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemBrightness_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_SystemBrightness_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemBrightness_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.BndEvt__TBP_UI_Button_ClosePopup_K2Node_ComponentBoundEvent_4_On Pressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemBrightness_C::BndEvt__TBP_UI_Button_ClosePopup_K2Node_ComponentBoundEvent_4_On_Pressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.BndEvt__TBP_UI_Button_ClosePopup_K2Node_ComponentBoundEvent_4_On Pressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.OnMenuOpen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemBrightness_C::OnMenuOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.OnMenuOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.ExecuteUbergraph_TBP_UI_SystemBrightness
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemBrightness_C::ExecuteUbergraph_TBP_UI_SystemBrightness(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.ExecuteUbergraph_TBP_UI_SystemBrightness"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemBrightness_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
