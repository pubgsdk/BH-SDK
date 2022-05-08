// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_CAP_Graffiti_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_AI_CAP_Graffiti.TBP_AI_CAP_Graffiti_C.OnCheckNPCEligibility
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerNPC*               NPC                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ATBP_AI_CAP_Graffiti_C::OnCheckNPCEligibility(class ATigerNPC* NPC)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_CAP_Graffiti.TBP_AI_CAP_Graffiti_C.OnCheckNPCEligibility"));

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


// Function TBP_AI_CAP_Graffiti.TBP_AI_CAP_Graffiti_C.CreateEditorMarkerMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerAIMoveToLocationData MoveToData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void ATBP_AI_CAP_Graffiti_C::CreateEditorMarkerMesh(struct FTigerAIMoveToLocationData* MoveToData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_CAP_Graffiti.TBP_AI_CAP_Graffiti_C.CreateEditorMarkerMesh"));

	struct
	{
		struct FTigerAIMoveToLocationData MoveToData;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MoveToData != nullptr)
		*MoveToData = params.MoveToData;
}


// Function TBP_AI_CAP_Graffiti.TBP_AI_CAP_Graffiti_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_AI_CAP_Graffiti_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_CAP_Graffiti.TBP_AI_CAP_Graffiti_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
