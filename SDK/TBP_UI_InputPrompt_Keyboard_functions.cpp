// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InputPrompt_Keyboard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.IsHoldAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowHoldAction                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InputPrompt_Keyboard_C::IsHoldAction(bool ShowHoldAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.IsHoldAction"));

	struct
	{
		bool                           ShowHoldAction;
	} params = {};

	params.ShowHoldAction = ShowHoldAction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.ChangeColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InputPrompt_Keyboard_C::ChangeColor(bool Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.ChangeColor"));

	struct
	{
		bool                           Hovered;
	} params = {};

	params.Hovered = Hovered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.InputBindingChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InInputName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InputPrompt_Keyboard_C::InputBindingChanged(const struct FName& InInputName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.InputBindingChanged"));

	struct
	{
		struct FName                   InInputName;
	} params = {};

	params.InInputName = InInputName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.ConstructIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InputPrompt_Keyboard_C::ConstructIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.ConstructIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.UpdatePromptVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingGamePad                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InputPrompt_Keyboard_C::UpdatePromptVisibility(bool bUsingGamePad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.UpdatePromptVisibility"));

	struct
	{
		bool                           bUsingGamePad;
	} params = {};

	params.bUsingGamePad = bUsingGamePad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_InputPrompt_Keyboard_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_InputPrompt_Keyboard_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnUseGamepadChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewIsProbablyUsingGamepad     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InputPrompt_Keyboard_C::OnUseGamepadChanged(bool bNewIsProbablyUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnUseGamepadChanged"));

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


// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InputPrompt_Keyboard_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.PreConstruct"));

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


// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.UpdateIcon
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_InputPrompt_Keyboard_C::UpdateIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.UpdateIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.UpdateProperties
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewPrefixText                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   NewPostfixText                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bNewUseKey                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FName                   NewInputAction                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   NewInputAxis                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FKey                    NewInputKey                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UTBP_UI_InputPrompt_Keyboard_C::UpdateProperties(const struct FText& NewPrefixText, const struct FText& NewPostfixText, bool bNewUseKey, const struct FName& NewInputAction, const struct FName& NewInputAxis, const struct FKey& NewInputKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.UpdateProperties"));

	struct
	{
		struct FText                   NewPrefixText;
		struct FText                   NewPostfixText;
		bool                           bNewUseKey;
		struct FName                   NewInputAction;
		struct FName                   NewInputAxis;
		struct FKey                    NewInputKey;
	} params = {};

	params.NewPrefixText = NewPrefixText;
	params.NewPostfixText = NewPostfixText;
	params.bNewUseKey = bNewUseKey;
	params.NewInputAction = NewInputAction;
	params.NewInputAxis = NewInputAxis;
	params.NewInputKey = NewInputKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnInputBindingChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputActionKeyMapping  OldKeyBinding                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FInputActionKeyMapping  NewKeyBinding                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_InputPrompt_Keyboard_C::OnInputBindingChanged(const struct FInputActionKeyMapping& OldKeyBinding, const struct FInputActionKeyMapping& NewKeyBinding)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnInputBindingChanged"));

	struct
	{
		struct FInputActionKeyMapping  OldKeyBinding;
		struct FInputActionKeyMapping  NewKeyBinding;
	} params = {};

	params.OldKeyBinding = OldKeyBinding;
	params.NewKeyBinding = NewKeyBinding;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnInputPresetChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InputPrompt_Keyboard_C::OnInputPresetChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnInputPresetChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnAxisInputBindingChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputAxisKeyMapping    OldKeyBinding                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FInputAxisKeyMapping    NewKeyBinding                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_InputPrompt_Keyboard_C::OnAxisInputBindingChanged(const struct FInputAxisKeyMapping& OldKeyBinding, const struct FInputAxisKeyMapping& NewKeyBinding)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnAxisInputBindingChanged"));

	struct
	{
		struct FInputAxisKeyMapping    OldKeyBinding;
		struct FInputAxisKeyMapping    NewKeyBinding;
	} params = {};

	params.OldKeyBinding = OldKeyBinding;
	params.NewKeyBinding = NewKeyBinding;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.ExecuteUbergraph_TBP_UI_InputPrompt_Keyboard
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InputPrompt_Keyboard_C::ExecuteUbergraph_TBP_UI_InputPrompt_Keyboard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.ExecuteUbergraph_TBP_UI_InputPrompt_Keyboard"));

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
