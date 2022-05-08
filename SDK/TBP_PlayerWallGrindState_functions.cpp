// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PlayerWallGrindState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.AssignPhysicalMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FName                   BoneName                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_PlayerWallGrindState_C::AssignPhysicalMaterial(const struct FHitResult& Hit, const struct FName& BoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.AssignPhysicalMaterial"));

	struct
	{
		struct FHitResult              Hit;
		struct FName                   BoneName;
	} params = {};

	params.Hit = Hit;
	params.BoneName = BoneName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.CheckForParticleSystemUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   BoneName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              HitResult                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// class ACharacter*              Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_PlayerWallGrindState_C::CheckForParticleSystemUpdate(const struct FName& BoneName, const struct FHitResult& HitResult, class ACharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.CheckForParticleSystemUpdate"));

	struct
	{
		struct FName                   BoneName;
		struct FHitResult              HitResult;
		class ACharacter*              Character;
	} params = {};

	params.BoneName = BoneName;
	params.HitResult = HitResult;
	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.DestroyParticleSystem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   BoneName                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_PlayerWallGrindState_C::DestroyParticleSystem(const struct FName& BoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.DestroyParticleSystem"));

	struct
	{
		struct FName                   BoneName;
	} params = {};

	params.BoneName = BoneName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.CreateParticleSystem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   BoneName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              HitResult                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// class ACharacter*              Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_PlayerWallGrindState_C::CreateParticleSystem(const struct FName& BoneName, const struct FHitResult& HitResult, class ACharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.CreateParticleSystem"));

	struct
	{
		struct FName                   BoneName;
		struct FHitResult              HitResult;
		class ACharacter*              Character;
	} params = {};

	params.BoneName = BoneName;
	params.HitResult = HitResult;
	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.StartEffect
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InAssociatedBoneName           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              InHitResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// class ATigerCharacter*         InTigerCharacter               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_PlayerWallGrindState_C::StartEffect(const struct FName& InAssociatedBoneName, const struct FHitResult& InHitResult, class ATigerCharacter* InTigerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.StartEffect"));

	struct
	{
		struct FName                   InAssociatedBoneName;
		struct FHitResult              InHitResult;
		class ATigerCharacter*         InTigerCharacter;
	} params = {};

	params.InAssociatedBoneName = InAssociatedBoneName;
	params.InHitResult = InHitResult;
	params.InTigerCharacter = InTigerCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.StopEffect
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InAssociatedBoneName           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerCharacter*         InTigerCharacter               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_PlayerWallGrindState_C::StopEffect(const struct FName& InAssociatedBoneName, class ATigerCharacter* InTigerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.StopEffect"));

	struct
	{
		struct FName                   InAssociatedBoneName;
		class ATigerCharacter*         InTigerCharacter;
	} params = {};

	params.InAssociatedBoneName = InAssociatedBoneName;
	params.InTigerCharacter = InTigerCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.UpdateEffect
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InAssociatedBoneName           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              InHitResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// class ATigerCharacter*         InTigerCharacter               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_PlayerWallGrindState_C::UpdateEffect(const struct FName& InAssociatedBoneName, const struct FHitResult& InHitResult, class ATigerCharacter* InTigerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.UpdateEffect"));

	struct
	{
		struct FName                   InAssociatedBoneName;
		struct FHitResult              InHitResult;
		class ATigerCharacter*         InTigerCharacter;
	} params = {};

	params.InAssociatedBoneName = InAssociatedBoneName;
	params.InHitResult = InHitResult;
	params.InTigerCharacter = InTigerCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.ExecuteUbergraph_TBP_PlayerWallGrindState
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_PlayerWallGrindState_C::ExecuteUbergraph_TBP_PlayerWallGrindState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.ExecuteUbergraph_TBP_PlayerWallGrindState"));

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
