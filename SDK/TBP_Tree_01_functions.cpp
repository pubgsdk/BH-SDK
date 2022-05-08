// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Tree_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Tree_01.TBP_Tree_01_C.ActivateMovement
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Tree_01_C::ActivateMovement()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Tree_01.TBP_Tree_01_C.ActivateMovement"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Tree_01.TBP_Tree_01_C.GetMostMovingPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            OutPlayer                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          OutVelocity                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Tree_01_C::GetMostMovingPlayer(class ATigerPlayer** OutPlayer, float* OutVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Tree_01.TBP_Tree_01_C.GetMostMovingPlayer"));

	struct
	{
		class ATigerPlayer*            OutPlayer;
		float                          OutVelocity;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutPlayer != nullptr)
		*OutPlayer = params.OutPlayer;
	if (OutVelocity != nullptr)
		*OutVelocity = params.OutVelocity;
}


// Function TBP_Tree_01.TBP_Tree_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Tree_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Tree_01.TBP_Tree_01_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Tree_01.TBP_Tree_01_C.RemoveTrees
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Tree_01_C::RemoveTrees()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Tree_01.TBP_Tree_01_C.RemoveTrees"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Tree_01.TBP_Tree_01_C.UpdateMovement
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Tree_01_C::UpdateMovement()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Tree_01.TBP_Tree_01_C.UpdateMovement"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Tree_01.TBP_Tree_01_C.OnBeginCharacterOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         OverlappingCharacter           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TotalOverlapCount              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Tree_01_C::OnBeginCharacterOverlap(class ATigerCharacter* OverlappingCharacter, int TotalOverlapCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Tree_01.TBP_Tree_01_C.OnBeginCharacterOverlap"));

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


// Function TBP_Tree_01.TBP_Tree_01_C.OnEndCharacterOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         OverlappingCharacter           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TotalOverlapCount              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Tree_01_C::OnEndCharacterOverlap(class ATigerCharacter* OverlappingCharacter, int TotalOverlapCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Tree_01.TBP_Tree_01_C.OnEndCharacterOverlap"));

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


// Function TBP_Tree_01.TBP_Tree_01_C.OnObjectDeactivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Tree_01_C::OnObjectDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Tree_01.TBP_Tree_01_C.OnObjectDeactivated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Tree_01.TBP_Tree_01_C.ExecuteUbergraph_TBP_Tree_01
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Tree_01_C::ExecuteUbergraph_TBP_Tree_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Tree_01.TBP_Tree_01_C.ExecuteUbergraph_TBP_Tree_01"));

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
