// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SpectateInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.AreRespawnStationsDisabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bFeatureDisabled               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SpectateInterface_C::AreRespawnStationsDisabled(bool* bFeatureDisabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.AreRespawnStationsDisabled"));

	struct
	{
		bool                           bFeatureDisabled;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bFeatureDisabled != nullptr)
		*bFeatureDisabled = params.bFeatureDisabled;
}


// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.ShowLeaveMatchPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SpectateInterface_C::ShowLeaveMatchPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.ShowLeaveMatchPrompt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.SetupInputBindings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SpectateInterface_C::SetupInputBindings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.SetupInputBindings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.OpenReportMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SpectateInterface_C::OpenReportMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.OpenReportMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.Create Group Health Bars
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SpectateInterface_C::Create_Group_Health_Bars()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.Create Group Health Bars"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.UpdatePlayerHealthBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SpectateInterface_C::UpdatePlayerHealthBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.UpdatePlayerHealthBar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.SetPromptsVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SpectateInterface_C::SetPromptsVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.SetPromptsVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.GetSpectatorInterfaceVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)

void UTBP_UI_SpectateInterface_C::GetSpectatorInterfaceVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.GetSpectatorInterfaceVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_SpectateInterface_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.SpectateeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InSpectatee                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerPlayerState*       InPreviousSpectatee            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SpectateInterface_C::SpectateeChanged(class ATigerPlayerState* InSpectatee, class ATigerPlayerState* InPreviousSpectatee)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.SpectateeChanged"));

	struct
	{
		class ATigerPlayerState*       InSpectatee;
		class ATigerPlayerState*       InPreviousSpectatee;
	} params = {};

	params.InSpectatee = InSpectatee;
	params.InPreviousSpectatee = InPreviousSpectatee;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.RemoveLoadingScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SpectateInterface_C::RemoveLoadingScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.RemoveLoadingScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SpectateInterface_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.PreConstruct"));

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


// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.BndEvt__TBP_UI_SpectateInterface_ReportPrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SpectateInterface_C::BndEvt__TBP_UI_SpectateInterface_ReportPrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.BndEvt__TBP_UI_SpectateInterface_ReportPrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.ReportKeyPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SpectateInterface_C::ReportKeyPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.ReportKeyPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.LeaveMatchPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SpectateInterface_C::LeaveMatchPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.LeaveMatchPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.BndEvt__TBP_UI_SpectateInterface_LeaveMatchPrompt_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SpectateInterface_C::BndEvt__TBP_UI_SpectateInterface_LeaveMatchPrompt_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.BndEvt__TBP_UI_SpectateInterface_LeaveMatchPrompt_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.ExecuteUbergraph_TBP_UI_SpectateInterface
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SpectateInterface_C::ExecuteUbergraph_TBP_UI_SpectateInterface(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SpectateInterface.TBP_UI_SpectateInterface_C.ExecuteUbergraph_TBP_UI_SpectateInterface"));

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
