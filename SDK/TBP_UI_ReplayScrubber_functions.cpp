// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ReplayScrubber_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Update Checkmark Color on Focus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPanelWidget*            InCheckMark                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ReplayScrubber_C::Update_Checkmark_Color_on_Focus(class UPanelWidget* InCheckMark)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Update Checkmark Color on Focus"));

	struct
	{
		class UPanelWidget*            InCheckMark;
	} params = {};

	params.InCheckMark = InCheckMark;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Update Focus Display
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCanvasPanel*            InCanvasToUpdate               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ReplayScrubber_C::Update_Focus_Display(class UCanvasPanel* InCanvasToUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Update Focus Display"));

	struct
	{
		class UCanvasPanel*            InCanvasToUpdate;
	} params = {};

	params.InCanvasToUpdate = InCanvasToUpdate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Set Current KeyFrame
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            KeyframeIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ReplayScrubber_C::Set_Current_KeyFrame(int KeyframeIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Set Current KeyFrame"));

	struct
	{
		int                            KeyframeIndex;
	} params = {};

	params.KeyframeIndex = KeyframeIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Update KeyFraming Buttons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InKeyFrameID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBP_ReplayController_C* InReplayController             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UTBP_UI_ReplayScrubber_C::Update_KeyFraming_Buttons(int InKeyFrameID, class ATBP_ReplayController_C* InReplayController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Update KeyFraming Buttons"));

	struct
	{
		int                            InKeyFrameID;
		class ATBP_ReplayController_C* InReplayController;
	} params = {};

	params.InKeyFrameID = InKeyFrameID;
	params.InReplayController = InReplayController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Update Button Color on Focus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UButton*                 InButton                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ReplayScrubber_C::Update_Button_Color_on_Focus(class UButton* InButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Update Button Color on Focus"));

	struct
	{
		class UButton*                 InButton;
	} params = {};

	params.InButton = InButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Update Slider Color on Focus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USlider*                 InSlider                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ReplayScrubber_C::Update_Slider_Color_on_Focus(class USlider* InSlider)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Update Slider Color on Focus"));

	struct
	{
		class USlider*                 InSlider;
	} params = {};

	params.InSlider = InSlider;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__Pause_K2Node_ComponentBoundEvent_132_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::BndEvt__Pause_K2Node_ComponentBoundEvent_132_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__Pause_K2Node_ComponentBoundEvent_132_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayController_SpeedSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayController_SpeedSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayController_SpeedSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_CameraSpeedSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_CameraSpeedSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_CameraSpeedSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_CameraMoveSnapshot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_CameraMoveSnapshot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_CameraMoveSnapshot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_JumpToFrame_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_JumpToFrame_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_JumpToFrame_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_InputFrame_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_InputFrame_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_InputFrame_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_NextKeyframe_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_NextKeyframe_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_NextKeyframe_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_PreviousKeyframe_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_PreviousKeyframe_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_PreviousKeyframe_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_RemoveFrame_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_RemoveFrame_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_RemoveFrame_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_ReplaceFrame_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_ReplaceFrame_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_ReplaceFrame_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_TeleportToKeyframe_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_TeleportToKeyframe_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_TeleportToKeyframe_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_ViewKeyframe_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_ViewKeyframe_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_ViewKeyframe_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_SaveLoadView_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_SaveLoadView_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_SaveLoadView_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_SaveCamera_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_SaveCamera_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_SaveCamera_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_LoadCamera_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_LoadCamera_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_LoadCamera_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_OpenMoveSettings_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_OpenMoveSettings_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_OpenMoveSettings_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_MoveTypeParameter_K2Node_ComponentBoundEvent_17_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_MoveTypeParameter_K2Node_ComponentBoundEvent_17_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_MoveTypeParameter_K2Node_ComponentBoundEvent_17_OnFloatValueChangedEvent__DelegateSignature"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_UseLinearCheckbox_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_UseLinearCheckbox_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_UseLinearCheckbox_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature"));

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


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_ToggleKeyFraming_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_ToggleKeyFraming_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_ToggleKeyFraming_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_UseTransitions_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ReplayScrubber_C::BndEvt__TBP_UI_ReplayScrubber_UseTransitions_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TBP_UI_ReplayScrubber_UseTransitions_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature"));

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


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.AdvanceFrame
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::AdvanceFrame()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.AdvanceFrame"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.DecrementFrame
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::DecrementFrame()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.DecrementFrame"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.ReplaceFrameBind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::ReplaceFrameBind()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.ReplaceFrameBind"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.RemoveFrameBind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::RemoveFrameBind()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.RemoveFrameBind"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.ViewFrameBind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::ViewFrameBind()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.ViewFrameBind"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.ToggleSmoothTransitions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::ToggleSmoothTransitions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.ToggleSmoothTransitions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.InsertFrameBind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::InsertFrameBind()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.InsertFrameBind"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.ToggleLinearMoves
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::ToggleLinearMoves()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.ToggleLinearMoves"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.UpdateSpeedDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::UpdateSpeedDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.UpdateSpeedDisplay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.UpdateMovementSpeedDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::UpdateMovementSpeedDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.UpdateMovementSpeedDisplay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.UpdatePauseDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::UpdatePauseDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.UpdatePauseDisplay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Update Roll Inputs
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::Update_Roll_Inputs()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Update Roll Inputs"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Update Look Speed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ReplayScrubber_C::Update_Look_Speed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Update Look Speed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TimeSlider_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ReplayScrubber_C::BndEvt__TimeSlider_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.BndEvt__TimeSlider_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ReplayScrubber_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.Tick"));

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


// Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.ExecuteUbergraph_TBP_UI_ReplayScrubber
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ReplayScrubber_C::ExecuteUbergraph_TBP_UI_ReplayScrubber(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ReplayScrubber.TBP_UI_ReplayScrubber_C.ExecuteUbergraph_TBP_UI_ReplayScrubber"));

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
