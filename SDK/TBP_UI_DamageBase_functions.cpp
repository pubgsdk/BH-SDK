// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_DamageBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.HasExtraHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATigerPlayer*            Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           HasExtraHealth                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_DamageBase_C::HasExtraHealth(class ATigerPlayer* Player, bool* HasExtraHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.HasExtraHealth"));

	struct
	{
		class ATigerPlayer*            Player;
		bool                           HasExtraHealth;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HasExtraHealth != nullptr)
		*HasExtraHealth = params.HasExtraHealth;
}


// Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.GetWidgetColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATBP_Player_C*           Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_DamageBase_C::GetWidgetColor(class ATBP_Player_C* Player, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.GetWidgetColor"));

	struct
	{
		class ATBP_Player_C*           Player;
		struct FLinearColor            Color;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Color != nullptr)
		*Color = params.Color;
}


// Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.CanHandleDirection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 DamageLocation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsHandled                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_DamageBase_C::CanHandleDirection(const struct FVector& DamageLocation, bool* IsHandled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.CanHandleDirection"));

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


// Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.OnDamage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 DamageLocation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DamageAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          NewHealthAmount                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsHandled                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_DamageBase_C::OnDamage(const struct FVector& DamageLocation, float DamageAmount, float NewHealthAmount, bool* IsHandled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.OnDamage"));

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


// Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.IsAlive
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsAlive                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_DamageBase_C::IsAlive(bool* IsAlive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.IsAlive"));

	struct
	{
		bool                           IsAlive;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsAlive != nullptr)
		*IsAlive = params.IsAlive;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
