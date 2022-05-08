// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TransitionHorizontalFadeSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.SetFadeWidth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InLeftFadeWidth                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InRightFadeWidth               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TransitionHorizontalFadeSlot_C::SetFadeWidth(float InLeftFadeWidth, float InRightFadeWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.SetFadeWidth"));

	struct
	{
		float                          InLeftFadeWidth;
		float                          InRightFadeWidth;
	} params = {};

	params.InLeftFadeWidth = InLeftFadeWidth;
	params.InRightFadeWidth = InRightFadeWidth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.SetAnimationDelay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InAnimationDelay               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bTriggerIntroAnimation         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_TransitionHorizontalFadeSlot_C::SetAnimationDelay(float InAnimationDelay, bool bTriggerIntroAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.SetAnimationDelay"));

	struct
	{
		float                          InAnimationDelay;
		bool                           bTriggerIntroAnimation;
	} params = {};

	params.InAnimationDelay = InAnimationDelay;
	params.bTriggerIntroAnimation = bTriggerIntroAnimation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.SetColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            InColor                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TransitionHorizontalFadeSlot_C::SetColor(const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.SetColor"));

	struct
	{
		struct FLinearColor            InColor;
	} params = {};

	params.InColor = InColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_TransitionHorizontalFadeSlot_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_TransitionHorizontalFadeSlot_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.TriggerInAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionHorizontalFadeSlot_C::TriggerInAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.TriggerInAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_TransitionHorizontalFadeSlot_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.PreConstruct"));

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


// Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.OnTransitionStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionHorizontalFadeSlot_C::OnTransitionStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.OnTransitionStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.ExecuteUbergraph_TBP_UI_TransitionHorizontalFadeSlot
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TransitionHorizontalFadeSlot_C::ExecuteUbergraph_TBP_UI_TransitionHorizontalFadeSlot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.ExecuteUbergraph_TBP_UI_TransitionHorizontalFadeSlot"));

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
