// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TitleScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.SetupVeins
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TitleScreen_C::SetupVeins()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.SetupVeins"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.CloseErrorSubscreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TitleScreen_C::CloseErrorSubscreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.CloseErrorSubscreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OpenErrorSubscreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TitleScreen_C::OpenErrorSubscreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OpenErrorSubscreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.HandleInputReaction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TitleScreen_C::HandleInputReaction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.HandleInputReaction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_TitleScreen_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnMouseButtonDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_TitleScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnKeyDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_TitleScreen_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.PreConstruct"));

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


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TitleScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Tick"));

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


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_TitleScreen_C::WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_TitleScreen_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Open
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TitleScreen_C::Open()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Open"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.BndEvt__ErrorSubscreen_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_TitleScreen_C::BndEvt__ErrorSubscreen_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.BndEvt__ErrorSubscreen_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_3
// (FUNC_BlueprintEvent)

void UTBP_UI_TitleScreen_C::WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_4
// (FUNC_BlueprintEvent)

void UTBP_UI_TitleScreen_C::WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_4()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_4"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.ForceClose
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TitleScreen_C::ForceClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.ForceClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.ExecuteUbergraph_TBP_UI_TitleScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TitleScreen_C::ExecuteUbergraph_TBP_UI_TitleScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.ExecuteUbergraph_TBP_UI_TitleScreen"));

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


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnLandingPageFadeOutStarted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TitleScreen_C::OnLandingPageFadeOutStarted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnLandingPageFadeOutStarted__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnLandingPageClosed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TitleScreen_C::OnLandingPageClosed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnLandingPageClosed__DelegateSignature"));

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
