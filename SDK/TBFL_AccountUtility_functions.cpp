// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_AccountUtility_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check UsernameNotInPassword
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InUsername                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InPassword                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           OutErrror                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBFL_AccountUtility_C::Check_UsernameNotInPassword(const struct FText& InUsername, const struct FText& InPassword, class UObject* __WorldContext, bool* OutErrror)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check UsernameNotInPassword"));

	struct
	{
		struct FText                   InUsername;
		struct FText                   InPassword;
		class UObject*                 __WorldContext;
		bool                           OutErrror;
	} params = {};

	params.InUsername = InUsername;
	params.InPassword = InPassword;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutErrror != nullptr)
		*OutErrror = params.OutErrror;
}


// Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check Date Of Birth
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDateTime               InDateOfBirth                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InSelectedCountryIndex         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InCountrySelected              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bValid                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   Message                        (CPF_Parm, CPF_OutParm)

void UTBFL_AccountUtility_C::Check_Date_Of_Birth(const struct FDateTime& InDateOfBirth, int InSelectedCountryIndex, bool InCountrySelected, class UObject* __WorldContext, bool* bValid, struct FText* Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check Date Of Birth"));

	struct
	{
		struct FDateTime               InDateOfBirth;
		int                            InSelectedCountryIndex;
		bool                           InCountrySelected;
		class UObject*                 __WorldContext;
		bool                           bValid;
		struct FText                   Message;
	} params = {};

	params.InDateOfBirth = InDateOfBirth;
	params.InSelectedCountryIndex = InSelectedCountryIndex;
	params.InCountrySelected = InCountrySelected;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (Message != nullptr)
		*Message = params.Message;
}


// Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check Verification Code Format
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   In_Email                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Error                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   Message                        (CPF_Parm, CPF_OutParm)

void UTBFL_AccountUtility_C::Check_Verification_Code_Format(const struct FText& In_Email, class UObject* __WorldContext, bool* Error, struct FText* Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check Verification Code Format"));

	struct
	{
		struct FText                   In_Email;
		class UObject*                 __WorldContext;
		bool                           Error;
		struct FText                   Message;
	} params = {};

	params.In_Email = In_Email;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Error != nullptr)
		*Error = params.Error;
	if (Message != nullptr)
		*Message = params.Message;
}


// Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check Username Format
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   In_Email                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Error                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   Message                        (CPF_Parm, CPF_OutParm)

void UTBFL_AccountUtility_C::Check_Username_Format(const struct FText& In_Email, class UObject* __WorldContext, bool* Error, struct FText* Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check Username Format"));

	struct
	{
		struct FText                   In_Email;
		class UObject*                 __WorldContext;
		bool                           Error;
		struct FText                   Message;
	} params = {};

	params.In_Email = In_Email;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Error != nullptr)
		*Error = params.Error;
	if (Message != nullptr)
		*Message = params.Message;
}


// Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check Email Format
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   In_Email                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Error                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   Message                        (CPF_Parm, CPF_OutParm)

void UTBFL_AccountUtility_C::Check_Email_Format(const struct FText& In_Email, class UObject* __WorldContext, bool* Error, struct FText* Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check Email Format"));

	struct
	{
		struct FText                   In_Email;
		class UObject*                 __WorldContext;
		bool                           Error;
		struct FText                   Message;
	} params = {};

	params.In_Email = In_Email;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Error != nullptr)
		*Error = params.Error;
	if (Message != nullptr)
		*Message = params.Message;
}


// Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check Password Format
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   In_Password                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Error                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   Message                        (CPF_Parm, CPF_OutParm)

void UTBFL_AccountUtility_C::Check_Password_Format(const struct FText& In_Password, class UObject* __WorldContext, bool* Error, struct FText* Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check Password Format"));

	struct
	{
		struct FText                   In_Password;
		class UObject*                 __WorldContext;
		bool                           Error;
		struct FText                   Message;
	} params = {};

	params.In_Password = In_Password;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Error != nullptr)
		*Error = params.Error;
	if (Message != nullptr)
		*Message = params.Message;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
