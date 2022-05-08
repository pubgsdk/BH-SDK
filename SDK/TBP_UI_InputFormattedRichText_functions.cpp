// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InputFormattedRichText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.SetText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   newText                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_InputFormattedRichText_C::SetText(const struct FText& newText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.SetText"));

	struct
	{
		struct FText                   newText;
	} params = {};

	params.newText = newText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.UpdateText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InputFormattedRichText_C::UpdateText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.UpdateText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.GenerateAdditionalInput
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_InputFormattedRichText_C::GenerateAdditionalInput(struct FText* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.GenerateAdditionalInput"));

	struct
	{
		struct FText                   Target;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Target != nullptr)
		*Target = params.Target;
}


// Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.HasMultiplePossibleActionBindings
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FInputActionKeyMapping> Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           HasMultipleBindings            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InputFormattedRichText_C::HasMultiplePossibleActionBindings(TArray<struct FInputActionKeyMapping>* Array, bool* HasMultipleBindings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.HasMultiplePossibleActionBindings"));

	struct
	{
		TArray<struct FInputActionKeyMapping> Array;
		bool                           HasMultipleBindings;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
	if (HasMultipleBindings != nullptr)
		*HasMultipleBindings = params.HasMultipleBindings;
}


// Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.CreateInputList
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InputText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Inline_Image_Name              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           HasAlreadyInsertedInput        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InputFormattedRichText_C::CreateInputList(const struct FText& Inline_Image_Name, bool HasAlreadyInsertedInput, struct FText* InputText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.CreateInputList"));

	struct
	{
		struct FText                   InputText;
		struct FText                   Inline_Image_Name;
		bool                           HasAlreadyInsertedInput;
	} params = {};

	params.Inline_Image_Name = Inline_Image_Name;
	params.HasAlreadyInsertedInput = HasAlreadyInsertedInput;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InputText != nullptr)
		*InputText = params.InputText;
}


// Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.GenerateText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FInputActionKeyMapping> Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_InputFormattedRichText_C::GenerateText(TArray<struct FInputActionKeyMapping>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.GenerateText"));

	struct
	{
		TArray<struct FInputActionKeyMapping> Array;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.HasGamepadOverride
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_UI_InputFormattedRichText_C::HasGamepadOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.HasGamepadOverride"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_InputFormattedRichText_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.OnUseGamepadChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewIsProbablyUsingGamepad     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InputFormattedRichText_C::OnUseGamepadChanged(bool bNewIsProbablyUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.OnUseGamepadChanged"));

	struct
	{
		bool                           bNewIsProbablyUsingGamepad;
	} params = {};

	params.bNewIsProbablyUsingGamepad = bNewIsProbablyUsingGamepad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_InputFormattedRichText_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InputFormattedRichText_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.PreConstruct"));

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


// Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.ExecuteUbergraph_TBP_UI_InputFormattedRichText
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InputFormattedRichText_C::ExecuteUbergraph_TBP_UI_InputFormattedRichText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C.ExecuteUbergraph_TBP_UI_InputFormattedRichText"));

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
