// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SystemMenuAudioSettings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.HasUnappliedChanges
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutHasUnappliedChanges         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuAudioSettings_C::HasUnappliedChanges(bool* OutHasUnappliedChanges)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.HasUnappliedChanges"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.ApplyChanges
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutShouldShowRevertPrompt      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           OutNeedsRestart                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuAudioSettings_C::ApplyChanges(bool* OutShouldShowRevertPrompt, bool* OutNeedsRestart)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.ApplyChanges"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.InitAudioOutputDevice
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuAudioSettings_C::InitAudioOutputDevice()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.InitAudioOutputDevice"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.InitAuidoMixPresets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuAudioSettings_C::InitAuidoMixPresets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.InitAuidoMixPresets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.Handle Voip Response
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InCanPerformAction             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuAudioSettings_C::Handle_Voip_Response(bool InCanPerformAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.Handle Voip Response"));

	struct
	{
		bool                           InCanPerformAction;
	} params = {};

	params.InCanPerformAction = InCanPerformAction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.UpdateOutputDevices
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuAudioSettings_C::UpdateOutputDevices()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.UpdateOutputDevices"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.SetComboBoxSelection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_StyledComboBox_C* InComboBox                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuAudioSettings_C::SetComboBoxSelection(class UTBP_UI_StyledComboBox_C* InComboBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.SetComboBoxSelection"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.UpdateInputDevices
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuAudioSettings_C::UpdateInputDevices()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.UpdateInputDevices"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.UpdateVolumeSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuAudioSettings_C::UpdateVolumeSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.UpdateVolumeSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.Update Voip Settings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuAudioSettings_C::Update_Voip_Settings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.Update Voip Settings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.DiscardChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuAudioSettings_C::DiscardChanges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.DiscardChanges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.RevertChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuAudioSettings_C::RevertChanges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.RevertChanges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__SfxVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__SfxVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__SfxVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__DialogueVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__DialogueVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__DialogueVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_UsePushToTalk_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__TBP_UI_SystemMenuAudioSettings_UsePushToTalk_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_UsePushToTalk_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_MicVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__TBP_UI_SystemMenuAudioSettings_MicVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_MicVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_MuteWhenMinimized_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__TBP_UI_SystemMenuAudioSettings_MuteWhenMinimized_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_MuteWhenMinimized_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_EnableDolbyAtmos_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__TBP_UI_SystemMenuAudioSettings_EnableDolbyAtmos_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_EnableDolbyAtmos_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.ResetSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuAudioSettings_C::ResetSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.ResetSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_RecordingDeviceComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SelectedIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__TBP_UI_SystemMenuAudioSettings_RecordingDeviceComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_RecordingDeviceComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_OutputDeviceComboBox_K2Node_ComponentBoundEvent_12_OnSelectionChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SelectedIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__TBP_UI_SystemMenuAudioSettings_OutputDeviceComboBox_K2Node_ComponentBoundEvent_12_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_OutputDeviceComboBox_K2Node_ComponentBoundEvent_12_OnSelectionChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.ConfirmApply
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuAudioSettings_C::ConfirmApply()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.ConfirmApply"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.OpenCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuAudioSettings_C::OpenCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.OpenCategory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuAudioSettings_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_ControllerVolumeSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__TBP_UI_SystemMenuAudioSettings_ControllerVolumeSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_ControllerVolumeSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.CloseCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuAudioSettings_C::CloseCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.CloseCategory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.CheckRestrictedActions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuAudioSettings_C::CheckRestrictedActions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.CheckRestrictedActions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_AudioMixPresetComboBox_K2Node_ComponentBoundEvent_16_OnSelectionChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SelectedIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__TBP_UI_SystemMenuAudioSettings_AudioMixPresetComboBox_K2Node_ComponentBoundEvent_16_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_AudioMixPresetComboBox_K2Node_ComponentBoundEvent_16_OnSelectionChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_AudioOutputDeviceComboBox_1_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SelectedIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__TBP_UI_SystemMenuAudioSettings_AudioOutputDeviceComboBox_1_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_AudioOutputDeviceComboBox_1_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature"));

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


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.OnMouseCaptureEnd(VolumeSliders)
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuAudioSettings_C::OnMouseCaptureEnd_VolumeSliders_()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.OnMouseCaptureEnd(VolumeSliders)"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.ExecuteUbergraph_TBP_UI_SystemMenuAudioSettings
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuAudioSettings_C::ExecuteUbergraph_TBP_UI_SystemMenuAudioSettings(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.ExecuteUbergraph_TBP_UI_SystemMenuAudioSettings"));

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
