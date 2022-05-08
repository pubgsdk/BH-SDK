// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Tutorial_ObjectiveAnim_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Tutorial_ObjectiveAnim.TBP_UI_Tutorial_ObjectiveAnim_C.Play_ObjectiveLineAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EUMGSequencePlayMode> AnimDirection                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Tutorial_ObjectiveAnim_C::Play_ObjectiveLineAnimation(TEnumAsByte<EUMGSequencePlayMode> AnimDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_ObjectiveAnim.TBP_UI_Tutorial_ObjectiveAnim_C.Play_ObjectiveLineAnimation"));

	struct
	{
		TEnumAsByte<EUMGSequencePlayMode> AnimDirection;
	} params = {};

	params.AnimDirection = AnimDirection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_ObjectiveAnim.TBP_UI_Tutorial_ObjectiveAnim_C.WidgetAnimationEvt_Objective_Completed_K2Node_WidgetAnimationEvent_4
// (FUNC_BlueprintEvent)

void UTBP_UI_Tutorial_ObjectiveAnim_C::WidgetAnimationEvt_Objective_Completed_K2Node_WidgetAnimationEvent_4()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_ObjectiveAnim.TBP_UI_Tutorial_ObjectiveAnim_C.WidgetAnimationEvt_Objective_Completed_K2Node_WidgetAnimationEvent_4"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_ObjectiveAnim.TBP_UI_Tutorial_ObjectiveAnim_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Tutorial_ObjectiveAnim_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_ObjectiveAnim.TBP_UI_Tutorial_ObjectiveAnim_C.PreConstruct"));

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


// Function TBP_UI_Tutorial_ObjectiveAnim.TBP_UI_Tutorial_ObjectiveAnim_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Tutorial_ObjectiveAnim_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_ObjectiveAnim.TBP_UI_Tutorial_ObjectiveAnim_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_ObjectiveAnim.TBP_UI_Tutorial_ObjectiveAnim_C.ExecuteUbergraph_TBP_UI_Tutorial_ObjectiveAnim
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Tutorial_ObjectiveAnim_C::ExecuteUbergraph_TBP_UI_Tutorial_ObjectiveAnim(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_ObjectiveAnim.TBP_UI_Tutorial_ObjectiveAnim_C.ExecuteUbergraph_TBP_UI_Tutorial_ObjectiveAnim"));

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


// Function TBP_UI_Tutorial_ObjectiveAnim.TBP_UI_Tutorial_ObjectiveAnim_C.OnCompleteObjectiveFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Tutorial_Objective_C* CompletedObjective             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<Enum_Tutorial_ObjectiveIdentifiers> ObjectiveIdentifier            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Tutorial_ObjectiveAnim_C::OnCompleteObjectiveFinished__DelegateSignature(class UTBP_UI_Tutorial_Objective_C* CompletedObjective, TEnumAsByte<Enum_Tutorial_ObjectiveIdentifiers> ObjectiveIdentifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_ObjectiveAnim.TBP_UI_Tutorial_ObjectiveAnim_C.OnCompleteObjectiveFinished__DelegateSignature"));

	struct
	{
		class UTBP_UI_Tutorial_Objective_C* CompletedObjective;
		TEnumAsByte<Enum_Tutorial_ObjectiveIdentifiers> ObjectiveIdentifier;
	} params = {};

	params.CompletedObjective = CompletedObjective;
	params.ObjectiveIdentifier = ObjectiveIdentifier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_ObjectiveAnim.TBP_UI_Tutorial_ObjectiveAnim_C.OnCheckStateChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Tutorial_ObjectiveAnim_C::OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_ObjectiveAnim.TBP_UI_Tutorial_ObjectiveAnim_C.OnCheckStateChanged__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
