// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InWorldIconBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistanceForTextWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              InTextWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InDist2D                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InWorldIconBase_C::UpdatePlayerDistanceForTextWidget(class UTextBlock* InTextWidget, bool InDist2D)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistanceForTextWidget"));

	struct
	{
		class UTextBlock*              InTextWidget;
		bool                           InDist2D;
	} params = {};

	params.InTextWidget = InTextWidget;
	params.InDist2D = InDist2D;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.MoveWidgetsToOffscreenPositions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InAngle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 InTranslationWidget            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 InRotationWidget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 InInverseTranslationWidget     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InWorldIconBase_C::MoveWidgetsToOffscreenPositions(float InAngle, class UWidget* InTranslationWidget, class UWidget* InRotationWidget, class UWidget* InInverseTranslationWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.MoveWidgetsToOffscreenPositions"));

	struct
	{
		float                          InAngle;
		class UWidget*                 InTranslationWidget;
		class UWidget*                 InRotationWidget;
		class UWidget*                 InInverseTranslationWidget;
	} params = {};

	params.InAngle = InAngle;
	params.InTranslationWidget = InTranslationWidget;
	params.InRotationWidget = InRotationWidget;
	params.InInverseTranslationWidget = InInverseTranslationWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateDistanceWidgetScaling
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         InWidgets                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// struct FTS_InWorldIconDistanceScaling InDistanceScalingParams        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InWorldIconBase_C::UpdateDistanceWidgetScaling(TArray<class UWidget*>* InWidgets, struct FTS_InWorldIconDistanceScaling* InDistanceScalingParams)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateDistanceWidgetScaling"));

	struct
	{
		TArray<class UWidget*>         InWidgets;
		struct FTS_InWorldIconDistanceScaling InDistanceScalingParams;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InWidgets != nullptr)
		*InWidgets = params.InWidgets;
	if (InDistanceScalingParams != nullptr)
		*InDistanceScalingParams = params.InDistanceScalingParams;
}


// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateOffScreenWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InAngle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InWorldIconBase_C::UpdateOffScreenWidgets(float InAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateOffScreenWidgets"));

	struct
	{
		float                          InAngle;
	} params = {};

	params.InAngle = InAngle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.GetVerticalIconOffset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          OutIconOffset                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InWorldIconBase_C::GetVerticalIconOffset(float* OutIconOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.GetVerticalIconOffset"));

	struct
	{
		float                          OutIconOffset;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutIconOffset != nullptr)
		*OutIconOffset = params.OutIconOffset;
}


// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.GetHorizontalIconOffset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          OutIconOffset                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InWorldIconBase_C::GetHorizontalIconOffset(float* OutIconOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.GetHorizontalIconOffset"));

	struct
	{
		float                          OutIconOffset;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutIconOffset != nullptr)
		*OutIconOffset = params.OutIconOffset;
}


// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateVisuals
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsOnScreen                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InWorldIconBase_C::UpdateVisuals(bool bInIsOnScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateVisuals"));

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


// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InWorldIconBase_C::UpdatePlayerDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistance"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateOffScreenState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          InRotationDegrees              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InWorldIconBase_C::UpdateOffScreenState(float InRotationDegrees)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateOffScreenState"));

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


// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.OnScreenStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsOnScreen                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InWorldIconBase_C::OnScreenStateChanged(bool bInIsOnScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.OnScreenStateChanged"));

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


// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.OnInnerWidgetChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_InWorldIconBase_C::OnInnerWidgetChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.OnInnerWidgetChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_InWorldIconBase_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistanceScalingWidgets
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_InWorldIconBase_C::UpdatePlayerDistanceScalingWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistanceScalingWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.ExecuteUbergraph_TBP_UI_InWorldIconBase
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InWorldIconBase_C::ExecuteUbergraph_TBP_UI_InWorldIconBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.ExecuteUbergraph_TBP_UI_InWorldIconBase"));

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
