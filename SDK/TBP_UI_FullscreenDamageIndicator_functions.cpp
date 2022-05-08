// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_FullscreenDamageIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_FullscreenDamageIndicator.TBP_UI_FullscreenDamageIndicator_C.OnDamage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 DamageLocation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DamageAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          NewHealthAmount                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsHandled                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_FullscreenDamageIndicator_C::OnDamage(const struct FVector& DamageLocation, float DamageAmount, float NewHealthAmount, bool* IsHandled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_FullscreenDamageIndicator.TBP_UI_FullscreenDamageIndicator_C.OnDamage"));

	struct
	{
		struct FVector                 DamageLocation;
		float                          DamageAmount;
		float                          NewHealthAmount;
		bool                           IsHandled;
	} params = {};

	params.DamageLocation = DamageLocation;
	params.DamageAmount = DamageAmount;
	params.NewHealthAmount = NewHealthAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsHandled != nullptr)
		*IsHandled = params.IsHandled;
}


// Function TBP_UI_FullscreenDamageIndicator.TBP_UI_FullscreenDamageIndicator_C.UpdateIndicatorTransform
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_FullscreenDamageIndicator_C::UpdateIndicatorTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_FullscreenDamageIndicator.TBP_UI_FullscreenDamageIndicator_C.UpdateIndicatorTransform"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_FullscreenDamageIndicator.TBP_UI_FullscreenDamageIndicator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_FullscreenDamageIndicator_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_FullscreenDamageIndicator.TBP_UI_FullscreenDamageIndicator_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_FullscreenDamageIndicator.TBP_UI_FullscreenDamageIndicator_C.WhilePlayingAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_FullscreenDamageIndicator_C::WhilePlayingAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_FullscreenDamageIndicator.TBP_UI_FullscreenDamageIndicator_C.WhilePlayingAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_FullscreenDamageIndicator.TBP_UI_FullscreenDamageIndicator_C.StartAnimationTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_FullscreenDamageIndicator_C::StartAnimationTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_FullscreenDamageIndicator.TBP_UI_FullscreenDamageIndicator_C.StartAnimationTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_FullscreenDamageIndicator.TBP_UI_FullscreenDamageIndicator_C.ClearAnimationTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_FullscreenDamageIndicator_C::ClearAnimationTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_FullscreenDamageIndicator.TBP_UI_FullscreenDamageIndicator_C.ClearAnimationTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_FullscreenDamageIndicator.TBP_UI_FullscreenDamageIndicator_C.ExecuteUbergraph_TBP_UI_FullscreenDamageIndicator
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_FullscreenDamageIndicator_C::ExecuteUbergraph_TBP_UI_FullscreenDamageIndicator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_FullscreenDamageIndicator.TBP_UI_FullscreenDamageIndicator_C.ExecuteUbergraph_TBP_UI_FullscreenDamageIndicator"));

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
