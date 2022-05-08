// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SystemMenuKeybindings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.HasUnappliedChanges
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutHasUnappliedChanges         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuKeybindings_C::HasUnappliedChanges(bool* OutHasUnappliedChanges)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.HasUnappliedChanges"));

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


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.ApplyChanges
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutShouldShowRevertPrompt      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           OutNeedsRestart                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuKeybindings_C::ApplyChanges(bool* OutShouldShowRevertPrompt, bool* OutNeedsRestart)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.ApplyChanges"));

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


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadKeybind
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InName                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FKey                    InKey                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InAxisScale                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InIsAxis                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuKeybindings_C::LoadKeybind(int InIndex, float InAxisScale, bool InIsAxis, struct FName* InName, struct FKey* InKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadKeybind"));

	struct
	{
		struct FName                   InName;
		struct FKey                    InKey;
		int                            InIndex;
		float                          InAxisScale;
		bool                           InIsAxis;
	} params = {};

	params.InIndex = InIndex;
	params.InAxisScale = InAxisScale;
	params.InIsAxis = InIsAxis;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InName != nullptr)
		*InName = params.InName;
	if (InKey != nullptr)
		*InKey = params.InKey;
}


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.RefreshKeyBindings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldClearChildren            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuKeybindings_C::RefreshKeyBindings(bool ShouldClearChildren)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.RefreshKeyBindings"));

	struct
	{
		bool                           ShouldClearChildren;
	} params = {};

	params.ShouldClearChildren = ShouldClearChildren;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadAxisKeyBindings
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FInputAxisKeyMapping> UserInputBindings              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_SystemMenuKeybindings_C::LoadAxisKeyBindings(TArray<struct FInputAxisKeyMapping>* UserInputBindings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadAxisKeyBindings"));

	struct
	{
		TArray<struct FInputAxisKeyMapping> UserInputBindings;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (UserInputBindings != nullptr)
		*UserInputBindings = params.UserInputBindings;
}


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadKeyBindings
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FInputActionKeyMapping> UserInputBindings              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_SystemMenuKeybindings_C::LoadKeyBindings(TArray<struct FInputActionKeyMapping>* UserInputBindings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadKeyBindings"));

	struct
	{
		TArray<struct FInputActionKeyMapping> UserInputBindings;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (UserInputBindings != nullptr)
		*UserInputBindings = params.UserInputBindings;
}


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.ConfirmApply
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuKeybindings_C::ConfirmApply()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.ConfirmApply"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.DiscardChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuKeybindings_C::DiscardChanges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.DiscardChanges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.RevertChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuKeybindings_C::RevertChanges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.RevertChanges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuKeybindings_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuKeybindings_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.BndEvt__GamepadSubmenuButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuKeybindings_C::BndEvt__GamepadSubmenuButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.BndEvt__GamepadSubmenuButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.BndEvt__KeyboardSubmenuButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuKeybindings_C::BndEvt__KeyboardSubmenuButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.BndEvt__KeyboardSubmenuButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuKeybindings_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.ResetSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuKeybindings_C::ResetSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.ResetSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.CloseCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuKeybindings_C::CloseCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.CloseCategory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.OpenCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuKeybindings_C::OpenCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.OpenCategory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.ExecuteUbergraph_TBP_UI_SystemMenuKeybindings
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuKeybindings_C::ExecuteUbergraph_TBP_UI_SystemMenuKeybindings(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.ExecuteUbergraph_TBP_UI_SystemMenuKeybindings"));

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
