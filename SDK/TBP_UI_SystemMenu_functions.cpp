// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SystemMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.HideChat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::HideChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.HideChat"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.UnbindForceClose
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::UnbindForceClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.UnbindForceClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BindForceClose
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::BindForceClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BindForceClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.EnableVoipPopups
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InEnable                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenu_C::EnableVoipPopups(bool InEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.EnableVoipPopups"));

	struct
	{
		bool                           InEnable;
	} params = {};

	params.InEnable = InEnable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SetupVeins
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::SetupVeins()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SetupVeins"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.HasAnyUnappliedChanges
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutHasUnappliedChanges         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenu_C::HasAnyUnappliedChanges(bool* OutHasUnappliedChanges)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.HasAnyUnappliedChanges"));

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


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.HasActivePrompt
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           OutHasActivePrompt             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenu_C::HasActivePrompt(bool* OutHasActivePrompt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.HasActivePrompt"));

	struct
	{
		bool                           OutHasActivePrompt;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutHasActivePrompt != nullptr)
		*OutHasActivePrompt = params.OutHasActivePrompt;
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Get_ResetInputPrompt_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UTBP_UI_SystemMenu_C::Get_ResetInputPrompt_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Get_ResetInputPrompt_Visibility_1"));

	struct
	{
		ESlateVisibility               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Get_ApplyInputPrompt_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UTBP_UI_SystemMenu_C::Get_ApplyInputPrompt_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Get_ApplyInputPrompt_Visibility_1"));

	struct
	{
		ESlateVisibility               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SelectMenuAndButtonByIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::SelectMenuAndButtonByIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SelectMenuAndButtonByIndex"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SetActiveMenuButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_IngameMenuButton_C* NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenu_C::SetActiveMenuButton(class UTBP_UI_IngameMenuButton_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SetActiveMenuButton"));

	struct
	{
		class UTBP_UI_IngameMenuButton_C* NewParam;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Gameplay_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UTigerIngameSubmenuWidget* SubmenuWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenu_C::BndEvt__Gameplay_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UTigerIngameSubmenuWidget* SubmenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Gameplay_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature"));

	struct
	{
		class UTigerIngameSubmenuWidget* SubmenuWidget;
	} params = {};

	params.SubmenuWidget = SubmenuWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Graphics_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UTigerIngameSubmenuWidget* SubmenuWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenu_C::BndEvt__Graphics_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UTigerIngameSubmenuWidget* SubmenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Graphics_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature"));

	struct
	{
		class UTigerIngameSubmenuWidget* SubmenuWidget;
	} params = {};

	params.SubmenuWidget = SubmenuWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Audio_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UTigerIngameSubmenuWidget* SubmenuWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenu_C::BndEvt__Audio_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(class UTigerIngameSubmenuWidget* SubmenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Audio_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature"));

	struct
	{
		class UTigerIngameSubmenuWidget* SubmenuWidget;
	} params = {};

	params.SubmenuWidget = SubmenuWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__KeyBindings_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UTigerIngameSubmenuWidget* SubmenuWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenu_C::BndEvt__KeyBindings_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(class UTigerIngameSubmenuWidget* SubmenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__KeyBindings_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature"));

	struct
	{
		class UTigerIngameSubmenuWidget* SubmenuWidget;
	} params = {};

	params.SubmenuWidget = SubmenuWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Close menu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::Close_menu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Close menu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.EscapePressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::EscapePressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.EscapePressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SelectMenuToTheRight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::SelectMenuToTheRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SelectMenuToTheRight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SelectMenuToTheLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::SelectMenuToTheLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SelectMenuToTheLeft"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_InputPromptCombined_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_InputPromptCombined_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_InputPromptCombined_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_ApplyInputPrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_SystemMenu_ApplyInputPrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_ApplyInputPrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnApplySettings
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::OnApplySettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnApplySettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_ResetPrompt_K2Node_ComponentBoundEvent_12_Confirm__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_SystemMenu_ResetPrompt_K2Node_ComponentBoundEvent_12_Confirm__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_ResetPrompt_K2Node_ComponentBoundEvent_12_Confirm__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnResetSettings
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::OnResetSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnResetSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_UnappliedExitPrompt_K2Node_ComponentBoundEvent_13_Confirm__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_SystemMenu_UnappliedExitPrompt_K2Node_ComponentBoundEvent_13_Confirm__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_UnappliedExitPrompt_K2Node_ComponentBoundEvent_13_Confirm__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_RevertPrompt_K2Node_ComponentBoundEvent_14_Confirm__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_SystemMenu_RevertPrompt_K2Node_ComponentBoundEvent_14_Confirm__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_RevertPrompt_K2Node_ComponentBoundEvent_14_Confirm__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_RevertPrompt_K2Node_ComponentBoundEvent_15_Decline__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_SystemMenu_RevertPrompt_K2Node_ComponentBoundEvent_15_Decline__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_RevertPrompt_K2Node_ComponentBoundEvent_15_Decline__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_RevertPrompt_K2Node_ComponentBoundEvent_16_CountdownFinished__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_SystemMenu_RevertPrompt_K2Node_ComponentBoundEvent_16_CountdownFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_RevertPrompt_K2Node_ComponentBoundEvent_16_CountdownFinished__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_RestartPrompt_K2Node_ComponentBoundEvent_17_Confirm__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_SystemMenu_RestartPrompt_K2Node_ComponentBoundEvent_17_Confirm__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_RestartPrompt_K2Node_ComponentBoundEvent_17_Confirm__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_AppliedPrompt_K2Node_ComponentBoundEvent_18_Confirm__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_SystemMenu_AppliedPrompt_K2Node_ComponentBoundEvent_18_Confirm__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_AppliedPrompt_K2Node_ComponentBoundEvent_18_Confirm__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_UnappliedExitPrompt_K2Node_ComponentBoundEvent_19_Decline__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_SystemMenu_UnappliedExitPrompt_K2Node_ComponentBoundEvent_19_Decline__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_UnappliedExitPrompt_K2Node_ComponentBoundEvent_19_Decline__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_Streamer_Button_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UTigerIngameSubmenuWidget* SubmenuWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_SystemMenu_Streamer_Button_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature(class UTigerIngameSubmenuWidget* SubmenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_Streamer_Button_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature"));

	struct
	{
		class UTigerIngameSubmenuWidget* SubmenuWidget;
	} params = {};

	params.SubmenuWidget = SubmenuWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_SystemMenu_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_Button_84_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_SystemMenu_Button_84_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_Button_84_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_ResetButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_SystemMenu_ResetButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_ResetButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.ExecuteUbergraph_TBP_UI_SystemMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenu_C::ExecuteUbergraph_TBP_UI_SystemMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.ExecuteUbergraph_TBP_UI_SystemMenu"));

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
