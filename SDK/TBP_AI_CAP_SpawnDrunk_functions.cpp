// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_CAP_SpawnDrunk_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_AI_CAP_SpawnDrunk.TBP_AI_CAP_SpawnDrunk_C.OnIsAvailableCheck
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ATBP_AI_CAP_SpawnDrunk_C::OnIsAvailableCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_CAP_SpawnDrunk.TBP_AI_CAP_SpawnDrunk_C.OnIsAvailableCheck"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_AI_CAP_SpawnDrunk.TBP_AI_CAP_SpawnDrunk_C.OnRequestNewCommands
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerNPC*               NPC                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ATBP_AI_CAP_SpawnDrunk_C::OnRequestNewCommands(class ATigerNPC* NPC)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_CAP_SpawnDrunk.TBP_AI_CAP_SpawnDrunk_C.OnRequestNewCommands"));

	struct
	{
		class ATigerNPC*               NPC;
		bool                           ReturnValue;
	} params = {};

	params.NPC = NPC;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_AI_CAP_SpawnDrunk.TBP_AI_CAP_SpawnDrunk_C.OnCheckNPCEligibility
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerNPC*               NPC                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ATBP_AI_CAP_SpawnDrunk_C::OnCheckNPCEligibility(class ATigerNPC* NPC)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_CAP_SpawnDrunk.TBP_AI_CAP_SpawnDrunk_C.OnCheckNPCEligibility"));

	struct
	{
		class ATigerNPC*               NPC;
		bool                           ReturnValue;
	} params = {};

	params.NPC = NPC;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_AI_CAP_SpawnDrunk.TBP_AI_CAP_SpawnDrunk_C.CreateMarkerMeshes
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_AI_CAP_SpawnDrunk_C::CreateMarkerMeshes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_CAP_SpawnDrunk.TBP_AI_CAP_SpawnDrunk_C.CreateMarkerMeshes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_CAP_SpawnDrunk.TBP_AI_CAP_SpawnDrunk_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_AI_CAP_SpawnDrunk_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_CAP_SpawnDrunk.TBP_AI_CAP_SpawnDrunk_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_CAP_SpawnDrunk.TBP_AI_CAP_SpawnDrunk_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_AI_CAP_SpawnDrunk_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_CAP_SpawnDrunk.TBP_AI_CAP_SpawnDrunk_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_CAP_SpawnDrunk.TBP_AI_CAP_SpawnDrunk_C.ExecuteUbergraph_TBP_AI_CAP_SpawnDrunk
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_AI_CAP_SpawnDrunk_C::ExecuteUbergraph_TBP_AI_CAP_SpawnDrunk(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_CAP_SpawnDrunk.TBP_AI_CAP_SpawnDrunk_C.ExecuteUbergraph_TBP_AI_CAP_SpawnDrunk"));

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
