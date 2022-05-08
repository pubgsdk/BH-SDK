// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_LoginScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ConvertOSSValueToEShAccountChannelID
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InOSSValue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// EShAccountChannel              OutAccountChannelID            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::ConvertOSSValueToEShAccountChannelID(const struct FString& InOSSValue, EShAccountChannel* OutAccountChannelID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ConvertOSSValueToEShAccountChannelID"));

	struct
	{
		struct FString                 InOSSValue;
		EShAccountChannel              OutAccountChannelID;
	} params = {};

	params.InOSSValue = InOSSValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutAccountChannelID != nullptr)
		*OutAccountChannelID = params.OutAccountChannelID;
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.DisplayAccountError
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ErrorString                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ENUM_ErrorMessageDisplay> UI_Target                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::DisplayAccountError(const struct FString& ErrorString, TEnumAsByte<ENUM_ErrorMessageDisplay> UI_Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.DisplayAccountError"));

	struct
	{
		struct FString                 ErrorString;
		TEnumAsByte<ENUM_ErrorMessageDisplay> UI_Target;
	} params = {};

	params.ErrorString = ErrorString;
	params.UI_Target = UI_Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.GetReacceptLegalDocumentTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerLegalDocumentType        InDocumentType                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   OutText                        (CPF_Parm, CPF_OutParm)

void UTBP_UI_LoginScreen_C::GetReacceptLegalDocumentTitle(ETigerLegalDocumentType InDocumentType, struct FText* OutText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.GetReacceptLegalDocumentTitle"));

	struct
	{
		ETigerLegalDocumentType        InDocumentType;
		struct FText                   OutText;
	} params = {};

	params.InDocumentType = InDocumentType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.EvaluateBanReason
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  InBanReason                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 InBanDisplayString             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 OutBanDisplayString            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::EvaluateBanReason(unsigned char InBanReason, const struct FString& InBanDisplayString, struct FString* OutBanDisplayString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.EvaluateBanReason"));

	struct
	{
		unsigned char                  InBanReason;
		struct FString                 InBanDisplayString;
		struct FString                 OutBanDisplayString;
	} params = {};

	params.InBanReason = InBanReason;
	params.InBanDisplayString = InBanDisplayString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutBanDisplayString != nullptr)
		*OutBanDisplayString = params.OutBanDisplayString;
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ConvertBanEndsDisplayString
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InBanEndsAt                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  InBanReason                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 OutBanEndDisplayString         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::ConvertBanEndsDisplayString(const struct FString& InBanEndsAt, unsigned char InBanReason, struct FString* OutBanEndDisplayString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ConvertBanEndsDisplayString"));

	struct
	{
		struct FString                 InBanEndsAt;
		unsigned char                  InBanReason;
		struct FString                 OutBanEndDisplayString;
	} params = {};

	params.InBanEndsAt = InBanEndsAt;
	params.InBanReason = InBanReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutBanEndDisplayString != nullptr)
		*OutBanEndDisplayString = params.OutBanEndDisplayString;
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowExportGateWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::ShowExportGateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowExportGateWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShouldUseDevTicket
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseDevTicket                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_LoginScreen_C::ShouldUseDevTicket(bool* UseDevTicket)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShouldUseDevTicket"));

	struct
	{
		bool                           UseDevTicket;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (UseDevTicket != nullptr)
		*UseDevTicket = params.UseDevTicket;
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.Try Login with Login Queue Token
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerLoginQueueToken   InLoginQueueToken              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_LoginScreen_C::Try_Login_with_Login_Queue_Token(struct FTigerLoginQueueToken* InLoginQueueToken)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.Try Login with Login Queue Token"));

	struct
	{
		struct FTigerLoginQueueToken   InLoginQueueToken;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InLoginQueueToken != nullptr)
		*InLoginQueueToken = params.InLoginQueueToken;
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ClearError
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::ClearError()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ClearError"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.TryShowError
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DelayMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   Error                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           No_Error                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_LoginScreen_C::TryShowError(bool DelayMessage, const struct FText& Error, bool* No_Error)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.TryShowError"));

	struct
	{
		bool                           DelayMessage;
		struct FText                   Error;
		bool                           No_Error;
	} params = {};

	params.DelayMessage = DelayMessage;
	params.Error = Error;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (No_Error != nullptr)
		*No_Error = params.No_Error;
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.EndWork
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Success                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   Error                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_LoginScreen_C::EndWork(bool Success, const struct FText& Error)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.EndWork"));

	struct
	{
		bool                           Success;
		struct FText                   Error;
	} params = {};

	params.Success = Success;
	params.Error = Error;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.StartWork
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::StartWork()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.StartWork"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowRegistrationScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::ShowRegistrationScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowRegistrationScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowLogInScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::ShowLogInScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowLogInScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowVerificationScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Email                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::ShowVerificationScreen(const struct FString& Email)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowVerificationScreen"));

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


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.LogMeIn
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::LogMeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.LogMeIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.SetWidgetsEnabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_LoginScreen_C::SetWidgetsEnabled(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.SetWidgetsEnabled"));

	struct
	{
		bool                           Enabled;
	} params = {};

	params.Enabled = Enabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.Error_25AA6E00485B8955EDA2B58041008BAC
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerLoginQueueToken   LoginToken                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FTimespan               EstimatedWaitTime              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ErrorMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::Error_25AA6E00485B8955EDA2B58041008BAC(const struct FTigerLoginQueueToken& LoginToken, const struct FTimespan& EstimatedWaitTime, const struct FString& ErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.Error_25AA6E00485B8955EDA2B58041008BAC"));

	struct
	{
		struct FTigerLoginQueueToken   LoginToken;
		struct FTimespan               EstimatedWaitTime;
		struct FString                 ErrorMessage;
	} params = {};

	params.LoginToken = LoginToken;
	params.EstimatedWaitTime = EstimatedWaitTime;
	params.ErrorMessage = ErrorMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.WaitTimeUpdated_25AA6E00485B8955EDA2B58041008BAC
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerLoginQueueToken   LoginToken                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FTimespan               EstimatedWaitTime              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ErrorMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::WaitTimeUpdated_25AA6E00485B8955EDA2B58041008BAC(const struct FTigerLoginQueueToken& LoginToken, const struct FTimespan& EstimatedWaitTime, const struct FString& ErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.WaitTimeUpdated_25AA6E00485B8955EDA2B58041008BAC"));

	struct
	{
		struct FTigerLoginQueueToken   LoginToken;
		struct FTimespan               EstimatedWaitTime;
		struct FString                 ErrorMessage;
	} params = {};

	params.LoginToken = LoginToken;
	params.EstimatedWaitTime = EstimatedWaitTime;
	params.ErrorMessage = ErrorMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ReadyForLogin_25AA6E00485B8955EDA2B58041008BAC
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerLoginQueueToken   LoginToken                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FTimespan               EstimatedWaitTime              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ErrorMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::ReadyForLogin_25AA6E00485B8955EDA2B58041008BAC(const struct FTigerLoginQueueToken& LoginToken, const struct FTimespan& EstimatedWaitTime, const struct FString& ErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ReadyForLogin_25AA6E00485B8955EDA2B58041008BAC"));

	struct
	{
		struct FTigerLoginQueueToken   LoginToken;
		struct FTimespan               EstimatedWaitTime;
		struct FString                 ErrorMessage;
	} params = {};

	params.LoginToken = LoginToken;
	params.EstimatedWaitTime = EstimatedWaitTime;
	params.ErrorMessage = ErrorMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnFailure_0C916F24458ECAF0F5D72AB2290CFD13
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ErrorMsg                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::OnFailure_0C916F24458ECAF0F5D72AB2290CFD13(const struct FString& ErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnFailure_0C916F24458ECAF0F5D72AB2290CFD13"));

	struct
	{
		struct FString                 ErrorMsg;
	} params = {};

	params.ErrorMsg = ErrorMsg;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnSuccess_0C916F24458ECAF0F5D72AB2290CFD13
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ErrorMsg                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::OnSuccess_0C916F24458ECAF0F5D72AB2290CFD13(const struct FString& ErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnSuccess_0C916F24458ECAF0F5D72AB2290CFD13"));

	struct
	{
		struct FString                 ErrorMsg;
	} params = {};

	params.ErrorMsg = ErrorMsg;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnFailure_89F6FC8743D7E87F32AEDC880A350B4B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLoginResultSharkmob    Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FString                 ErrorString                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::OnFailure_89F6FC8743D7E87F32AEDC880A350B4B(const struct FLoginResultSharkmob& Result, const struct FString& ErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnFailure_89F6FC8743D7E87F32AEDC880A350B4B"));

	struct
	{
		struct FLoginResultSharkmob    Result;
		struct FString                 ErrorString;
	} params = {};

	params.Result = Result;
	params.ErrorString = ErrorString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnSuccess_89F6FC8743D7E87F32AEDC880A350B4B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLoginResultSharkmob    Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FString                 ErrorString                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::OnSuccess_89F6FC8743D7E87F32AEDC880A350B4B(const struct FLoginResultSharkmob& Result, const struct FString& ErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnSuccess_89F6FC8743D7E87F32AEDC880A350B4B"));

	struct
	{
		struct FLoginResultSharkmob    Result;
		struct FString                 ErrorString;
	} params = {};

	params.Result = Result;
	params.ErrorString = ErrorString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnFailure_B7F09C0446D23DC02934EAAB40943A50
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLoginResultSharkmob    Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FString                 ErrorString                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::OnFailure_B7F09C0446D23DC02934EAAB40943A50(const struct FLoginResultSharkmob& Result, const struct FString& ErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnFailure_B7F09C0446D23DC02934EAAB40943A50"));

	struct
	{
		struct FLoginResultSharkmob    Result;
		struct FString                 ErrorString;
	} params = {};

	params.Result = Result;
	params.ErrorString = ErrorString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnSuccess_B7F09C0446D23DC02934EAAB40943A50
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLoginResultSharkmob    Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FString                 ErrorString                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::OnSuccess_B7F09C0446D23DC02934EAAB40943A50(const struct FLoginResultSharkmob& Result, const struct FString& ErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnSuccess_B7F09C0446D23DC02934EAAB40943A50"));

	struct
	{
		struct FLoginResultSharkmob    Result;
		struct FString                 ErrorString;
	} params = {};

	params.Result = Result;
	params.ErrorString = ErrorString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnCharacterSelected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::OnCharacterSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnCharacterSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnCreateCharacterResult
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentCharacterID CharacterId                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bWasCharacterCreated           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_LoginScreen_C::OnCreateCharacterResult(const struct FTigerPersistentCharacterID& CharacterId, bool bWasCharacterCreated)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnCreateCharacterResult"));

	struct
	{
		struct FTigerPersistentCharacterID CharacterId;
		bool                           bWasCharacterCreated;
	} params = {};

	params.CharacterId = CharacterId;
	params.bWasCharacterCreated = bWasCharacterCreated;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnLoginFailed
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerLoginFailedInfo   InLoginFailedInfo              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_LoginScreen_C::OnLoginFailed(const struct FTigerLoginFailedInfo& InLoginFailedInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnLoginFailed"));

	struct
	{
		struct FTigerLoginFailedInfo   InLoginFailedInfo;
	} params = {};

	params.InLoginFailedInfo = InLoginFailedInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnLoginSucceeded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_LoginScreen_C::OnLoginSucceeded(TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnLoginSucceeded"));

	struct
	{
		TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters;
	} params = {};

	params.AvailableCharacters = AvailableCharacters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowErrorMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DelayMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   ErrorMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_LoginScreen_C::ShowErrorMessage(bool DelayMessage, const struct FText& ErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowErrorMessage"));

	struct
	{
		bool                           DelayMessage;
		struct FText                   ErrorMessage;
	} params = {};

	params.DelayMessage = DelayMessage;
	params.ErrorMessage = ErrorMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.CheckIfVersionIsValid
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::CheckIfVersionIsValid()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.CheckIfVersionIsValid"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnGetValidGameVersionResult
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// ETigerVersionIsValidResult     Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::OnGetValidGameVersionResult(ETigerVersionIsValidResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnGetValidGameVersionResult"));

	struct
	{
		ETigerVersionIsValidResult     Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.SharkmobAccountLoginResult
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSharkLoginResult       InResult                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_LoginScreen_C::SharkmobAccountLoginResult(const struct FSharkLoginResult& InResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.SharkmobAccountLoginResult"));

	struct
	{
		struct FSharkLoginResult       InResult;
	} params = {};

	params.InResult = InResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__RegistrationSection_K2Node_ComponentBoundEvent_2_Back__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::BndEvt__RegistrationSection_K2Node_ComponentBoundEvent_2_Back__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__RegistrationSection_K2Node_ComponentBoundEvent_2_Back__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__LoginSection_K2Node_ComponentBoundEvent_3_SignIn__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::BndEvt__LoginSection_K2Node_ComponentBoundEvent_3_SignIn__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__LoginSection_K2Node_ComponentBoundEvent_3_SignIn__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__VerificationSection_K2Node_ComponentBoundEvent_6_BackAction__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::BndEvt__VerificationSection_K2Node_ComponentBoundEvent_6_BackAction__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__VerificationSection_K2Node_ComponentBoundEvent_6_BackAction__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__VerificationSection_K2Node_ComponentBoundEvent_7_RegisterAction__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::BndEvt__VerificationSection_K2Node_ComponentBoundEvent_7_RegisterAction__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__VerificationSection_K2Node_ComponentBoundEvent_7_RegisterAction__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__RegistrationSection_K2Node_ComponentBoundEvent_5_CreateAccount__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::BndEvt__RegistrationSection_K2Node_ComponentBoundEvent_5_CreateAccount__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__RegistrationSection_K2Node_ComponentBoundEvent_5_CreateAccount__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__LoginSection_K2Node_ComponentBoundEvent_0_CreateAccount__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::BndEvt__LoginSection_K2Node_ComponentBoundEvent_0_CreateAccount__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__LoginSection_K2Node_ComponentBoundEvent_0_CreateAccount__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__GetDevTicketSection_K2Node_ComponentBoundEvent_9_SignIn__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::BndEvt__GetDevTicketSection_K2Node_ComponentBoundEvent_9_SignIn__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__GetDevTicketSection_K2Node_ComponentBoundEvent_9_SignIn__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.QueueForLogin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::QueueForLogin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.QueueForLogin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__LoginQueueSection_K2Node_ComponentBoundEvent_10_Retry__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::BndEvt__LoginQueueSection_K2Node_ComponentBoundEvent_10_Retry__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__LoginQueueSection_K2Node_ComponentBoundEvent_10_Retry__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__TBP_UI_LicenseAgreement_Popup_K2Node_ComponentBoundEvent_11_OnDecisionMade__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Agreed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_LoginScreen_C::BndEvt__TBP_UI_LicenseAgreement_Popup_K2Node_ComponentBoundEvent_11_OnDecisionMade__DelegateSignature(bool Agreed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__TBP_UI_LicenseAgreement_Popup_K2Node_ComponentBoundEvent_11_OnDecisionMade__DelegateSignature"));

	struct
	{
		bool                           Agreed;
	} params = {};

	params.Agreed = Agreed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__LoginSection_K2Node_ComponentBoundEvent_12_RecoverPassword__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::BndEvt__LoginSection_K2Node_ComponentBoundEvent_12_RecoverPassword__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__LoginSection_K2Node_ComponentBoundEvent_12_RecoverPassword__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.RegistrationServerErrorCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InError                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_LoginScreen_C::RegistrationServerErrorCallback(const struct FText& InError)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.RegistrationServerErrorCallback"));

	struct
	{
		struct FText                   InError;
	} params = {};

	params.InError = InError;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.VerificationServerErrorCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InError                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_LoginScreen_C::VerificationServerErrorCallback(const struct FText& InError)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.VerificationServerErrorCallback"));

	struct
	{
		struct FText                   InError;
	} params = {};

	params.InError = InError;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ClearButtonErrors
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::ClearButtonErrors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ClearButtonErrors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_LoginScreen_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.PreConstruct"));

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


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ResendVerificationCode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::ResendVerificationCode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ResendVerificationCode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnExitClicked_LoginSection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::OnExitClicked_LoginSection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnExitClicked_LoginSection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnExitClicked_LoginQueue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::OnExitClicked_LoginQueue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnExitClicked_LoginQueue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnExitClicked_Registration
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::OnExitClicked_Registration()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnExitClicked_Registration"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnExitClicked_DevTicket
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::OnExitClicked_DevTicket()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnExitClicked_DevTicket"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ExportGateAgreementDenied
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::ExportGateAgreementDenied()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ExportGateAgreementDenied"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnGetUserPrivileges
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::OnGetUserPrivileges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnGetUserPrivileges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnLegalDocumentAcceptanceResult
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<ETigerLegalDocumentType> InDocumentTypes                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_LoginScreen_C::OnLegalDocumentAcceptanceResult(TArray<ETigerLegalDocumentType> InDocumentTypes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnLegalDocumentAcceptanceResult"));

	struct
	{
		TArray<ETigerLegalDocumentType> InDocumentTypes;
	} params = {};

	params.InDocumentTypes = InDocumentTypes;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnLegalDocumentOfTypeAccepted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerLegalDocumentType        InAcceptedDocumentType         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::OnLegalDocumentOfTypeAccepted(ETigerLegalDocumentType InAcceptedDocumentType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnLegalDocumentOfTypeAccepted"));

	struct
	{
		ETigerLegalDocumentType        InAcceptedDocumentType;
	} params = {};

	params.InAcceptedDocumentType = InAcceptedDocumentType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.PromptNextLegalDocument
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::PromptNextLegalDocument()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.PromptNextLegalDocument"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowLegalDocumentPopupOfType
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerLegalDocumentType        InDocumentType                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::ShowLegalDocumentPopupOfType(ETigerLegalDocumentType InDocumentType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowLegalDocumentPopupOfType"));

	struct
	{
		ETigerLegalDocumentType        InDocumentType;
	} params = {};

	params.InDocumentType = InDocumentType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.AgreedOrDisagreedToLegalDocument
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Agreed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_LoginScreen_C::AgreedOrDisagreedToLegalDocument(bool Agreed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.AgreedOrDisagreedToLegalDocument"));

	struct
	{
		bool                           Agreed;
	} params = {};

	params.Agreed = Agreed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.DeniedPopupDecisionMade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Agreed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_LoginScreen_C::DeniedPopupDecisionMade(bool Agreed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.DeniedPopupDecisionMade"));

	struct
	{
		bool                           Agreed;
	} params = {};

	params.Agreed = Agreed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.EvaluateLoginResult
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLoginResultSharkmob    InResult                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FString                 ErrorString                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           LoginSuccess                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsNewAccount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_LoginScreen_C::EvaluateLoginResult(const struct FLoginResultSharkmob& InResult, const struct FString& ErrorString, bool LoginSuccess, bool IsNewAccount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.EvaluateLoginResult"));

	struct
	{
		struct FLoginResultSharkmob    InResult;
		struct FString                 ErrorString;
		bool                           LoginSuccess;
		bool                           IsNewAccount;
	} params = {};

	params.InResult = InResult;
	params.ErrorString = ErrorString;
	params.LoginSuccess = LoginSuccess;
	params.IsNewAccount = IsNewAccount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ExecuteUbergraph_TBP_UI_LoginScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LoginScreen_C::ExecuteUbergraph_TBP_UI_LoginScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ExecuteUbergraph_TBP_UI_LoginScreen"));

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


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnInvalidVersionDispatch__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::OnInvalidVersionDispatch__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnInvalidVersionDispatch__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnValidVersionDispatch__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LoginScreen_C::OnValidVersionDispatch__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnValidVersionDispatch__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.LoginSucceeded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_LoginScreen_C::LoginSucceeded__DelegateSignature(TArray<struct FTigerPersistentPlayerCharacter>* AvailableCharacters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.LoginSucceeded__DelegateSignature"));

	struct
	{
		TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AvailableCharacters != nullptr)
		*AvailableCharacters = params.AvailableCharacters;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
