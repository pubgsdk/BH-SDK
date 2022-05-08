// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ContextualHelp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.StartAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerContextualHelpType       InType                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ContextualHelp_C::StartAnimation(ETigerContextualHelpType InType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.StartAnimation"));

	struct
	{
		ETigerContextualHelpType       InType;
	} params = {};

	params.InType = InType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.OnHideHelpWidget
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerContextualHelp*    InData                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          OutAnimationDuration           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerContextualHelpType       InType                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ContextualHelp_C::OnHideHelpWidget(class UTigerContextualHelp* InData, ETigerContextualHelpType InType, float* OutAnimationDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.OnHideHelpWidget"));

	struct
	{
		class UTigerContextualHelp*    InData;
		float                          OutAnimationDuration;
		ETigerContextualHelpType       InType;
	} params = {};

	params.InData = InData;
	params.InType = InType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutAnimationDuration != nullptr)
		*OutAnimationDuration = params.OutAnimationDuration;
}


// Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.SetIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerContextualHelp*    InData                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerContextualHelpType       InType                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ContextualHelp_C::SetIcon(class UTigerContextualHelp* InData, ETigerContextualHelpType InType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.SetIcon"));

	struct
	{
		class UTigerContextualHelp*    InData;
		ETigerContextualHelpType       InType;
	} params = {};

	params.InData = InData;
	params.InType = InType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.SetDescriptionText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerContextualHelp*    InData                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerContextualHelpType       InType                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ContextualHelp_C::SetDescriptionText(class UTigerContextualHelp* InData, ETigerContextualHelpType InType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.SetDescriptionText"));

	struct
	{
		class UTigerContextualHelp*    InData;
		ETigerContextualHelpType       InType;
	} params = {};

	params.InData = InData;
	params.InType = InType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.OnShowHelpWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UTigerContextualHelp*    InData                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerContextualHelpType       InType                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ContextualHelp_C::OnShowHelpWidget(class UTigerContextualHelp* InData, ETigerContextualHelpType InType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.OnShowHelpWidget"));

	struct
	{
		class UTigerContextualHelp*    InData;
		ETigerContextualHelpType       InType;
	} params = {};

	params.InData = InData;
	params.InType = InType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.SetWantsToShowOff
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ContextualHelp_C::SetWantsToShowOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.SetWantsToShowOff"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.SetInteractionWantsToShowOff
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ContextualHelp_C::SetInteractionWantsToShowOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.SetInteractionWantsToShowOff"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ContextualHelp_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.OnKeyBindChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputActionKeyMapping  OldKeyBinding                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FInputActionKeyMapping  NewKeyBinding                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_ContextualHelp_C::OnKeyBindChanged(const struct FInputActionKeyMapping& OldKeyBinding, const struct FInputActionKeyMapping& NewKeyBinding)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.OnKeyBindChanged"));

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


// Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.OnResetToDefault
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ContextualHelp_C::OnResetToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.OnResetToDefault"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.ExecuteUbergraph_TBP_UI_ContextualHelp
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ContextualHelp_C::ExecuteUbergraph_TBP_UI_ContextualHelp(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C.ExecuteUbergraph_TBP_UI_ContextualHelp"));

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
