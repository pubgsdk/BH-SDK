// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_DamageIndicatorArrow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.GetDirection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 To                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USceneComponent*         InListenerComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_UI_DamageIndicatorArrow_C::GetDirection(const struct FVector& To, class USceneComponent* InListenerComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.GetDirection"));

	struct
	{
		struct FVector                 To;
		class USceneComponent*         InListenerComponent;
		struct FVector                 ReturnValue;
	} params = {};

	params.To = To;
	params.InListenerComponent = InListenerComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.CanHandleDirection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 DamageLocation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsHandled                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_DamageIndicatorArrow_C::CanHandleDirection(const struct FVector& DamageLocation, bool* IsHandled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.CanHandleDirection"));

	struct
	{
		struct FVector                 DamageLocation;
		bool                           IsHandled;
	} params = {};

	params.DamageLocation = DamageLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsHandled != nullptr)
		*IsHandled = params.IsHandled;
}


// Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.OnDamage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 DamageLocation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DamageAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          NewHealthAmount                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsHandled                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_DamageIndicatorArrow_C::OnDamage(const struct FVector& DamageLocation, float DamageAmount, float NewHealthAmount, bool* IsHandled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.OnDamage"));

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


// Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.UpdateAngle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DamageIndicatorArrow_C::UpdateAngle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.UpdateAngle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_DamageIndicatorArrow_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.WhilePlayingAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DamageIndicatorArrow_C::WhilePlayingAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.WhilePlayingAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.StartAnimationTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DamageIndicatorArrow_C::StartAnimationTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.StartAnimationTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.ClearAnimationTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DamageIndicatorArrow_C::ClearAnimationTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.ClearAnimationTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.ExecuteUbergraph_TBP_UI_DamageIndicatorArrow
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_DamageIndicatorArrow_C::ExecuteUbergraph_TBP_UI_DamageIndicatorArrow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageIndicatorArrow.TBP_UI_DamageIndicatorArrow_C.ExecuteUbergraph_TBP_UI_DamageIndicatorArrow"));

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
