// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TransitionMenuButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.SetBackgroundColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            InBackgroundColor              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TransitionMenuButton_C::SetBackgroundColor(const struct FLinearColor& InBackgroundColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.SetBackgroundColor"));

	struct
	{
		struct FLinearColor            InBackgroundColor;
	} params = {};

	params.InBackgroundColor = InBackgroundColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.IsSelected
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           IsSelected                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_TransitionMenuButton_C::IsSelected(bool* IsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.IsSelected"));

	struct
	{
		bool                           IsSelected;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.SetIsDeselected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::SetIsDeselected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.SetIsDeselected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.SetIsSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::SetIsSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.SetIsSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.CreateCloudBackground
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::CreateCloudBackground()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.CreateCloudBackground"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.PlayPressedOverlayAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EUMGSequencePlayMode> PlayMode                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TransitionMenuButton_C::PlayPressedOverlayAnimation(TEnumAsByte<EUMGSequencePlayMode> PlayMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.PlayPressedOverlayAnimation"));

	struct
	{
		TEnumAsByte<EUMGSequencePlayMode> PlayMode;
	} params = {};

	params.PlayMode = PlayMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.PlayAnimationFromCurrentPosition
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EUMGSequencePlayMode> InPlayMode                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TransitionMenuButton_C::PlayAnimationFromCurrentPosition(class UWidgetAnimation* InAnimation, TEnumAsByte<EUMGSequencePlayMode> InPlayMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.PlayAnimationFromCurrentPosition"));

	struct
	{
		class UWidgetAnimation*        InAnimation;
		TEnumAsByte<EUMGSequencePlayMode> InPlayMode;
	} params = {};

	params.InAnimation = InAnimation;
	params.InPlayMode = InPlayMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.CreateBorderMaterial
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::CreateBorderMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.CreateBorderMaterial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.UpdateBorderOpacity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TransitionMenuButton_C::UpdateBorderOpacity(float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.UpdateBorderOpacity"));

	struct
	{
		float                          InDeltaTime;
	} params = {};

	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TransitionMenuButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.Tick"));

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


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnRemovedFromFocusPath
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UTBP_UI_TransitionMenuButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnRemovedFromFocusPath"));

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params = {};

	params.InFocusEvent = InFocusEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_TransitionMenuButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.PreConstruct"));

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


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnTransitionStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::OnTransitionStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnTransitionStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.RestartAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::RestartAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.RestartAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.WidgetAnimationEvt_Pressed_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::WidgetAnimationEvt_Pressed_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.WidgetAnimationEvt_Pressed_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.DisableInput
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::DisableInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.DisableInput"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.ExecuteUbergraph_TBP_UI_TransitionMenuButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TransitionMenuButton_C::ExecuteUbergraph_TBP_UI_TransitionMenuButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.ExecuteUbergraph_TBP_UI_TransitionMenuButton"));

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


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnUnhovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionMenuButton_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnClicked__DelegateSignature"));

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
