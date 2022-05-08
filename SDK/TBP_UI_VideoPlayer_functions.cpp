// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_VideoPlayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.SetFullscreenIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Expanded                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_VideoPlayer_C::SetFullscreenIcon(bool Expanded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.SetFullscreenIcon"));

	struct
	{
		bool                           Expanded;
	} params = {};

	params.Expanded = Expanded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Hide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_VideoPlayer_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Hide"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Show
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMediaSource*            InMediaSource                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VideoPlayer_C::Show(class UMediaSource* InMediaSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Show"));

	struct
	{
		class UMediaSource*            InMediaSource;
	} params = {};

	params.InMediaSource = InMediaSource;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_VideoPlayer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMediaOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 OpenedUrl                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VideoPlayer_C::OnMediaOpened(const struct FString& OpenedUrl)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMediaOpened"));

	struct
	{
		struct FString                 OpenedUrl;
	} params = {};

	params.OpenedUrl = OpenedUrl;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.BndEvt__PauseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_VideoPlayer_C::BndEvt__PauseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.BndEvt__PauseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VideoPlayer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Tick"));

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


// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubMouseCaptureBegin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_VideoPlayer_C::OnScrubMouseCaptureBegin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubMouseCaptureBegin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubMouseCaptureEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_VideoPlayer_C::OnScrubMouseCaptureEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubMouseCaptureEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubValueChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VideoPlayer_C::OnScrubValueChanged(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubValueChanged"));

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


// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_VideoPlayer_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMouseEnter"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_VideoPlayer_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMouseLeave"));

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.BndEvt__FullscreenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_VideoPlayer_C::BndEvt__FullscreenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.BndEvt__FullscreenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_VideoPlayer_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.RestartVideo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_VideoPlayer_C::RestartVideo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.RestartVideo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.ExecuteUbergraph_TBP_UI_VideoPlayer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VideoPlayer_C::ExecuteUbergraph_TBP_UI_VideoPlayer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.ExecuteUbergraph_TBP_UI_VideoPlayer"));

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


// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.FullscreenButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_VideoPlayer_C::FullscreenButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.FullscreenButtonPressed__DelegateSignature"));

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
