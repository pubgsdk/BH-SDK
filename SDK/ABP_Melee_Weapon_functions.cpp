// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Melee_Weapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UABP_Melee_Weapon_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_Melee_Weapon_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.BlueprintInitializeAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Melee_Weapon_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params = {};

	params.DeltaTimeX = DeltaTimeX;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.OnMelee
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            AttackCount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Melee_Weapon_C::OnMelee(int AttackCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.OnMelee"));

	struct
	{
		int                            AttackCount;
	} params = {};

	params.AttackCount = AttackCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.ExecuteUbergraph_ABP_Melee_Weapon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Melee_Weapon_C::ExecuteUbergraph_ABP_Melee_Weapon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.ExecuteUbergraph_ABP_Melee_Weapon"));

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
