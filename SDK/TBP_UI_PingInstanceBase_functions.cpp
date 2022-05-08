// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PingInstanceBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.UpdatePillar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PingInstanceBase_C::UpdatePillar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.UpdatePillar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.UpdatePingFade
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PingInstanceBase_C::UpdatePingFade()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.UpdatePingFade"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.UpdateWidgetPositions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InRotationAngle                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingInstanceBase_C::UpdateWidgetPositions(float InRotationAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.UpdateWidgetPositions"));

	struct
	{
		float                          InRotationAngle;
	} params = {};

	params.InRotationAngle = InRotationAngle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.CreateVisualWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPingWorldInstanceUI* OutVisualWidget                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingInstanceBase_C::CreateVisualWidget(class UTigerPingWorldInstanceUI** OutVisualWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.CreateVisualWidget"));

	struct
	{
		class UTigerPingWorldInstanceUI* OutVisualWidget;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutVisualWidget != nullptr)
		*OutVisualWidget = params.OutVisualWidget;
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.UpdateResponseWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PingInstanceBase_C::UpdateResponseWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.UpdateResponseWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.UpdateMapTooltipData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PingInstanceBase_C::UpdateMapTooltipData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.UpdateMapTooltipData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.HideResponseWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InPlayerGroupIndex             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingInstanceBase_C::HideResponseWidget(int InPlayerGroupIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.HideResponseWidget"));

	struct
	{
		int                            InPlayerGroupIndex;
	} params = {};

	params.InPlayerGroupIndex = InPlayerGroupIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.CreateReponseWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InPlayerGroupIndex             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingInstanceBase_C::CreateReponseWidget(int InPlayerGroupIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.CreateReponseWidget"));

	struct
	{
		int                            InPlayerGroupIndex;
	} params = {};

	params.InPlayerGroupIndex = InPlayerGroupIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnHideToolip
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PingInstanceBase_C::OnHideToolip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnHideToolip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnShowTooltip
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PingInstanceBase_C::OnShowTooltip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnShowTooltip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.UpdateVisuals
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsOnScreen                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PingInstanceBase_C::UpdateVisuals(bool bInIsOnScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.UpdateVisuals"));

	struct
	{
		bool                           bInIsOnScreen;
	} params = {};

	params.bInIsOnScreen = bInIsOnScreen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.UpdatePlayerDistance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PingInstanceBase_C::UpdatePlayerDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.UpdatePlayerDistance"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnPlayerResponse
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPingResponse      InResponse                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UTBP_UI_PingInstanceBase_C::OnPlayerResponse(const struct FTigerPingResponse& InResponse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnPlayerResponse"));

	struct
	{
		struct FTigerPingResponse      InResponse;
	} params = {};

	params.InResponse = InResponse;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnPingDataUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPingClientData*    InPingData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingInstanceBase_C::OnPingDataUpdated(class UTigerPingClientData* InPingData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnPingDataUpdated"));

	struct
	{
		class UTigerPingClientData*    InPingData;
	} params = {};

	params.InPingData = InPingData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.RemoveResponseWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_PingResponse_C*  InWidget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInIsShown                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PingInstanceBase_C::RemoveResponseWidget(class UTBP_UI_PingResponse_C* InWidget, bool bInIsShown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.RemoveResponseWidget"));

	struct
	{
		class UTBP_UI_PingResponse_C*  InWidget;
		bool                           bInIsShown;
	} params = {};

	params.InWidget = InWidget;
	params.bInIsShown = bInIsShown;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnInWorldFocusGained
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_PingInstanceBase_C::OnInWorldFocusGained()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnInWorldFocusGained"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnInWorldFocusLost
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_PingInstanceBase_C::OnInWorldFocusLost()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnInWorldFocusLost"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnScreenStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsOnScreen                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PingInstanceBase_C::OnScreenStateChanged(bool bInIsOnScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnScreenStateChanged"));

	struct
	{
		bool                           bInIsOnScreen;
	} params = {};

	params.bInIsOnScreen = bInIsOnScreen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.UpdateOffScreenState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          InRotationDegrees              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingInstanceBase_C::UpdateOffScreenState(float InRotationDegrees)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.UpdateOffScreenState"));

	struct
	{
		float                          InRotationDegrees;
	} params = {};

	params.InRotationDegrees = InRotationDegrees;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnAimChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsAiming                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PingInstanceBase_C::OnAimChanged(bool bIsAiming)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnAimChanged"));

	struct
	{
		bool                           bIsAiming;
	} params = {};

	params.bIsAiming = bIsAiming;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnFadePing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PingInstanceBase_C::OnFadePing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnFadePing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnUnfadePing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PingInstanceBase_C::OnUnfadePing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnUnfadePing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_PingInstanceBase_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnMouseLeave"));

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


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_PingInstanceBase_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnMouseEnter"));

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


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_PingInstanceBase_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingInstanceBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.Tick"));

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


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.ExecuteUbergraph_TBP_UI_PingInstanceBase
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingInstanceBase_C::ExecuteUbergraph_TBP_UI_PingInstanceBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.ExecuteUbergraph_TBP_UI_PingInstanceBase"));

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


// Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.PingEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PingInstanceBase_C::PingEventDispatcher__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstanceBase.TBP_UI_PingInstanceBase_C.PingEventDispatcher__DelegateSignature"));

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
