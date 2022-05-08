// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_QuestScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.RefreshItemPreviewButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_QuestScreen_C::RefreshItemPreviewButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.RefreshItemPreviewButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.HideItemPreview
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_QuestScreen_C::HideItemPreview()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.HideItemPreview"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.ShowItemPreview
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            InItemToShow                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_QuestScreen_C::ShowItemPreview(const struct FTigerItemId& InItemToShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.ShowItemPreview"));

	struct
	{
		struct FTigerItemId            InItemToShow;
	} params = {};

	params.InItemToShow = InItemToShow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.SelectFirstElementOfCurrentGrid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_QuestScreen_C::SelectFirstElementOfCurrentGrid()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.SelectFirstElementOfCurrentGrid"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.OnQuestSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerQuest*             InSelectedQuest                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_QuestScreen_C::OnQuestSelected(class UTigerQuest* InSelectedQuest)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.OnQuestSelected"));

	struct
	{
		class UTigerQuest*             InSelectedQuest;
	} params = {};

	params.InSelectedQuest = InSelectedQuest;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.RefreshHeaderAndButtons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_QuestScreen_C::RefreshHeaderAndButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.RefreshHeaderAndButtons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.RebuildWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_QuestScreen_C::RebuildWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.RebuildWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__QuestsLeftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_QuestScreen_C::BndEvt__QuestsLeftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__QuestsLeftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__QuestsRightButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_QuestScreen_C::BndEvt__QuestsRightButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__QuestsRightButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_QuestScreen_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__PreviewInputPrompt_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_QuestScreen_C::BndEvt__PreviewInputPrompt_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__PreviewInputPrompt_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__HidePreviewInputPrompt_1_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_QuestScreen_C::BndEvt__HidePreviewInputPrompt_1_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__HidePreviewInputPrompt_1_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__TBP_UI_ChallengesMenu_InputPrompt_Preview_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_QuestScreen_C::BndEvt__TBP_UI_ChallengesMenu_InputPrompt_Preview_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__TBP_UI_ChallengesMenu_InputPrompt_Preview_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__TBP_UI_ChallengesMenu_InputPrompt_HidePreview_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_QuestScreen_C::BndEvt__TBP_UI_ChallengesMenu_InputPrompt_HidePreview_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__TBP_UI_ChallengesMenu_InputPrompt_HidePreview_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_QuestScreen_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.PreConstruct"));

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


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.OnBackgroundSceneShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_QuestScreen_C::OnBackgroundSceneShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.OnBackgroundSceneShown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_QuestScreen_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__TBP_UI_QuestScreen_InputPrompt_Close_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_QuestScreen_C::BndEvt__TBP_UI_QuestScreen_InputPrompt_Close_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__TBP_UI_QuestScreen_InputPrompt_Close_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__TBP_UI_QuestScreen_InputPrompt_Close_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_QuestScreen_C::BndEvt__TBP_UI_QuestScreen_InputPrompt_Close_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__TBP_UI_QuestScreen_InputPrompt_Close_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.ExecuteUbergraph_TBP_UI_QuestScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_QuestScreen_C::ExecuteUbergraph_TBP_UI_QuestScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.ExecuteUbergraph_TBP_UI_QuestScreen"));

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
