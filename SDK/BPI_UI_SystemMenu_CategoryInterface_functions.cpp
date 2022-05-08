// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_UI_SystemMenu_CategoryInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.ResetSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPI_UI_SystemMenu_CategoryInterface_C::ResetSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.ResetSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.RevertChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPI_UI_SystemMenu_CategoryInterface_C::RevertChanges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.RevertChanges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.DiscardChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPI_UI_SystemMenu_CategoryInterface_C::DiscardChanges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.DiscardChanges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.ConfirmApply
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPI_UI_SystemMenu_CategoryInterface_C::ConfirmApply()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.ConfirmApply"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.ApplyChanges
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutShouldShowRevertPrompt      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           OutNeedsRestart                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPI_UI_SystemMenu_CategoryInterface_C::ApplyChanges(bool* OutShouldShowRevertPrompt, bool* OutNeedsRestart)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.ApplyChanges"));

	struct
	{
		bool                           OutShouldShowRevertPrompt;
		bool                           OutNeedsRestart;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutShouldShowRevertPrompt != nullptr)
		*OutShouldShowRevertPrompt = params.OutShouldShowRevertPrompt;
	if (OutNeedsRestart != nullptr)
		*OutNeedsRestart = params.OutNeedsRestart;
}


// Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.HasUnappliedChanges
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutHasUnappliedChanges         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPI_UI_SystemMenu_CategoryInterface_C::HasUnappliedChanges(bool* OutHasUnappliedChanges)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.HasUnappliedChanges"));

	struct
	{
		bool                           OutHasUnappliedChanges;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutHasUnappliedChanges != nullptr)
		*OutHasUnappliedChanges = params.OutHasUnappliedChanges;
}


// Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.CloseCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPI_UI_SystemMenu_CategoryInterface_C::CloseCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.CloseCategory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.OpenCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPI_UI_SystemMenu_CategoryInterface_C::OpenCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.OpenCategory"));

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
