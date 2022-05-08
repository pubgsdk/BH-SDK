// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ScoutingFamiliarPassive_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.OnRep_Replicated Passive Activated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_ScoutingFamiliarPassive_C::OnRep_Replicated_Passive_Activated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.OnRep_Replicated Passive Activated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.CreateOrbitingParticles
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UParticleSystemComponent* UTBP_ScoutingFamiliarPassive_C::CreateOrbitingParticles()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.CreateOrbitingParticles"));

	struct
	{
		class UParticleSystemComponent* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.ScoutSpawned
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerFamiliarScout*     SpawnedScout                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ScoutingFamiliarPassive_C::ScoutSpawned(class ATigerFamiliarScout* SpawnedScout)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.ScoutSpawned"));

	struct
	{
		class ATigerFamiliarScout*     SpawnedScout;
	} params = {};

	params.SpawnedScout = SpawnedScout;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.Scout Destroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ScoutingFamiliarPassive_C::Scout_Destroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.Scout Destroyed"));

	struct
	{
		class AActor*                  DestroyedActor;
	} params = {};

	params.DestroyedActor = DestroyedActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.Begin Fade Out
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_ScoutingFamiliarPassive_C::Begin_Fade_Out()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.Begin Fade Out"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.Begin Fade In
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_ScoutingFamiliarPassive_C::Begin_Fade_In()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.Begin Fade In"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.EvaluateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_ScoutingFamiliarPassive_C::EvaluateVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.EvaluateVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.ExecuteUbergraph_TBP_ScoutingFamiliarPassive
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ScoutingFamiliarPassive_C::ExecuteUbergraph_TBP_ScoutingFamiliarPassive(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.ExecuteUbergraph_TBP_ScoutingFamiliarPassive"));

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
