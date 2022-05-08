// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ChallengesMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ChangeButtonStyle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChallengesMenu_C::ChangeButtonStyle(class UButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ChangeButtonStyle"));

	struct
	{
		class UButton*                 Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.InitButtonColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::InitButtonColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.InitButtonColors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.SetIndexFromActiveWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::SetIndexFromActiveWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.SetIndexFromActiveWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ValidateTabSelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::ValidateTabSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ValidateTabSelection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.SetWeeklyChallengeHeader
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InWeek                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChallengesMenu_C::SetWeeklyChallengeHeader(int InWeek)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.SetWeeklyChallengeHeader"));

	struct
	{
		int                            InWeek;
	} params = {};

	params.InWeek = InWeek;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.RefreshAllWeeklyChallengeProgress
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::RefreshAllWeeklyChallengeProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.RefreshAllWeeklyChallengeProgress"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.Refresh All Challenge Grids
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::Refresh_All_Challenge_Grids()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.Refresh All Challenge Grids"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.GetDailyExpireText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   OutExpireText                  (CPF_Parm, CPF_OutParm)

void UTBP_UI_ChallengesMenu_C::GetDailyExpireText(struct FText* OutExpireText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.GetDailyExpireText"));

	struct
	{
		struct FText                   OutExpireText;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutExpireText != nullptr)
		*OutExpireText = params.OutExpireText;
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BuildAllChallengeGrids
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::BuildAllChallengeGrids()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BuildAllChallengeGrids"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__WeeklyTabWidget_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::BndEvt__WeeklyTabWidget_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__WeeklyTabWidget_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnBackgroundSceneShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::OnBackgroundSceneShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnBackgroundSceneShown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__DailyTabWidget_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::BndEvt__DailyTabWidget_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__DailyTabWidget_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ChallengeProgressUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInNewDefinitions              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ChallengesMenu_C::ChallengeProgressUpdated(bool bInNewDefinitions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ChallengeProgressUpdated"));

	struct
	{
		bool                           bInNewDefinitions;
	} params = {};

	params.bInNewDefinitions = bInNewDefinitions;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChallengesMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__BackInputPrompt_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::BndEvt__BackInputPrompt_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__BackInputPrompt_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.FadeRightFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::FadeRightFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.FadeRightFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.FadeLeftFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::FadeLeftFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.FadeLeftFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ChallengesMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.PreConstruct"));

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


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__TBP_UI_ChallengesMenu_MasteryTabWidget_K2Node_ComponentBoundEvent_10_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::BndEvt__TBP_UI_ChallengesMenu_MasteryTabWidget_K2Node_ComponentBoundEvent_10_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__TBP_UI_ChallengesMenu_MasteryTabWidget_K2Node_ComponentBoundEvent_10_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__TBP_UI_ChallengesMenu_InputPrompt_Close_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::BndEvt__TBP_UI_ChallengesMenu_InputPrompt_Close_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__TBP_UI_ChallengesMenu_InputPrompt_Close_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.Init Weekly Tab
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengesMenu_C::Init_Weekly_Tab()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.Init Weekly Tab"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ExecuteUbergraph_TBP_UI_ChallengesMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChallengesMenu_C::ExecuteUbergraph_TBP_UI_ChallengesMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ExecuteUbergraph_TBP_UI_ChallengesMenu"));

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
