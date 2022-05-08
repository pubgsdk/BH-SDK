// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ControllerDisconnected_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ControllerDisconnected.TBP_UI_ControllerDisconnected_C.SequenceEvent__ENTRYPOINTTBP_UI_ControllerDisconnected_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ControllerDisconnected_C::SequenceEvent__ENTRYPOINTTBP_UI_ControllerDisconnected_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ControllerDisconnected.TBP_UI_ControllerDisconnected_C.SequenceEvent__ENTRYPOINTTBP_UI_ControllerDisconnected_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ControllerDisconnected.TBP_UI_ControllerDisconnected_C.OnMouseButtonDown_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_ControllerDisconnected_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ControllerDisconnected.TBP_UI_ControllerDisconnected_C.OnMouseButtonDown_1"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_ControllerDisconnected.TBP_UI_ControllerDisconnected_C.ClosePopup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ControllerDisconnected_C::ClosePopup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ControllerDisconnected.TBP_UI_ControllerDisconnected_C.ClosePopup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ControllerDisconnected.TBP_UI_ControllerDisconnected_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ControllerDisconnected_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ControllerDisconnected.TBP_UI_ControllerDisconnected_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ControllerDisconnected.TBP_UI_ControllerDisconnected_C.Controller Connected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ControllerDisconnected_C::Controller_Connected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ControllerDisconnected.TBP_UI_ControllerDisconnected_C.Controller Connected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ControllerDisconnected.TBP_UI_ControllerDisconnected_C.ReopenPopup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ControllerDisconnected_C::ReopenPopup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ControllerDisconnected.TBP_UI_ControllerDisconnected_C.ReopenPopup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ControllerDisconnected.TBP_UI_ControllerDisconnected_C.ExecuteUbergraph_TBP_UI_ControllerDisconnected
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ControllerDisconnected_C::ExecuteUbergraph_TBP_UI_ControllerDisconnected(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ControllerDisconnected.TBP_UI_ControllerDisconnected_C.ExecuteUbergraph_TBP_UI_ControllerDisconnected"));

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
