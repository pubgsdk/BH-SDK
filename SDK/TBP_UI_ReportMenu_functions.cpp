// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ReportMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.ShowReportErrorMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ReportMenu_C::ShowReportErrorMessage(const struct FText& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.ShowReportErrorMessage"));

	struct
	{
		struct FText                   Message;
	} params = {};

	params.Message = Message;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.TryReportSelectedPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReportMenu_C::TryReportSelectedPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.TryReportSelectedPlayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.GetReportReasonString
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerReportReason             Reason                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   NewParam                       (CPF_Parm, CPF_OutParm)

void UTBP_UI_ReportMenu_C::GetReportReasonString(ETigerReportReason Reason, struct FText* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.GetReportReasonString"));

	struct
	{
		ETigerReportReason             Reason;
		struct FText                   NewParam;
	} params = {};

	params.Reason = Reason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.CreateReportButtons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReportMenu_C::CreateReportButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.CreateReportButtons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.ResetInputBindings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReportMenu_C::ResetInputBindings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.ResetInputBindings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.SetupInputBindings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReportMenu_C::SetupInputBindings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.SetupInputBindings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.BndEvt__TBP_UI_TeamMenu_ClosePrompt_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReportMenu_C::BndEvt__TBP_UI_TeamMenu_ClosePrompt_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.BndEvt__TBP_UI_TeamMenu_ClosePrompt_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.BndEvt__TBP_UI_ReportMenu_Send_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReportMenu_C::BndEvt__TBP_UI_ReportMenu_Send_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.BndEvt__TBP_UI_ReportMenu_Send_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.BndEvt__TBP_UI_ReportMenu_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReportMenu_C::BndEvt__TBP_UI_ReportMenu_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.BndEvt__TBP_UI_ReportMenu_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.BndEvt__TBP_UI_ReportMenu_ExitPrompt_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReportMenu_C::BndEvt__TBP_UI_ReportMenu_ExitPrompt_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.BndEvt__TBP_UI_ReportMenu_ExitPrompt_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.HideError
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReportMenu_C::HideError()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.HideError"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.EscapePressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReportMenu_C::EscapePressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.EscapePressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_ReportMenu_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ReportMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_ReportMenu_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.ExecuteUbergraph_TBP_UI_ReportMenu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ReportMenu_C::ExecuteUbergraph_TBP_UI_ReportMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.ExecuteUbergraph_TBP_UI_ReportMenu"));

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


// Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.OnExitPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReportMenu_C::OnExitPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReportMenu.TBP_UI_ReportMenu_C.OnExitPressed__DelegateSignature"));

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
