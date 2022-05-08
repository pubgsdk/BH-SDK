// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_DynamicObjectBase_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_DynamicObjectBase_01.TBP_DynamicObjectBase_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_DynamicObjectBase_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_DynamicObjectBase_01.TBP_DynamicObjectBase_01_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_DynamicObjectBase_01.TBP_DynamicObjectBase_01_C.TriggerAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_DynamicObjectBase_01_C::TriggerAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_DynamicObjectBase_01.TBP_DynamicObjectBase_01_C.TriggerAlarm"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_DynamicObjectBase_01.TBP_DynamicObjectBase_01_C.StaticMeshComponentHit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FVector                 ImpactVelocity                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_DynamicObjectBase_01_C::StaticMeshComponentHit(const struct FHitResult& HitResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_DynamicObjectBase_01.TBP_DynamicObjectBase_01_C.StaticMeshComponentHit"));

	struct
	{
		struct FHitResult              HitResult;
		struct FVector                 ImpactVelocity;
	} params = {};

	params.HitResult = HitResult;
	params.ImpactVelocity = ImpactVelocity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_DynamicObjectBase_01.TBP_DynamicObjectBase_01_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_DynamicObjectBase_01_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_DynamicObjectBase_01.TBP_DynamicObjectBase_01_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_DynamicObjectBase_01.TBP_DynamicObjectBase_01_C.ExecuteUbergraph_TBP_DynamicObjectBase_01
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_DynamicObjectBase_01_C::ExecuteUbergraph_TBP_DynamicObjectBase_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_DynamicObjectBase_01.TBP_DynamicObjectBase_01_C.ExecuteUbergraph_TBP_DynamicObjectBase_01"));

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
