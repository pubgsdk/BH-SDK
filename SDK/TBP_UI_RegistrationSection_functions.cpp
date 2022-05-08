// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_RegistrationSection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.UsernameNotInPassword
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutError                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_RegistrationSection_C::UsernameNotInPassword(bool* OutError)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.UsernameNotInPassword"));

	struct
	{
		bool                           OutError;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutError != nullptr)
		*OutError = params.OutError;
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetCountryShouldShowExportGate
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutShouldShowExportGate        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_RegistrationSection_C::GetCountryShouldShowExportGate(bool* OutShouldShowExportGate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetCountryShouldShowExportGate"));

	struct
	{
		bool                           OutShouldShowExportGate;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutShouldShowExportGate != nullptr)
		*OutShouldShowExportGate = params.OutShouldShowExportGate;
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_RegistrationSection_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnKeyDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.CheckAgeRestrictionDirectlyByYearSelection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::CheckAgeRestrictionDirectlyByYearSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.CheckAgeRestrictionDirectlyByYearSelection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetCountryRegionId
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            OutRegionId                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RegistrationSection_C::GetCountryRegionId(int* OutRegionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetCountryRegionId"));

	struct
	{
		int                            OutRegionId;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutRegionId != nullptr)
		*OutRegionId = params.OutRegionId;
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ValidatePasswordEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutCorrectlyEntered            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_RegistrationSection_C::ValidatePasswordEntry(bool* OutCorrectlyEntered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ValidatePasswordEntry"));

	struct
	{
		bool                           OutCorrectlyEntered;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutCorrectlyEntered != nullptr)
		*OutCorrectlyEntered = params.OutCorrectlyEntered;
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.CheckRegistrationFormReady
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::CheckRegistrationFormReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.CheckRegistrationFormReady"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.VerifyDateOfBirth
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bValid                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   Message                        (CPF_Parm, CPF_OutParm)

void UTBP_UI_RegistrationSection_C::VerifyDateOfBirth(bool* bValid, struct FText* Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.VerifyDateOfBirth"));

	struct
	{
		bool                           bValid;
		struct FText                   Message;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (Message != nullptr)
		*Message = params.Message;
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetEnteredDateOfBirth
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsValidDate                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FDateTime               DateOfBirth                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RegistrationSection_C::GetEnteredDateOfBirth(bool* IsValidDate, struct FDateTime* DateOfBirth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetEnteredDateOfBirth"));

	struct
	{
		bool                           IsValidDate;
		struct FDateTime               DateOfBirth;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsValidDate != nullptr)
		*IsValidDate = params.IsValidDate;
	if (DateOfBirth != nullptr)
		*DateOfBirth = params.DateOfBirth;
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.MakeArray
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            FirstIndex                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            LastIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InvertList                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FText>           NewParam                       (CPF_Parm, CPF_OutParm)

void UTBP_UI_RegistrationSection_C::MakeArray(int FirstIndex, int LastIndex, bool InvertList, TArray<struct FText>* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.MakeArray"));

	struct
	{
		int                            FirstIndex;
		int                            LastIndex;
		bool                           InvertList;
		TArray<struct FText>           NewParam;
	} params = {};

	params.FirstIndex = FirstIndex;
	params.LastIndex = LastIndex;
	params.InvertList = InvertList;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.Verify
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Error                          (CPF_Parm, CPF_OutParm)

void UTBP_UI_RegistrationSection_C::Verify(struct FText* Error)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.Verify"));

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


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetEnteredEmail
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString UTBP_UI_RegistrationSection_C::GetEnteredEmail()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetEnteredEmail"));

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


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.PopulateComboBox
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UComboBoxString*         InComboBox                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            FirstOption                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            LastOption                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Reverse                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_RegistrationSection_C::PopulateComboBox(class UComboBoxString* InComboBox, int FirstOption, int LastOption, bool Reverse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.PopulateComboBox"));

	struct
	{
		class UComboBoxString*         InComboBox;
		int                            FirstOption;
		int                            LastOption;
		bool                           Reverse;
	} params = {};

	params.InComboBox = InComboBox;
	params.FirstOption = FirstOption;
	params.LastOption = LastOption;
	params.Reverse = Reverse;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetEnteredDetails
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Verification_Code              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FSharkAccountRegistrationData Registration_Data              (CPF_Parm, CPF_OutParm)

void UTBP_UI_RegistrationSection_C::GetEnteredDetails(const struct FString& Verification_Code, struct FSharkAccountRegistrationData* Registration_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetEnteredDetails"));

	struct
	{
		struct FString                 Verification_Code;
		struct FSharkAccountRegistrationData Registration_Data;
	} params = {};

	params.Verification_Code = Verification_Code;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Registration_Data != nullptr)
		*Registration_Data = params.Registration_Data;
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnFailure_97305E0F48D8BC638754BE97B048207B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEmailAvailable                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 ErrorMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RegistrationSection_C::OnFailure_97305E0F48D8BC638754BE97B048207B(bool bEmailAvailable, const struct FString& ErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnFailure_97305E0F48D8BC638754BE97B048207B"));

	struct
	{
		bool                           bEmailAvailable;
		struct FString                 ErrorMessage;
	} params = {};

	params.bEmailAvailable = bEmailAvailable;
	params.ErrorMessage = ErrorMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnSuccess_97305E0F48D8BC638754BE97B048207B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEmailAvailable                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 ErrorMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RegistrationSection_C::OnSuccess_97305E0F48D8BC638754BE97B048207B(bool bEmailAvailable, const struct FString& ErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnSuccess_97305E0F48D8BC638754BE97B048207B"));

	struct
	{
		bool                           bEmailAvailable;
		struct FString                 ErrorMessage;
	} params = {};

	params.bEmailAvailable = bEmailAvailable;
	params.ErrorMessage = ErrorMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnFailure_47FEBBC041B668BCB406448A43821565
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUserNameAvailable             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bUserNameContainsProfanity     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 ErrorString                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RegistrationSection_C::OnFailure_47FEBBC041B668BCB406448A43821565(bool bUserNameAvailable, bool bUserNameContainsProfanity, const struct FString& ErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnFailure_47FEBBC041B668BCB406448A43821565"));

	struct
	{
		bool                           bUserNameAvailable;
		bool                           bUserNameContainsProfanity;
		struct FString                 ErrorString;
	} params = {};

	params.bUserNameAvailable = bUserNameAvailable;
	params.bUserNameContainsProfanity = bUserNameContainsProfanity;
	params.ErrorString = ErrorString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnSuccess_47FEBBC041B668BCB406448A43821565
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUserNameAvailable             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bUserNameContainsProfanity     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 ErrorString                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RegistrationSection_C::OnSuccess_47FEBBC041B668BCB406448A43821565(bool bUserNameAvailable, bool bUserNameContainsProfanity, const struct FString& ErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnSuccess_47FEBBC041B668BCB406448A43821565"));

	struct
	{
		bool                           bUserNameAvailable;
		bool                           bUserNameContainsProfanity;
		struct FString                 ErrorString;
	} params = {};

	params.bUserNameAvailable = bUserNameAvailable;
	params.bUserNameContainsProfanity = bUserNameContainsProfanity;
	params.ErrorString = ErrorString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnFailure_FE7265334A5769C9FEF0CCB5E78C58E0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUserNameAvailable             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bUserNameContainsProfanity     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 ErrorString                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RegistrationSection_C::OnFailure_FE7265334A5769C9FEF0CCB5E78C58E0(bool bUserNameAvailable, bool bUserNameContainsProfanity, const struct FString& ErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnFailure_FE7265334A5769C9FEF0CCB5E78C58E0"));

	struct
	{
		bool                           bUserNameAvailable;
		bool                           bUserNameContainsProfanity;
		struct FString                 ErrorString;
	} params = {};

	params.bUserNameAvailable = bUserNameAvailable;
	params.bUserNameContainsProfanity = bUserNameContainsProfanity;
	params.ErrorString = ErrorString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnSuccess_FE7265334A5769C9FEF0CCB5E78C58E0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUserNameAvailable             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bUserNameContainsProfanity     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 ErrorString                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RegistrationSection_C::OnSuccess_FE7265334A5769C9FEF0CCB5E78C58E0(bool bUserNameAvailable, bool bUserNameContainsProfanity, const struct FString& ErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnSuccess_FE7265334A5769C9FEF0CCB5E78C58E0"));

	struct
	{
		bool                           bUserNameAvailable;
		bool                           bUserNameContainsProfanity;
		struct FString                 ErrorString;
	} params = {};

	params.bUserNameAvailable = bUserNameAvailable;
	params.bUserNameContainsProfanity = bUserNameContainsProfanity;
	params.ErrorString = ErrorString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnFailure_08A67A8E428B9588EDCCE9BE9CC66E26
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEmailAvailable                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 ErrorMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RegistrationSection_C::OnFailure_08A67A8E428B9588EDCCE9BE9CC66E26(bool bEmailAvailable, const struct FString& ErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnFailure_08A67A8E428B9588EDCCE9BE9CC66E26"));

	struct
	{
		bool                           bEmailAvailable;
		struct FString                 ErrorMessage;
	} params = {};

	params.bEmailAvailable = bEmailAvailable;
	params.ErrorMessage = ErrorMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnSuccess_08A67A8E428B9588EDCCE9BE9CC66E26
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEmailAvailable                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 ErrorMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RegistrationSection_C::OnSuccess_08A67A8E428B9588EDCCE9BE9CC66E26(bool bEmailAvailable, const struct FString& ErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnSuccess_08A67A8E428B9588EDCCE9BE9CC66E26"));

	struct
	{
		bool                           bEmailAvailable;
		struct FString                 ErrorMessage;
	} params = {};

	params.bEmailAvailable = bEmailAvailable;
	params.ErrorMessage = ErrorMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__Button_CTA_RegisterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__Button_CTA_RegisterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__Button_CTA_RegisterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__UsernameBox_K2Node_ComponentBoundEvent_0_On Text Settled__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_RegistrationSection_C::BndEvt__UsernameBox_K2Node_ComponentBoundEvent_0_On_Text_Settled__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__UsernameBox_K2Node_ComponentBoundEvent_0_On Text Settled__DelegateSignature"));

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


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__EmailBox_K2Node_ComponentBoundEvent_2_On Text Settled__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_RegistrationSection_C::BndEvt__EmailBox_K2Node_ComponentBoundEvent_2_On_Text_Settled__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__EmailBox_K2Node_ComponentBoundEvent_2_On Text Settled__DelegateSignature"));

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


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__PasswordBox_K2Node_ComponentBoundEvent_3_On Text Settled__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_RegistrationSection_C::BndEvt__PasswordBox_K2Node_ComponentBoundEvent_3_On_Text_Settled__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__PasswordBox_K2Node_ComponentBoundEvent_3_On Text Settled__DelegateSignature"));

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


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__RepeatPasswordBox_K2Node_ComponentBoundEvent_5_On Text Settled__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_RegistrationSection_C::BndEvt__RepeatPasswordBox_K2Node_ComponentBoundEvent_5_On_Text_Settled__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__RepeatPasswordBox_K2Node_ComponentBoundEvent_5_On Text Settled__DelegateSignature"));

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


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_TextButton_Back_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_TextButton_Back_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_TextButton_Back_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_StyledComboBox_Day_K2Node_ComponentBoundEvent_4_OnSelectionChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SelectedIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_StyledComboBox_Day_K2Node_ComponentBoundEvent_4_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_StyledComboBox_Day_K2Node_ComponentBoundEvent_4_OnSelectionChanged__DelegateSignature"));

	struct
	{
		struct FText                   SelectedItem;
		int                            SelectedIndex;
	} params = {};

	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_StyledComboBox_Month_K2Node_ComponentBoundEvent_7_OnSelectionChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SelectedIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_StyledComboBox_Month_K2Node_ComponentBoundEvent_7_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_StyledComboBox_Month_K2Node_ComponentBoundEvent_7_OnSelectionChanged__DelegateSignature"));

	struct
	{
		struct FText                   SelectedItem;
		int                            SelectedIndex;
	} params = {};

	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_StyledComboBox_Year_K2Node_ComponentBoundEvent_8_OnSelectionChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SelectedIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_StyledComboBox_Year_K2Node_ComponentBoundEvent_8_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_StyledComboBox_Year_K2Node_ComponentBoundEvent_8_OnSelectionChanged__DelegateSignature"));

	struct
	{
		struct FText                   SelectedItem;
		int                            SelectedIndex;
	} params = {};

	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.UsernameAvailabilityCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InAvailable                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   InErrorText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           InProfanity                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_RegistrationSection_C::UsernameAvailabilityCallback(bool InAvailable, const struct FText& InErrorText, bool InProfanity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.UsernameAvailabilityCallback"));

	struct
	{
		bool                           InAvailable;
		struct FText                   InErrorText;
		bool                           InProfanity;
	} params = {};

	params.InAvailable = InAvailable;
	params.InErrorText = InErrorText;
	params.InProfanity = InProfanity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.EmailAvailabilityCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InAvailable                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   InErrorText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_RegistrationSection_C::EmailAvailabilityCallback(bool InAvailable, const struct FText& InErrorText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.EmailAvailabilityCallback"));

	struct
	{
		bool                           InAvailable;
		struct FText                   InErrorText;
	} params = {};

	params.InAvailable = InAvailable;
	params.InErrorText = InErrorText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_StyledComboBox_Country_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SelectedIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_StyledComboBox_Country_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_StyledComboBox_Country_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature"));

	struct
	{
		struct FText                   SelectedItem;
		int                            SelectedIndex;
	} params = {};

	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__EmailBox_K2Node_ComponentBoundEvent_11_On Text Changed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__EmailBox_K2Node_ComponentBoundEvent_11_On_Text_Changed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__EmailBox_K2Node_ComponentBoundEvent_11_On Text Changed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__UsernameBox_K2Node_ComponentBoundEvent_12_On Text Changed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__UsernameBox_K2Node_ComponentBoundEvent_12_On_Text_Changed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__UsernameBox_K2Node_ComponentBoundEvent_12_On Text Changed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.StartEmailTimeOutTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::StartEmailTimeOutTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.StartEmailTimeOutTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.StopEmailTimeOutTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::StopEmailTimeOutTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.StopEmailTimeOutTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.Timeout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::Timeout()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.Timeout"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ShowTermsOfService
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::ShowTermsOfService()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ShowTermsOfService"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ShowPrivacyPolicy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::ShowPrivacyPolicy()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ShowPrivacyPolicy"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.DoubleCheckPasswordAfterUpdatedUsername
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::DoubleCheckPasswordAfterUpdatedUsername()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.DoubleCheckPasswordAfterUpdatedUsername"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.CheckIfShouldDoubleCheckPasswordField
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::CheckIfShouldDoubleCheckPasswordField()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.CheckIfShouldDoubleCheckPasswordField"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_13_OnChecked_true__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_13_OnChecked_true__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_13_OnChecked_true__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_14_OnChecked_false__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_14_OnChecked_false__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_14_OnChecked_false__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_15_OnClickedText__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_15_OnClickedText__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_15_OnClickedText__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_16_OnChecked_true__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_16_OnChecked_true__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_16_OnChecked_true__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_17_OnChecked_false__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_17_OnChecked_false__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_17_OnChecked_false__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_18_OnClickedText__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_18_OnClickedText__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_18_OnClickedText__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_19_OnChecked_true__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_19_OnChecked_true__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_19_OnChecked_true__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_20_OnChecked_false__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_20_OnChecked_false__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_20_OnChecked_false__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_21_OnClickedText__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_21_OnClickedText__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_21_OnClickedText__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_22_OnChecked_true__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_22_OnChecked_true__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_22_OnChecked_true__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_23_OnChecked_false__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_23_OnChecked_false__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_23_OnChecked_false__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_24_OnClickedText__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_24_OnClickedText__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_24_OnClickedText__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ShowNewsletterAgreement
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::ShowNewsletterAgreement()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ShowNewsletterAgreement"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ExitDueToTimeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InAvailable                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   InErrorText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_RegistrationSection_C::ExitDueToTimeOut(bool InAvailable, const struct FText& InErrorText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ExitDueToTimeOut"));

	struct
	{
		bool                           InAvailable;
		struct FText                   InErrorText;
	} params = {};

	params.InAvailable = InAvailable;
	params.InErrorText = InErrorText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_25_OnClickedPopupRequirement__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_25_OnClickedPopupRequirement__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_25_OnClickedPopupRequirement__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_26_OnClickedPopupRequirement__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_26_OnClickedPopupRequirement__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_26_OnClickedPopupRequirement__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_27_OnClickedPopupRequirement__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_27_OnClickedPopupRequirement__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_27_OnClickedPopupRequirement__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_28_OnClickedPopupRequirement__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_28_OnClickedPopupRequirement__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_28_OnClickedPopupRequirement__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_29_OnClickedPopupRequirement__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_29_OnClickedPopupRequirement__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_29_OnClickedPopupRequirement__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_30_OnClickedPopupRequirement__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_30_OnClickedPopupRequirement__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_30_OnClickedPopupRequirement__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_31_OnClickedPopupRequirement__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_31_OnClickedPopupRequirement__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_31_OnClickedPopupRequirement__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_32_OnChecked_true__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_32_OnChecked_true__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_32_OnChecked_true__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_33_OnChecked_false__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_33_OnChecked_false__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_33_OnChecked_false__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_34_OnClickedText__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_34_OnClickedText__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_34_OnClickedText__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_35_OnChecked_true__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_35_OnChecked_true__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_35_OnChecked_true__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_36_OnChecked_false__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_36_OnChecked_false__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_36_OnChecked_false__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_37_OnClickedText__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_37_OnClickedText__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_37_OnClickedText__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_38_OnChecked_true__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_38_OnChecked_true__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_38_OnChecked_true__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_39_OnChecked_false__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_39_OnChecked_false__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_39_OnChecked_false__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_40_OnClickedText__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_40_OnClickedText__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_40_OnClickedText__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ResetAllCheckBoxes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::ResetAllCheckBoxes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ResetAllCheckBoxes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.QueryUsernameRegisterCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInSuccess                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bIsAvailable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bIsProfanity                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 InUsername                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RegistrationSection_C::QueryUsernameRegisterCallback(bool bInSuccess, bool bIsAvailable, bool bIsProfanity, const struct FString& InUsername)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.QueryUsernameRegisterCallback"));

	struct
	{
		bool                           bInSuccess;
		bool                           bIsAvailable;
		bool                           bIsProfanity;
		struct FString                 InUsername;
	} params = {};

	params.bInSuccess = bInSuccess;
	params.bIsAvailable = bIsAvailable;
	params.bIsProfanity = bIsProfanity;
	params.InUsername = InUsername;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.StopUsernameTimeoutTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::StopUsernameTimeoutTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.StopUsernameTimeoutTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.StartUsernameTimeOutTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::StartUsernameTimeOutTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.StartUsernameTimeOutTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.UsernameTimeout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::UsernameTimeout()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.UsernameTimeout"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.UsernameExitDueToTimeout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInAvailable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   InErrorText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_RegistrationSection_C::UsernameExitDueToTimeout(bool bInAvailable, const struct FText& InErrorText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.UsernameExitDueToTimeout"));

	struct
	{
		bool                           bInAvailable;
		struct FText                   InErrorText;
	} params = {};

	params.bInAvailable = bInAvailable;
	params.InErrorText = InErrorText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetLegalTexts
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::GetLegalTexts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetLegalTexts"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ExecuteUbergraph_TBP_UI_RegistrationSection
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RegistrationSection_C::ExecuteUbergraph_TBP_UI_RegistrationSection(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ExecuteUbergraph_TBP_UI_RegistrationSection"));

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


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ExitGame__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::ExitGame__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ExitGame__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.Back__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::Back__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.Back__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.CreateAccount__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RegistrationSection_C::CreateAccount__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.CreateAccount__DelegateSignature"));

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
