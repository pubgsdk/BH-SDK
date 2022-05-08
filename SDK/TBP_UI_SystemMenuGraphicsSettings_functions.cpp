// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SystemMenuGraphicsSettings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ApplyChanges
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutShouldShowRevertPrompt      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           OutNeedsRestart                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGraphicsSettings_C::ApplyChanges(bool* OutShouldShowRevertPrompt, bool* OutNeedsRestart)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ApplyChanges"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.HasUnappliedChanges
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutHasUnappliedChanges         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGraphicsSettings_C::HasUnappliedChanges(bool* OutHasUnappliedChanges)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.HasUnappliedChanges"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.SetGammaSettingsValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          UI_Value                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::SetGammaSettingsValue(float UI_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.SetGammaSettingsValue"));

	struct
	{
		float                          UI_Value;
	} params = {};

	params.UI_Value = UI_Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.MapGammaToSettings
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          UI_Value                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Settings_Value                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::MapGammaToSettings(float UI_Value, float* Settings_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.MapGammaToSettings"));

	struct
	{
		float                          UI_Value;
		float                          Settings_Value;
	} params = {};

	params.UI_Value = UI_Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Settings_Value != nullptr)
		*Settings_Value = params.Settings_Value;
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.MapGammaToUI
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Settings_Value                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          UI_Value                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::MapGammaToUI(float Settings_Value, float* UI_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.MapGammaToUI"));

	struct
	{
		float                          Settings_Value;
		float                          UI_Value;
	} params = {};

	params.Settings_Value = Settings_Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (UI_Value != nullptr)
		*UI_Value = params.UI_Value;
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitPS5GraphicsSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::InitPS5GraphicsSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitPS5GraphicsSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.GetAntiAliasingItemVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UTBP_UI_SystemMenuGraphicsSettings_C::GetAntiAliasingItemVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.GetAntiAliasingItemVisibility"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.GetResolutionScaleItemVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UTBP_UI_SystemMenuGraphicsSettings_C::GetResolutionScaleItemVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.GetResolutionScaleItemVisibility"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.GetFsrSettingsItemVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UTBP_UI_SystemMenuGraphicsSettings_C::GetFsrSettingsItemVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.GetFsrSettingsItemVisibility"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitGraphicsSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::InitGraphicsSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitGraphicsSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitDisplaySettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::InitDisplaySettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitDisplaySettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitQualityOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::InitQualityOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitQualityOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.SetQualityOptionLabels
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Carousel_C*      InOptionCarousel               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InOptionCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InUsesCustom                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           InUsesOff                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           InUsesLow                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGraphicsSettings_C::SetQualityOptionLabels(int InOptionCount, bool InUsesCustom, bool InUsesOff, bool InUsesLow, class UTBP_UI_Carousel_C** InOptionCarousel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.SetQualityOptionLabels"));

	struct
	{
		class UTBP_UI_Carousel_C*      InOptionCarousel;
		int                            InOptionCount;
		bool                           InUsesCustom;
		bool                           InUsesOff;
		bool                           InUsesLow;
	} params = {};

	params.InOptionCount = InOptionCount;
	params.InUsesCustom = InUsesCustom;
	params.InUsesOff = InUsesOff;
	params.InUsesLow = InUsesLow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InOptionCarousel != nullptr)
		*InOptionCarousel = params.InOptionCarousel;
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RefreshQualityOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::RefreshQualityOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RefreshQualityOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.SetSubmenuButtonNames
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::SetSubmenuButtonNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.SetSubmenuButtonNames"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.DiscardUnappliedChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::DiscardUnappliedChanges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.DiscardUnappliedChanges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RefreshResolutionOptions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::RefreshResolutionOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RefreshResolutionOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RefreshWindowModeOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::RefreshWindowModeOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RefreshWindowModeOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__ResolutionCarousel_K2Node_ComponentBoundEvent_1_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__ResolutionCarousel_K2Node_ComponentBoundEvent_1_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__ResolutionCarousel_K2Node_ComponentBoundEvent_1_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__DisplayModeCarousel_K2Node_ComponentBoundEvent_2_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__DisplayModeCarousel_K2Node_ComponentBoundEvent_2_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__DisplayModeCarousel_K2Node_ComponentBoundEvent_2_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGraphicsSettings_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.PreConstruct"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__Resolution_TabButton_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__Resolution_TabButton_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__Resolution_TabButton_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__Brightness_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__Brightness_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__Brightness_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__Button_260_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__Button_260_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__Button_260_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnBrightnessConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::OnBrightnessConfirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnBrightnessConfirm"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__GammaSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__GammaSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__GammaSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_VisualEffectCarousel_K2Node_ComponentBoundEvent_8_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_VisualEffectCarousel_K2Node_ComponentBoundEvent_8_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_VisualEffectCarousel_K2Node_ComponentBoundEvent_8_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ViewDistanceCarousel_K2Node_ComponentBoundEvent_9_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_ViewDistanceCarousel_K2Node_ComponentBoundEvent_9_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ViewDistanceCarousel_K2Node_ComponentBoundEvent_9_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_MaterialCarousel_K2Node_ComponentBoundEvent_10_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_MaterialCarousel_K2Node_ComponentBoundEvent_10_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_MaterialCarousel_K2Node_ComponentBoundEvent_10_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ShadowCarousel_K2Node_ComponentBoundEvent_11_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_ShadowCarousel_K2Node_ComponentBoundEvent_11_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ShadowCarousel_K2Node_ComponentBoundEvent_11_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_QualityPresetCarousel_K2Node_ComponentBoundEvent_12_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_QualityPresetCarousel_K2Node_ComponentBoundEvent_12_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_QualityPresetCarousel_K2Node_ComponentBoundEvent_12_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureFilteringCarousel_K2Node_ComponentBoundEvent_13_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureFilteringCarousel_K2Node_ComponentBoundEvent_13_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureFilteringCarousel_K2Node_ComponentBoundEvent_13_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_AntiAliasingCarousel_K2Node_ComponentBoundEvent_14_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_AntiAliasingCarousel_K2Node_ComponentBoundEvent_14_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_AntiAliasingCarousel_K2Node_ComponentBoundEvent_14_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureCarousel_K2Node_ComponentBoundEvent_15_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureCarousel_K2Node_ComponentBoundEvent_15_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureCarousel_K2Node_ComponentBoundEvent_15_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FoliageCarousel_K2Node_ComponentBoundEvent_16_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_FoliageCarousel_K2Node_ComponentBoundEvent_16_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FoliageCarousel_K2Node_ComponentBoundEvent_16_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_VolumetricFogCarousel_K2Node_ComponentBoundEvent_17_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_VolumetricFogCarousel_K2Node_ComponentBoundEvent_17_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_VolumetricFogCarousel_K2Node_ComponentBoundEvent_17_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_VsyncBox_K2Node_ComponentBoundEvent_18_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_VsyncBox_K2Node_ComponentBoundEvent_18_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_VsyncBox_K2Node_ComponentBoundEvent_18_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnQualityOptionChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::OnQualityOptionChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnQualityOptionChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameLimitCarousel_K2Node_ComponentBoundEvent_20_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameLimitCarousel_K2Node_ComponentBoundEvent_20_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameLimitCarousel_K2Node_ComponentBoundEvent_20_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OpenCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::OpenCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OpenCategory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.CloseCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::CloseCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.CloseCategory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FsrQualityCarousel_K2Node_ComponentBoundEvent_25_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_FsrQualityCarousel_K2Node_ComponentBoundEvent_25_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FsrQualityCarousel_K2Node_ComponentBoundEvent_25_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FsrSharpeningSlider_K2Node_ComponentBoundEvent_26_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_FsrSharpeningSlider_K2Node_ComponentBoundEvent_26_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FsrSharpeningSlider_K2Node_ComponentBoundEvent_26_OnValueChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameRateSmoothingBox_K2Node_ComponentBoundEvent_24_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameRateSmoothingBox_K2Node_ComponentBoundEvent_24_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameRateSmoothingBox_K2Node_ComponentBoundEvent_24_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_LightingQualityCarousel_K2Node_ComponentBoundEvent_28_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_LightingQualityCarousel_K2Node_ComponentBoundEvent_28_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_LightingQualityCarousel_K2Node_ComponentBoundEvent_28_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ChromaticAberrationBox_K2Node_ComponentBoundEvent_29_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_ChromaticAberrationBox_K2Node_ComponentBoundEvent_29_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ChromaticAberrationBox_K2Node_ComponentBoundEvent_29_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FilmGrainBox_K2Node_ComponentBoundEvent_30_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_FilmGrainBox_K2Node_ComponentBoundEvent_30_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FilmGrainBox_K2Node_ComponentBoundEvent_30_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_LightShaftsItemBox_K2Node_ComponentBoundEvent_31_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_LightShaftsItemBox_K2Node_ComponentBoundEvent_31_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_LightShaftsItemBox_K2Node_ComponentBoundEvent_31_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_AmbientOcclusionCarousel_K2Node_ComponentBoundEvent_36_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_AmbientOcclusionCarousel_K2Node_ComponentBoundEvent_36_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_AmbientOcclusionCarousel_K2Node_ComponentBoundEvent_36_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_BloomCarousel_K2Node_ComponentBoundEvent_37_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_BloomCarousel_K2Node_ComponentBoundEvent_37_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_BloomCarousel_K2Node_ComponentBoundEvent_37_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_LensFlareCarousel_K2Node_ComponentBoundEvent_38_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_LensFlareCarousel_K2Node_ComponentBoundEvent_38_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_LensFlareCarousel_K2Node_ComponentBoundEvent_38_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_MotionBlurCarousel_K2Node_ComponentBoundEvent_39_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_MotionBlurCarousel_K2Node_ComponentBoundEvent_39_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_MotionBlurCarousel_K2Node_ComponentBoundEvent_39_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ScreenSpaceReflectionCarousel_K2Node_ComponentBoundEvent_40_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_ScreenSpaceReflectionCarousel_K2Node_ComponentBoundEvent_40_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ScreenSpaceReflectionCarousel_K2Node_ComponentBoundEvent_40_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ResolutionScaleSlider_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_ResolutionScaleSlider_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ResolutionScaleSlider_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_SubSurfaceScatteringCarousel_K2Node_ComponentBoundEvent_32_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_SubSurfaceScatteringCarousel_K2Node_ComponentBoundEvent_32_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_SubSurfaceScatteringCarousel_K2Node_ComponentBoundEvent_32_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RevertChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::RevertChanges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RevertChanges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ConfirmApply
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::ConfirmApply()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ConfirmApply"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.DiscardChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::DiscardChanges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.DiscardChanges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ResetSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::ResetSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ResetSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuGraphicsSettings_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ChromaticAberrationBoxPS5_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_ChromaticAberrationBoxPS5_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ChromaticAberrationBoxPS5_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FilmGrainBoxPS5_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_FilmGrainBoxPS5_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FilmGrainBoxPS5_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_MotionBlurBoxPS5_K2Node_ComponentBoundEvent_21_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_MotionBlurBoxPS5_K2Node_ComponentBoundEvent_21_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_MotionBlurBoxPS5_K2Node_ComponentBoundEvent_21_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_GammaSliderPS5_K2Node_ComponentBoundEvent_22_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_GammaSliderPS5_K2Node_ComponentBoundEvent_22_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_GammaSliderPS5_K2Node_ComponentBoundEvent_22_OnValueChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_QualityPresetCarouselPS5_K2Node_ComponentBoundEvent_23_SelectedItemIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::BndEvt__TBP_UI_SystemMenuGraphicsSettings_QualityPresetCarouselPS5_K2Node_ComponentBoundEvent_23_SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_QualityPresetCarouselPS5_K2Node_ComponentBoundEvent_23_SelectedItemIndexChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ExecuteUbergraph_TBP_UI_SystemMenuGraphicsSettings
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuGraphicsSettings_C::ExecuteUbergraph_TBP_UI_SystemMenuGraphicsSettings(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ExecuteUbergraph_TBP_UI_SystemMenuGraphicsSettings"));

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
