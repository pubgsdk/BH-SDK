// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MatchMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OpenTeamMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::OpenTeamMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OpenTeamMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.UnbindForceClose
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::UnbindForceClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.UnbindForceClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BindForceClose
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::BindForceClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BindForceClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.EnableVoipPopups
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InEnable                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MatchMenu_C::EnableVoipPopups(bool InEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.EnableVoipPopups"));

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


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.Open Menu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::Open_Menu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.Open Menu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.CloseMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::CloseMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.CloseMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ResetButtonToDefaultState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_MenuButton_C*    TargetButton                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MatchMenu_C::ResetButtonToDefaultState(class UTBP_UI_MenuButton_C* TargetButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ResetButtonToDefaultState"));

	struct
	{
		class UTBP_UI_MenuButton_C*    TargetButton;
	} params = {};

	params.TargetButton = TargetButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.TryToJoinElysiumSession
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::TryToJoinElysiumSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.TryToJoinElysiumSession"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ReturnToElysium
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::ReturnToElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ReturnToElysium"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OnStatsReadyOrTimeout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bTimedOut                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MatchMenu_C::OnStatsReadyOrTimeout(bool bTimedOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OnStatsReadyOrTimeout"));

	struct
	{
		bool                           bTimedOut;
	} params = {};

	params.bTimedOut = bTimedOut;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__ReturnButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::BndEvt__ReturnButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__ReturnButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__LeaveLeaveButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::BndEvt__LeaveLeaveButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__LeaveLeaveButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__QuitQuitButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::BndEvt__QuitQuitButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__QuitQuitButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ResumeGame
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::ResumeGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ResumeGame"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__QuitReturnButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::BndEvt__QuitReturnButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__QuitReturnButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__LeaveReturnButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::BndEvt__LeaveReturnButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__LeaveReturnButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ToggleMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::ToggleMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ToggleMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.InventoryGamepadReleased
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::InventoryGamepadReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.InventoryGamepadReleased"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__TBP_UI_MatchMenu_ElysiumMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::BndEvt__TBP_UI_MatchMenu_ElysiumMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__TBP_UI_MatchMenu_ElysiumMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__TBP_UI_MatchMenu_LeaveTutorialLeaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::BndEvt__TBP_UI_MatchMenu_LeaveTutorialLeaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__TBP_UI_MatchMenu_LeaveTutorialLeaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__TBP_UI_MatchMenu_LeaveTutorialReturnButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::BndEvt__TBP_UI_MatchMenu_LeaveTutorialReturnButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__TBP_UI_MatchMenu_LeaveTutorialReturnButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__TBP_UI_MatchMenu_LeaveTutorialButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::BndEvt__TBP_UI_MatchMenu_LeaveTutorialButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__TBP_UI_MatchMenu_LeaveTutorialButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__TBP_UI_MatchMenu_TeamButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::BndEvt__TBP_UI_MatchMenu_TeamButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__TBP_UI_MatchMenu_TeamButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.LeaveSession
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MatchMenu_C::LeaveSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.LeaveSession"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ExecuteUbergraph_TBP_UI_MatchMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MatchMenu_C::ExecuteUbergraph_TBP_UI_MatchMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ExecuteUbergraph_TBP_UI_MatchMenu"));

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
