// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SystemMenuStreamer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.ApplyChanges
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutShouldShowRevertPrompt      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           OutNeedsRestart                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuStreamer_C::ApplyChanges(bool* OutShouldShowRevertPrompt, bool* OutNeedsRestart)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.ApplyChanges"));

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


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.HasUnappliedChanges
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutHasUnappliedChanges         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuStreamer_C::HasUnappliedChanges(bool* OutHasUnappliedChanges)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.HasUnappliedChanges"));

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


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.UpdateHighlights
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 InSelectedStreamerOption       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ClearAll                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuStreamer_C::UpdateHighlights(class UWidget* InSelectedStreamerOption, bool ClearAll)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.UpdateHighlights"));

	struct
	{
		class UWidget*                 InSelectedStreamerOption;
		bool                           ClearAll;
	} params = {};

	params.InSelectedStreamerOption = InSelectedStreamerOption;
	params.ClearAll = ClearAll;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.UpdateHeaderAndTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InHeader                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InDescription                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_SystemMenuStreamer_C::UpdateHeaderAndTitle(const struct FText& InHeader, const struct FText& InDescription)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.UpdateHeaderAndTitle"));

	struct
	{
		struct FText                   InHeader;
		struct FText                   InDescription;
	} params = {};

	params.InHeader = InHeader;
	params.InDescription = InDescription;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.UpdateVisibleSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuStreamer_C::UpdateVisibleSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.UpdateVisibleSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.DiscardChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuStreamer_C::DiscardChanges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.DiscardChanges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.RevertChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuStreamer_C::RevertChanges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.RevertChanges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_ScrambleOtherNamesToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuStreamer_C::BndEvt__TBP_UI_SystemMenuStreamer_ScrambleOtherNamesToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_ScrambleOtherNamesToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_HideNameToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuStreamer_C::BndEvt__TBP_UI_SystemMenuStreamer_HideNameToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_HideNameToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_HidePlayerMessagesToggle_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuStreamer_C::BndEvt__TBP_UI_SystemMenuStreamer_HidePlayerMessagesToggle_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_HidePlayerMessagesToggle_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_HideKillFeedToggle_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuStreamer_C::BndEvt__TBP_UI_SystemMenuStreamer_HideKillFeedToggle_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_HideKillFeedToggle_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_QualityPresetCarousel_K2Node_ComponentBoundEvent_4_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuStreamer_C::BndEvt__TBP_UI_SystemMenuStreamer_QualityPresetCarousel_K2Node_ComponentBoundEvent_4_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_QualityPresetCarousel_K2Node_ComponentBoundEvent_4_SelectedItemIndexChanged__DelegateSignature"));

	struct
	{
		int                            NewIndex;
	} params = {};

	params.NewIndex = NewIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.ResetSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuStreamer_C::ResetSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.ResetSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_HideMiniMapToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuStreamer_C::BndEvt__TBP_UI_SystemMenuStreamer_HideMiniMapToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_HideMiniMapToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_HideNotificationsToggle_K2Node_ComponentBoundEvent_6_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuStreamer_C::BndEvt__TBP_UI_SystemMenuStreamer_HideNotificationsToggle_K2Node_ComponentBoundEvent_6_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_HideNotificationsToggle_K2Node_ComponentBoundEvent_6_OnCheckStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuStreamer_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuStreamer_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_HidePlayerCurrencyToggle_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuStreamer_C::BndEvt__TBP_UI_SystemMenuStreamer_HidePlayerCurrencyToggle_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_HidePlayerCurrencyToggle_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.ConfirmApply
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuStreamer_C::ConfirmApply()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.ConfirmApply"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.CloseCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuStreamer_C::CloseCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.CloseCategory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuStreamer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.OpenCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuStreamer_C::OpenCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.OpenCategory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_HidePlayerCurrencyToggle_1_K2Node_ComponentBoundEvent_6_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuStreamer_C::BndEvt__TBP_UI_SystemMenuStreamer_HidePlayerCurrencyToggle_1_K2Node_ComponentBoundEvent_6_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_HidePlayerCurrencyToggle_1_K2Node_ComponentBoundEvent_6_OnCheckStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_ConflictPrompt_K2Node_ComponentBoundEvent_8_Confirm__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuStreamer_C::BndEvt__TBP_UI_SystemMenuStreamer_ConflictPrompt_K2Node_ComponentBoundEvent_8_Confirm__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_ConflictPrompt_K2Node_ComponentBoundEvent_8_Confirm__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_ConflictPrompt_K2Node_ComponentBoundEvent_10_Decline__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuStreamer_C::BndEvt__TBP_UI_SystemMenuStreamer_ConflictPrompt_K2Node_ComponentBoundEvent_10_Decline__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.BndEvt__TBP_UI_SystemMenuStreamer_ConflictPrompt_K2Node_ComponentBoundEvent_10_Decline__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.ExecuteUbergraph_TBP_UI_SystemMenuStreamer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuStreamer_C::ExecuteUbergraph_TBP_UI_SystemMenuStreamer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C.ExecuteUbergraph_TBP_UI_SystemMenuStreamer"));

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
