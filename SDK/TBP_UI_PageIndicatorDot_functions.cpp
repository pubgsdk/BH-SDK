// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PageIndicatorDot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.UpdateSelectedState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsCurrentPage                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PageIndicatorDot_C::UpdateSelectedState(bool bIsCurrentPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.UpdateSelectedState"));

	struct
	{
		bool                           bIsCurrentPage;
	} params = {};

	params.bIsCurrentPage = bIsCurrentPage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_PageIndicatorDot_C::BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.ExecuteUbergraph_TBP_UI_PageIndicatorDot
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PageIndicatorDot_C::ExecuteUbergraph_TBP_UI_PageIndicatorDot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.ExecuteUbergraph_TBP_UI_PageIndicatorDot"));

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


// Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.OnPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PageIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PageIndicatorDot_C::OnPressed__DelegateSignature(int PageIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.OnPressed__DelegateSignature"));

	struct
	{
		int                            PageIndex;
	} params = {};

	params.PageIndex = PageIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
