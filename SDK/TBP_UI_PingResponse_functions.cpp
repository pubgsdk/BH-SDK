// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PingResponse_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PingResponse.TBP_UI_PingResponse_C.AnimateIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PingResponse_C::AnimateIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingResponse.TBP_UI_PingResponse_C.AnimateIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingResponse.TBP_UI_PingResponse_C.AnimateOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PingResponse_C::AnimateOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingResponse.TBP_UI_PingResponse_C.AnimateOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingResponse.TBP_UI_PingResponse_C.WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_PingResponse_C::WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingResponse.TBP_UI_PingResponse_C.WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingResponse.TBP_UI_PingResponse_C.ExecuteUbergraph_TBP_UI_PingResponse
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingResponse_C::ExecuteUbergraph_TBP_UI_PingResponse(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingResponse.TBP_UI_PingResponse_C.ExecuteUbergraph_TBP_UI_PingResponse"));

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


// Function TBP_UI_PingResponse.TBP_UI_PingResponse_C.OnAnimationDone__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_PingResponse_C*  InWidget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInIsShown                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PingResponse_C::OnAnimationDone__DelegateSignature(class UTBP_UI_PingResponse_C* InWidget, bool bInIsShown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingResponse.TBP_UI_PingResponse_C.OnAnimationDone__DelegateSignature"));

	struct
	{
		class UTBP_UI_PingResponse_C*  InWidget;
		bool                           bInIsShown;
	} params = {};

	params.InWidget = InWidget;
	params.bInIsShown = bInIsShown;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
