// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_EnteringNewAreaPrompt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_EnteringNewAreaPrompt.TBP_UI_EnteringNewAreaPrompt_C.SetSubText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_EnteringNewAreaPrompt_C::SetSubText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnteringNewAreaPrompt.TBP_UI_EnteringNewAreaPrompt_C.SetSubText"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnteringNewAreaPrompt.TBP_UI_EnteringNewAreaPrompt_C.SetMainText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_EnteringNewAreaPrompt_C::SetMainText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnteringNewAreaPrompt.TBP_UI_EnteringNewAreaPrompt_C.SetMainText"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnteringNewAreaPrompt.TBP_UI_EnteringNewAreaPrompt_C.OnShowPrompt
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_EnteringNewAreaPrompt_C::OnShowPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnteringNewAreaPrompt.TBP_UI_EnteringNewAreaPrompt_C.OnShowPrompt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnteringNewAreaPrompt.TBP_UI_EnteringNewAreaPrompt_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_EnteringNewAreaPrompt_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnteringNewAreaPrompt.TBP_UI_EnteringNewAreaPrompt_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnteringNewAreaPrompt.TBP_UI_EnteringNewAreaPrompt_C.OnHidePrompt
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_EnteringNewAreaPrompt_C::OnHidePrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnteringNewAreaPrompt.TBP_UI_EnteringNewAreaPrompt_C.OnHidePrompt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnteringNewAreaPrompt.TBP_UI_EnteringNewAreaPrompt_C.WidgetAnimationEvt_MainAnimation_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_EnteringNewAreaPrompt_C::WidgetAnimationEvt_MainAnimation_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnteringNewAreaPrompt.TBP_UI_EnteringNewAreaPrompt_C.WidgetAnimationEvt_MainAnimation_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnteringNewAreaPrompt.TBP_UI_EnteringNewAreaPrompt_C.ExecuteUbergraph_TBP_UI_EnteringNewAreaPrompt
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_EnteringNewAreaPrompt_C::ExecuteUbergraph_TBP_UI_EnteringNewAreaPrompt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnteringNewAreaPrompt.TBP_UI_EnteringNewAreaPrompt_C.ExecuteUbergraph_TBP_UI_EnteringNewAreaPrompt"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
