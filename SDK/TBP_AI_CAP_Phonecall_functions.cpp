// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_CAP_Phonecall_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_AI_CAP_Phonecall.TBP_AI_CAP_Phonecall_C.OnCheckNPCEligibility
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerNPC*               NPC                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ATBP_AI_CAP_Phonecall_C::OnCheckNPCEligibility(class ATigerNPC* NPC)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_CAP_Phonecall.TBP_AI_CAP_Phonecall_C.OnCheckNPCEligibility"));

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


// Function TBP_AI_CAP_Phonecall.TBP_AI_CAP_Phonecall_C.CreateEditorMarkerMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMeshComponent*    Mesh                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_AI_CAP_Phonecall_C::CreateEditorMarkerMesh(const struct FVector& NewParam, class UStaticMeshComponent** Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_CAP_Phonecall.TBP_AI_CAP_Phonecall_C.CreateEditorMarkerMesh"));

	struct
	{
		struct FVector                 NewParam;
		class UStaticMeshComponent*    Mesh;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function TBP_AI_CAP_Phonecall.TBP_AI_CAP_Phonecall_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_AI_CAP_Phonecall_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_CAP_Phonecall.TBP_AI_CAP_Phonecall_C.UserConstructionScript"));

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
