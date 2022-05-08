// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_VerificationSection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.TurnOffLoadingThrobber
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_VerificationSection_C::TurnOffLoadingThrobber()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.TurnOffLoadingThrobber"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.Reset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_VerificationSection_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.Verify
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Error                          (CPF_Parm, CPF_OutParm)

void UTBP_UI_VerificationSection_C::Verify(struct FText* Error)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.Verify"));

	struct
	{
		struct FText                   Error;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Error != nullptr)
		*Error = params.Error;
}


// Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.GetEnteredVerificationCode
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString UTBP_UI_VerificationSection_C::GetEnteredVerificationCode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.GetEnteredVerificationCode"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.SetDisplayedEmail
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Email                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VerificationSection_C::SetDisplayedEmail(const struct FString& Email)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.SetDisplayedEmail"));

	struct
	{
		struct FString                 Email;
	} params = {};

	params.Email = Email;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_VerificationSection_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__Button_CTA_RegisterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_VerificationSection_C::BndEvt__Button_CTA_RegisterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__Button_CTA_RegisterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__TBP_UI_TextButton_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_VerificationSection_C::BndEvt__TBP_UI_TextButton_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__TBP_UI_TextButton_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__VerificationCodeBox_K2Node_ComponentBoundEvent_0_On Text Settled__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_VerificationSection_C::BndEvt__VerificationCodeBox_K2Node_ComponentBoundEvent_0_On_Text_Settled__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__VerificationCodeBox_K2Node_ComponentBoundEvent_0_On Text Settled__DelegateSignature"));

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


// Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__TBP_UI_VerificationSection_VerificationCodeBox_K2Node_ComponentBoundEvent_3_On Text Changed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_VerificationSection_C::BndEvt__TBP_UI_VerificationSection_VerificationCodeBox_K2Node_ComponentBoundEvent_3_On_Text_Changed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__TBP_UI_VerificationSection_VerificationCodeBox_K2Node_ComponentBoundEvent_3_On Text Changed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__TBP_UI_VerificationSection_TBP_UI_TextButton_NoEmail_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_VerificationSection_C::BndEvt__TBP_UI_VerificationSection_TBP_UI_TextButton_NoEmail_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__TBP_UI_VerificationSection_TBP_UI_TextButton_NoEmail_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__TBP_UI_VerificationSection_AgreeButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_VerificationSection_C::BndEvt__TBP_UI_VerificationSection_AgreeButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__TBP_UI_VerificationSection_AgreeButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__TBP_UI_VerificationSection_CloseButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_VerificationSection_C::BndEvt__TBP_UI_VerificationSection_CloseButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__TBP_UI_VerificationSection_CloseButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.ExecuteUbergraph_TBP_UI_VerificationSection
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VerificationSection_C::ExecuteUbergraph_TBP_UI_VerificationSection(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.ExecuteUbergraph_TBP_UI_VerificationSection"));

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


// Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BackAction__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_VerificationSection_C::BackAction__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BackAction__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.RegisterAction__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_VerificationSection_C::RegisterAction__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.RegisterAction__DelegateSignature"));

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
