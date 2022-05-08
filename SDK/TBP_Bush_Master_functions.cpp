// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Bush_Master_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Bush_Master.TBP_Bush_Master_C.AccumulateVelocity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Bush_Master_C::AccumulateVelocity(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Bush_Master.TBP_Bush_Master_C.AccumulateVelocity"));

	struct
	{
		class ATigerPlayer*            InPlayer;
	} params = {};

	params.InPlayer = InPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Bush_Master.TBP_Bush_Master_C.FindMostActivePlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            OutPlayer                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Bush_Master_C::FindMostActivePlayer(class ATigerPlayer** OutPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Bush_Master.TBP_Bush_Master_C.FindMostActivePlayer"));

	struct
	{
		class ATigerPlayer*            OutPlayer;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutPlayer != nullptr)
		*OutPlayer = params.OutPlayer;
}


// Function TBP_Bush_Master.TBP_Bush_Master_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Bush_Master_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Bush_Master.TBP_Bush_Master_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Bush_Master.TBP_Bush_Master_C.Deactivate Movement__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Bush_Master_C::Deactivate_Movement__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Bush_Master.TBP_Bush_Master_C.Deactivate Movement__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Bush_Master.TBP_Bush_Master_C.Deactivate Movement__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Bush_Master_C::Deactivate_Movement__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Bush_Master.TBP_Bush_Master_C.Deactivate Movement__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Bush_Master.TBP_Bush_Master_C.Update Player Position
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Bush_Master_C::Update_Player_Position()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Bush_Master.TBP_Bush_Master_C.Update Player Position"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Bush_Master.TBP_Bush_Master_C.ActivateMovement
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Bush_Master_C::ActivateMovement()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Bush_Master.TBP_Bush_Master_C.ActivateMovement"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Bush_Master.TBP_Bush_Master_C.DeactivateMovement
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Bush_Master_C::DeactivateMovement()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Bush_Master.TBP_Bush_Master_C.DeactivateMovement"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Bush_Master.TBP_Bush_Master_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Bush_Master_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Bush_Master.TBP_Bush_Master_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Bush_Master.TBP_Bush_Master_C.OnBeginCharacterOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         OverlappingCharacter           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TotalOverlapCount              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Bush_Master_C::OnBeginCharacterOverlap(class ATigerCharacter* OverlappingCharacter, int TotalOverlapCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Bush_Master.TBP_Bush_Master_C.OnBeginCharacterOverlap"));

	struct
	{
		class ATigerCharacter*         OverlappingCharacter;
		int                            TotalOverlapCount;
	} params = {};

	params.OverlappingCharacter = OverlappingCharacter;
	params.TotalOverlapCount = TotalOverlapCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Bush_Master.TBP_Bush_Master_C.OnEndCharacterOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         OverlappingCharacter           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TotalOverlapCount              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Bush_Master_C::OnEndCharacterOverlap(class ATigerCharacter* OverlappingCharacter, int TotalOverlapCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Bush_Master.TBP_Bush_Master_C.OnEndCharacterOverlap"));

	struct
	{
		class ATigerCharacter*         OverlappingCharacter;
		int                            TotalOverlapCount;
	} params = {};

	params.OverlappingCharacter = OverlappingCharacter;
	params.TotalOverlapCount = TotalOverlapCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Bush_Master.TBP_Bush_Master_C.ExecuteUbergraph_TBP_Bush_Master
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Bush_Master_C::ExecuteUbergraph_TBP_Bush_Master(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Bush_Master.TBP_Bush_Master_C.ExecuteUbergraph_TBP_Bush_Master"));

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
