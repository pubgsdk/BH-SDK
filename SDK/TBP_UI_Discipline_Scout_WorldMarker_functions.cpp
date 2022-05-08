// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Discipline_Scout_WorldMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Fade Out Default Widgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Discipline_Scout_WorldMarker_C::Fade_Out_Default_Widgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Fade Out Default Widgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Fade In Default Widgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Discipline_Scout_WorldMarker_C::Fade_In_Default_Widgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Fade In Default Widgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.AreDetectionWidgetsHiddenOrAnimatingToHidden
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           AreHiding                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Discipline_Scout_WorldMarker_C::AreDetectionWidgetsHiddenOrAnimatingToHidden(bool* AreHiding)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.AreDetectionWidgetsHiddenOrAnimatingToHidden"));

	struct
	{
		bool                           AreHiding;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AreHiding != nullptr)
		*AreHiding = params.AreHiding;
}


// Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Toggle Detected Widgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Effect_Size_Multiplier         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Discipline_Scout_WorldMarker_C::Toggle_Detected_Widgets(float Effect_Size_Multiplier, const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Toggle Detected Widgets"));

	struct
	{
		float                          Effect_Size_Multiplier;
		struct FText                   Text;
	} params = {};

	params.Effect_Size_Multiplier = Effect_Size_Multiplier;
	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Play Detected Animations
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Effect_Size_Multiplier         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Should_Hide_Text               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Discipline_Scout_WorldMarker_C::Play_Detected_Animations(float Effect_Size_Multiplier, const struct FText& Text, bool Should_Hide_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Play Detected Animations"));

	struct
	{
		float                          Effect_Size_Multiplier;
		struct FText                   Text;
		bool                           Should_Hide_Text;
	} params = {};

	params.Effect_Size_Multiplier = Effect_Size_Multiplier;
	params.Text = Text;
	params.Should_Hide_Text = Should_Hide_Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Discipline_Scout_WorldMarker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Hide Detected Relevant Widgets
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Discipline_Scout_WorldMarker_C::Hide_Detected_Relevant_Widgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Hide Detected Relevant Widgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Show Detected Relevant Widgets
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Discipline_Scout_WorldMarker_C::Show_Detected_Relevant_Widgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Show Detected Relevant Widgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Fade Out Detected Text
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Discipline_Scout_WorldMarker_C::Fade_Out_Detected_Text()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Fade Out Detected Text"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.UpdateOffScreenState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          InRotationDegrees              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Discipline_Scout_WorldMarker_C::UpdateOffScreenState(float InRotationDegrees)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.UpdateOffScreenState"));

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


// Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.UpdateVisuals
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsOnScreen                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Discipline_Scout_WorldMarker_C::UpdateVisuals(bool bInIsOnScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.UpdateVisuals"));

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


// Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.ExecuteUbergraph_TBP_UI_Discipline_Scout_WorldMarker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Discipline_Scout_WorldMarker_C::ExecuteUbergraph_TBP_UI_Discipline_Scout_WorldMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.ExecuteUbergraph_TBP_UI_Discipline_Scout_WorldMarker"));

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
