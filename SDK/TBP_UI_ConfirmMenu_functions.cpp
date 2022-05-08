// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ConfirmMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.SetTitleText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   TitleText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ConfirmMenu_C::SetTitleText(const struct FText& TitleText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.SetTitleText"));

	struct
	{
		struct FText                   TitleText;
	} params = {};

	params.TitleText = TitleText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Hide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TryFadeOut                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ConfirmMenu_C::Hide(bool TryFadeOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Hide"));

	struct
	{
		bool                           TryFadeOut;
	} params = {};

	params.TryFadeOut = TryFadeOut;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Show
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ConfirmMenu_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Show"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ConfirmMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.PreConstruct"));

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


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Yes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ConfirmMenu_C::Yes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Yes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.No
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ConfirmMenu_C::No()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.No"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.BndEvt__ConfirmWidget_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ConfirmMenu_C::BndEvt__ConfirmWidget_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.BndEvt__ConfirmWidget_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.BndEvt__DeclineWidget_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ConfirmMenu_C::BndEvt__DeclineWidget_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.BndEvt__DeclineWidget_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ConfirmMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ConfirmMenu_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.InitCountdown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InSeconds                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ConfirmMenu_C::InitCountdown(int InSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.InitCountdown"));

	struct
	{
		int                            InSeconds;
	} params = {};

	params.InSeconds = InSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.StopCountdown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ConfirmMenu_C::StopCountdown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.StopCountdown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.BndEvt__TBP_UI_ConfirmMenu_DeclineWidget_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ConfirmMenu_C::BndEvt__TBP_UI_ConfirmMenu_DeclineWidget_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.BndEvt__TBP_UI_ConfirmMenu_DeclineWidget_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.BndEvt__TBP_UI_ConfirmMenu_ConfirmWidget_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ConfirmMenu_C::BndEvt__TBP_UI_ConfirmMenu_ConfirmWidget_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.BndEvt__TBP_UI_ConfirmMenu_ConfirmWidget_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.ExecuteUbergraph_TBP_UI_ConfirmMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ConfirmMenu_C::ExecuteUbergraph_TBP_UI_ConfirmMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.ExecuteUbergraph_TBP_UI_ConfirmMenu"));

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


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.CountdownFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ConfirmMenu_C::CountdownFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.CountdownFinished__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Decline__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ConfirmMenu_C::Decline__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Decline__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Confirm__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ConfirmMenu_C::Confirm__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Confirm__DelegateSignature"));

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
