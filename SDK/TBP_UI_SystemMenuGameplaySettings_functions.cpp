// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SystemMenuGameplaySettings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.HasUnappliedChanges
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutHasUnappliedChanges         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::HasUnappliedChanges(bool* OutHasUnappliedChanges)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.HasUnappliedChanges"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.ApplyChanges
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutShouldShowRevertPrompt      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           OutNeedsRestart                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::ApplyChanges(bool* OutShouldShowRevertPrompt, bool* OutNeedsRestart)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.ApplyChanges"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BindButtons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::BindButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BindButtons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateDropdownLists
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::UpdateDropdownLists()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateDropdownLists"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateLanguageSelections
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::UpdateLanguageSelections()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateLanguageSelections"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SetComboBoxSelection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_StyledComboBox_C* InComboBox                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::SetComboBoxSelection(class UTBP_UI_StyledComboBox_C* InComboBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SetComboBoxSelection"));

	struct
	{
		class UTBP_UI_StyledComboBox_C* InComboBox;
	} params = {};

	params.InComboBox = InComboBox;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SetSubmenuButtonNames
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::SetSubmenuButtonNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SetSubmenuButtonNames"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateWeaponCycleStyleDropdownList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_StyledComboBox_C* InDropdownBox                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInIsGamepad                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::UpdateWeaponCycleStyleDropdownList(class UTBP_UI_StyledComboBox_C* InDropdownBox, bool bInIsGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateWeaponCycleStyleDropdownList"));

	struct
	{
		class UTBP_UI_StyledComboBox_C* InDropdownBox;
		bool                           bInIsGamepad;
	} params = {};

	params.InDropdownBox = InDropdownBox;
	params.bInIsGamepad = bInIsGamepad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateLanguageSelectionDropdownList
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_StyledComboBox_C* InDropdownBox                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FString>         InSelectableCultures           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FString>         InAvailableLanguagesArray      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 InCurrentLanguage              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::UpdateLanguageSelectionDropdownList(class UTBP_UI_StyledComboBox_C* InDropdownBox, const struct FString& InCurrentLanguage, TArray<struct FString>* InSelectableCultures, TArray<struct FString>* InAvailableLanguagesArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateLanguageSelectionDropdownList"));

	struct
	{
		class UTBP_UI_StyledComboBox_C* InDropdownBox;
		TArray<struct FString>         InSelectableCultures;
		TArray<struct FString>         InAvailableLanguagesArray;
		struct FString                 InCurrentLanguage;
	} params = {};

	params.InDropdownBox = InDropdownBox;
	params.InCurrentLanguage = InCurrentLanguage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InSelectableCultures != nullptr)
		*InSelectableCultures = params.InSelectableCultures;
	if (InAvailableLanguagesArray != nullptr)
		*InAvailableLanguagesArray = params.InAvailableLanguagesArray;
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.PresetChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::PresetChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.PresetChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SwitchToCustomPreset
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::SwitchToCustomPreset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SwitchToCustomPreset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateInputPresetsDropdownList
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::UpdateInputPresetsDropdownList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateInputPresetsDropdownList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::UpdateSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.ConfirmApply
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::ConfirmApply()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.ConfirmApply"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.DiscardChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::DiscardChanges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.DiscardChanges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.RevertChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::RevertChanges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.RevertChanges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature"));

	struct
	{
		float                          BoxValue;
		float                          SliderValue;
	} params = {};

	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature"));

	struct
	{
		float                          BoxValue;
		float                          SliderValue;
	} params = {};

	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature"));

	struct
	{
		float                          BoxValue;
		float                          SliderValue;
	} params = {};

	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__HoldForHeightenedSensesToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__HoldForHeightenedSensesToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__HoldForHeightenedSensesToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__HoldForInventoryToggle_K2Node_ComponentBoundEvent_13_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__HoldForInventoryToggle_K2Node_ComponentBoundEvent_13_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__HoldForInventoryToggle_K2Node_ComponentBoundEvent_13_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.PreConstruct"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGamepadWeaponStyleChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SelectedIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::OnGamepadWeaponStyleChanged(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGamepadWeaponStyleChanged"));

	struct
	{
		struct FText                   SelectedItem;
		int                            SelectedIndex;
	} params = {};

	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGameplayPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::OnGameplayPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGameplayPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnLanguagePressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::OnLanguagePressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnLanguagePressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.InputPresetsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SelectedIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::InputPresetsChanged(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.InputPresetsChanged"));

	struct
	{
		struct FText                   SelectedItem;
		int                            SelectedIndex;
	} params = {};

	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.TextLanguageSelectChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SelectedIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::TextLanguageSelectChanged(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.TextLanguageSelectChanged"));

	struct
	{
		struct FText                   SelectedItem;
		int                            SelectedIndex;
	} params = {};

	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.AudioLanguageSelectChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SelectedIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::AudioLanguageSelectChanged(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.AudioLanguageSelectChanged"));

	struct
	{
		struct FText                   SelectedItem;
		int                            SelectedIndex;
	} params = {};

	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnKeyboardMousePressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::OnKeyboardMousePressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnKeyboardMousePressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGamepadPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::OnGamepadPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGamepadPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature"));

	struct
	{
		float                          BoxValue;
		float                          SliderValue;
	} params = {};

	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature"));

	struct
	{
		float                          BoxValue;
		float                          SliderValue;
	} params = {};

	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature"));

	struct
	{
		float                          BoxValue;
		float                          SliderValue;
	} params = {};

	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnMouseWeaponStyleChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SelectedIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::OnMouseWeaponStyleChanged(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnMouseWeaponStyleChanged"));

	struct
	{
		struct FText                   SelectedItem;
		int                            SelectedIndex;
	} params = {};

	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__AutoSwapDefaultPistol_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__AutoSwapDefaultPistol_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__AutoSwapDefaultPistol_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MuteGeneralChatToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MuteGeneralChatToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MuteGeneralChatToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_ResetToDefaultsButton_1_K2Node_ComponentBoundEvent_2_OnWidgetClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_ResetToDefaultsButton_1_K2Node_ComponentBoundEvent_2_OnWidgetClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_ResetToDefaultsButton_1_K2Node_ComponentBoundEvent_2_OnWidgetClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.ResetSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::ResetSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.ResetSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_HoldJumpToClimbGamepad_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_HoldJumpToClimbGamepad_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_HoldJumpToClimbGamepad_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_HoldJumpToClimbKeyboard_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_HoldJumpToClimbKeyboard_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_HoldJumpToClimbKeyboard_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_RumbleIntensitySlider_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_RumbleIntensitySlider_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_RumbleIntensitySlider_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature"));

	struct
	{
		float                          BoxValue;
		float                          SliderValue;
	} params = {};

	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadAimAssistSlowDownToggle_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadAimAssistSlowDownToggle_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadAimAssistSlowDownToggle_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadAimAssistRotationToggle_K2Node_ComponentBoundEvent_14_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadAimAssistRotationToggle_K2Node_ComponentBoundEvent_14_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadAimAssistRotationToggle_K2Node_ComponentBoundEvent_14_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadAdaptiveTriggersToggle_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadAdaptiveTriggersToggle_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadAdaptiveTriggersToggle_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadAdaptiveTriggerVibrationToggle_K2Node_ComponentBoundEvent_20_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadAdaptiveTriggerVibrationToggle_K2Node_ComponentBoundEvent_20_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadAdaptiveTriggerVibrationToggle_K2Node_ComponentBoundEvent_20_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OpenCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::OpenCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OpenCategory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.CloseCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::CloseCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.CloseCategory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_HoldToAim_K2Node_ComponentBoundEvent_21_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_HoldToAim_K2Node_ComponentBoundEvent_21_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_HoldToAim_K2Node_ComponentBoundEvent_21_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_RotateMiniMapToggle_K2Node_ComponentBoundEvent_22_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_RotateMiniMapToggle_K2Node_ComponentBoundEvent_22_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_RotateMiniMapToggle_K2Node_ComponentBoundEvent_22_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_MouseInvertXToggle_K2Node_ComponentBoundEvent_23_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_MouseInvertXToggle_K2Node_ComponentBoundEvent_23_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_MouseInvertXToggle_K2Node_ComponentBoundEvent_23_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadInvertXToggle_K2Node_ComponentBoundEvent_24_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadInvertXToggle_K2Node_ComponentBoundEvent_24_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadInvertXToggle_K2Node_ComponentBoundEvent_24_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalMouseSensitivitySlider_K2Node_ComponentBoundEvent_25_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalMouseSensitivitySlider_K2Node_ComponentBoundEvent_25_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalMouseSensitivitySlider_K2Node_ComponentBoundEvent_25_OnValueChanged__DelegateSignature"));

	struct
	{
		float                          BoxValue;
		float                          SliderValue;
	} params = {};

	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalMouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_26_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalMouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_26_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalMouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_26_OnValueChanged__DelegateSignature"));

	struct
	{
		float                          BoxValue;
		float                          SliderValue;
	} params = {};

	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalMouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalMouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalMouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature"));

	struct
	{
		float                          BoxValue;
		float                          SliderValue;
	} params = {};

	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalGamepadSensitivitySlider_K2Node_ComponentBoundEvent_28_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalGamepadSensitivitySlider_K2Node_ComponentBoundEvent_28_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalGamepadSensitivitySlider_K2Node_ComponentBoundEvent_28_OnValueChanged__DelegateSignature"));

	struct
	{
		float                          BoxValue;
		float                          SliderValue;
	} params = {};

	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalGamepadAimingSensitivitySlider_K2Node_ComponentBoundEvent_29_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalGamepadAimingSensitivitySlider_K2Node_ComponentBoundEvent_29_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalGamepadAimingSensitivitySlider_K2Node_ComponentBoundEvent_29_OnValueChanged__DelegateSignature"));

	struct
	{
		float                          BoxValue;
		float                          SliderValue;
	} params = {};

	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalGamepadScopedSensitivitySlider_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalGamepadScopedSensitivitySlider_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalGamepadScopedSensitivitySlider_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature"));

	struct
	{
		float                          BoxValue;
		float                          SliderValue;
	} params = {};

	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_EnableCrossplayToggle_K2Node_ComponentBoundEvent_31_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_EnableCrossplayToggle_K2Node_ComponentBoundEvent_31_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_EnableCrossplayToggle_K2Node_ComponentBoundEvent_31_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.CrossplaySettingLockChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSettingIsLocked               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGameplaySettings_C::CrossplaySettingLockChanged(bool bSettingIsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.CrossplaySettingLockChanged"));

	struct
	{
		bool                           bSettingIsLocked;
	} params = {};

	params.bSettingIsLocked = bSettingIsLocked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_ConflictStreamerPrompt_K2Node_ComponentBoundEvent_32_Confirm__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_ConflictStreamerPrompt_K2Node_ComponentBoundEvent_32_Confirm__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_ConflictStreamerPrompt_K2Node_ComponentBoundEvent_32_Confirm__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_ConflictStreamerPrompt_K2Node_ComponentBoundEvent_34_Decline__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__TBP_UI_SystemMenuGameplaySettings_ConflictStreamerPrompt_K2Node_ComponentBoundEvent_34_Decline__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__TBP_UI_SystemMenuGameplaySettings_ConflictStreamerPrompt_K2Node_ComponentBoundEvent_34_Decline__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.ExecuteUbergraph_TBP_UI_SystemMenuGameplaySettings
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGameplaySettings_C::ExecuteUbergraph_TBP_UI_SystemMenuGameplaySettings(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.ExecuteUbergraph_TBP_UI_SystemMenuGameplaySettings"));

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
