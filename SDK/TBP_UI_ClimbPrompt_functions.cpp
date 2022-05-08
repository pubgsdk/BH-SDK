// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ClimbPrompt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ClimbPrompt.TBP_UI_ClimbPrompt_C.HidePrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ClimbPrompt_C::HidePrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ClimbPrompt.TBP_UI_ClimbPrompt_C.HidePrompt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ClimbPrompt.TBP_UI_ClimbPrompt_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ClimbPrompt_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ClimbPrompt.TBP_UI_ClimbPrompt_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ClimbPrompt.TBP_UI_ClimbPrompt_C.OnShowClimbPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ClimbPrompt_C::OnShowClimbPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ClimbPrompt.TBP_UI_ClimbPrompt_C.OnShowClimbPrompt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ClimbPrompt.TBP_UI_ClimbPrompt_C.ShowPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ClimbPrompt_C::ShowPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ClimbPrompt.TBP_UI_ClimbPrompt_C.ShowPrompt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ClimbPrompt.TBP_UI_ClimbPrompt_C.OnHideClimbPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ClimbPrompt_C::OnHideClimbPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ClimbPrompt.TBP_UI_ClimbPrompt_C.OnHideClimbPrompt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ClimbPrompt.TBP_UI_ClimbPrompt_C.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ClimbPrompt_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ClimbPrompt.TBP_UI_ClimbPrompt_C.OnAnimationFinished"));

	struct
	{
		class UWidgetAnimation*        Animation;
	} params = {};

	params.Animation = Animation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ClimbPrompt.TBP_UI_ClimbPrompt_C.ExecuteUbergraph_TBP_UI_ClimbPrompt
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ClimbPrompt_C::ExecuteUbergraph_TBP_UI_ClimbPrompt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ClimbPrompt.TBP_UI_ClimbPrompt_C.ExecuteUbergraph_TBP_UI_ClimbPrompt"));

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
