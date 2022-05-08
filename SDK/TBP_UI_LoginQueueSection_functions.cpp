// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_LoginQueueSection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.Set Estimated Wait Time
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTimespan               InEstimatedWaitTime            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginQueueSection_C::Set_Estimated_Wait_Time(struct FTimespan* InEstimatedWaitTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.Set Estimated Wait Time"));

	struct
	{
		struct FTimespan               InEstimatedWaitTime;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InEstimatedWaitTime != nullptr)
		*InEstimatedWaitTime = params.InEstimatedWaitTime;
}


// Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.ShowErrorPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginQueueSection_C::ShowErrorPanel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.ShowErrorPanel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.UpdateWaitTime
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginQueueSection_C::UpdateWaitTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.UpdateWaitTime"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.Close
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginQueueSection_C::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.Close"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.Open
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginQueueSection_C::Open()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.Open"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.OnEstimatedWaitTimeUpdated
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTimespan               InEstimatedWaitTime            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginQueueSection_C::OnEstimatedWaitTimeUpdated(const struct FTimespan& InEstimatedWaitTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.OnEstimatedWaitTimeUpdated"));

	struct
	{
		struct FTimespan               InEstimatedWaitTime;
	} params = {};

	params.InEstimatedWaitTime = InEstimatedWaitTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.BndEvt__TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginQueueSection_C::BndEvt__TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.BndEvt__TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.BndEvt__Button_CTA_SignIn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginQueueSection_C::BndEvt__Button_CTA_SignIn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.BndEvt__Button_CTA_SignIn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.ExecuteUbergraph_TBP_UI_LoginQueueSection
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginQueueSection_C::ExecuteUbergraph_TBP_UI_LoginQueueSection(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.ExecuteUbergraph_TBP_UI_LoginQueueSection"));

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


// Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.Retry__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginQueueSection_C::Retry__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.Retry__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.ExitGame__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginQueueSection_C::ExitGame__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.ExitGame__DelegateSignature"));

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
