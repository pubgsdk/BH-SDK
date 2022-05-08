// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "I_Destruction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function I_Destruction.I_Destruction_C.TriggerAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UI_Destruction_C::TriggerAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function I_Destruction.I_Destruction_C.TriggerAlarm"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function I_Destruction.I_Destruction_C.StaticMeshComponentHit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FVector                 ImpactVelocity                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UI_Destruction_C::StaticMeshComponentHit(const struct FHitResult& HitResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function I_Destruction.I_Destruction_C.StaticMeshComponentHit"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
