// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_AdvancedTextBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.Reset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_AdvancedTextBox_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.GetText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTBP_UI_AdvancedTextBox_C::GetText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.GetText"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.SetError
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Error                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_AdvancedTextBox_C::SetError(bool Error, const struct FText& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.SetError"));

	struct
	{
		bool                           Error;
		struct FText                   Message;
	} params = {};

	params.Error = Error;
	params.Message = Message;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_AdvancedTextBox_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_0_Focus Received__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_AdvancedTextBox_C::BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_0_Focus_Received__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_0_Focus Received__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_1_Focus Lost__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_AdvancedTextBox_C::BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_1_Focus_Lost__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_1_Focus Lost__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_2_Text Settled__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_AdvancedTextBox_C::BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_2_Text_Settled__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_2_Text Settled__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_3_Text Changed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_AdvancedTextBox_C::BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_3_Text_Changed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_3_Text Changed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.ExecuteUbergraph_TBP_UI_AdvancedTextBox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_AdvancedTextBox_C::ExecuteUbergraph_TBP_UI_AdvancedTextBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.ExecuteUbergraph_TBP_UI_AdvancedTextBox"));

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


// Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.On Text Changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_AdvancedTextBox_C::On_Text_Changed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.On Text Changed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.On Text Settled__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_AdvancedTextBox_C::On_Text_Settled__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.On Text Settled__DelegateSignature"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
