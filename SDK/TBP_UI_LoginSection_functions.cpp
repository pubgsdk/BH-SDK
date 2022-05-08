// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_LoginSection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.CheckIfSignInReady
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginSection_C::CheckIfSignInReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.CheckIfSignInReady"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.Verify
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Error                          (CPF_Parm, CPF_OutParm)

void UTBP_UI_LoginSection_C::Verify(struct FText* Error)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.Verify"));

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


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.GetEnteredEmailAndPassword
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Email                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Password                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginSection_C::GetEnteredEmailAndPassword(struct FString* Email, struct FString* Password)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.GetEnteredEmailAndPassword"));

	struct
	{
		struct FString                 Email;
		struct FString                 Password;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Email != nullptr)
		*Email = params.Email;
	if (Password != nullptr)
		*Password = params.Password;
}


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__Button_CTA_SignIn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginSection_C::BndEvt__Button_CTA_SignIn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__Button_CTA_SignIn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__TBP_UI_TextButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginSection_C::BndEvt__TBP_UI_TextButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__TBP_UI_TextButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginSection_C::BndEvt__TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__EmailTextBox_K2Node_ComponentBoundEvent_0_On Text Settled__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_LoginSection_C::BndEvt__EmailTextBox_K2Node_ComponentBoundEvent_0_On_Text_Settled__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__EmailTextBox_K2Node_ComponentBoundEvent_0_On Text Settled__DelegateSignature"));

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


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_4_On Text Settled__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_LoginSection_C::BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_4_On_Text_Settled__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_4_On Text Settled__DelegateSignature"));

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


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__TBP_UI_TextButton_LostPassword_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginSection_C::BndEvt__TBP_UI_TextButton_LostPassword_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__TBP_UI_TextButton_LostPassword_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__EmailTextBox_K2Node_ComponentBoundEvent_6_On Text Changed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginSection_C::BndEvt__EmailTextBox_K2Node_ComponentBoundEvent_6_On_Text_Changed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__EmailTextBox_K2Node_ComponentBoundEvent_6_On Text Changed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_7_On Text Changed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginSection_C::BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_7_On_Text_Changed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_7_On Text Changed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__TBP_UI_LoginSection_CloseButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginSection_C::BndEvt__TBP_UI_LoginSection_CloseButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__TBP_UI_LoginSection_CloseButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__TBP_UI_LoginSection_AgreeButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginSection_C::BndEvt__TBP_UI_LoginSection_AgreeButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__TBP_UI_LoginSection_AgreeButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.ExecuteUbergraph_TBP_UI_LoginSection
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginSection_C::ExecuteUbergraph_TBP_UI_LoginSection(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.ExecuteUbergraph_TBP_UI_LoginSection"));

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


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.RecoverPassword__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginSection_C::RecoverPassword__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.RecoverPassword__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.ExitGame__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginSection_C::ExitGame__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.ExitGame__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.SignIn__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginSection_C::SignIn__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.SignIn__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.CreateAccount__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginSection_C::CreateAccount__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.CreateAccount__DelegateSignature"));

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
