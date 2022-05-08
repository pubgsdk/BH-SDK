// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PlayerDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C.OnBenchmarkDamage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 EnemyLocation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DamageAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerDamage_C::OnBenchmarkDamage(const struct FVector& EnemyLocation, float DamageAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C.OnBenchmarkDamage"));

	struct
	{
		struct FVector                 EnemyLocation;
		float                          DamageAmount;
	} params = {};

	params.EnemyLocation = EnemyLocation;
	params.DamageAmount = DamageAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C.OnNonDirectionalDamage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InDamageAmount                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerDamage_C::OnNonDirectionalDamage(float InDamageAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C.OnNonDirectionalDamage"));

	struct
	{
		float                          InDamageAmount;
	} params = {};

	params.InDamageAmount = InDamageAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C.HandleDirectionIndicator
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UTBP_UI_DamageBase_C*> Widgets                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UTBP_UI_PlayerDamage_C::HandleDirectionIndicator(const struct FVector& Location, TArray<class UTBP_UI_DamageBase_C*>* Widgets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C.HandleDirectionIndicator"));

	struct
	{
		struct FVector                 Location;
		TArray<class UTBP_UI_DamageBase_C*> Widgets;
	} params = {};

	params.Location = Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C.OnDamage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Enemy_Location                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DamageAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          NewHealth                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerDamage_C::OnDamage(const struct FVector& Enemy_Location, float DamageAmount, float NewHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C.OnDamage"));

	struct
	{
		struct FVector                 Enemy_Location;
		float                          DamageAmount;
		float                          NewHealth;
	} params = {};

	params.Enemy_Location = Enemy_Location;
	params.DamageAmount = DamageAmount;
	params.NewHealth = NewHealth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C.InitDamageIndicators
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerDamage_C::InitDamageIndicators()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C.InitDamageIndicators"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C.InitCreateLowHealthOverlay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerDamage_C::InitCreateLowHealthOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C.InitCreateLowHealthOverlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_PlayerDamage_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C.ExecuteUbergraph_TBP_UI_PlayerDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerDamage_C::ExecuteUbergraph_TBP_UI_PlayerDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C.ExecuteUbergraph_TBP_UI_PlayerDamage"));

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
