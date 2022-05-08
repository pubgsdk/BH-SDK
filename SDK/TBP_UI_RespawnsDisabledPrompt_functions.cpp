// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_RespawnsDisabledPrompt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.GetAssaultTimer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RespawnsDisabledPrompt_C::GetAssaultTimer(float* Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.GetAssaultTimer"));

	struct
	{
		float                          Time;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Time != nullptr)
		*Time = params.Time;
}


// Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.GenerateMainText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTBP_UI_RespawnsDisabledPrompt_C::GenerateMainText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.GenerateMainText"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_RespawnsDisabledPrompt_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.PreConstruct"));

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


// Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_RespawnsDisabledPrompt_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.OnShowPrompt
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_RespawnsDisabledPrompt_C::OnShowPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.OnShowPrompt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.WidgetAnimationEvt_RespawnDisabled_FadeIn_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_RespawnsDisabledPrompt_C::WidgetAnimationEvt_RespawnDisabled_FadeIn_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.WidgetAnimationEvt_RespawnDisabled_FadeIn_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.WidgetAnimationEvt_RespawnDisabled_FadeOut_K2Node_WidgetAnimationEvent_2
// (FUNC_BlueprintEvent)

void UTBP_UI_RespawnsDisabledPrompt_C::WidgetAnimationEvt_RespawnDisabled_FadeOut_K2Node_WidgetAnimationEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.WidgetAnimationEvt_RespawnDisabled_FadeOut_K2Node_WidgetAnimationEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RespawnsDisabledPrompt_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.Tick"));

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


// Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.ExecuteUbergraph_TBP_UI_RespawnsDisabledPrompt
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RespawnsDisabledPrompt_C::ExecuteUbergraph_TBP_UI_RespawnsDisabledPrompt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RespawnsDisabledPrompt.TBP_UI_RespawnsDisabledPrompt_C.ExecuteUbergraph_TBP_UI_RespawnsDisabledPrompt"));

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
