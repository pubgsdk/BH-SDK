// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PoisonProjectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_PoisonProjectile.TBP_PoisonProjectile_C.SpawnVFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_PoisonProjectile_C::SpawnVFX(const struct FVector& Location, const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PoisonProjectile.TBP_PoisonProjectile_C.SpawnVFX"));

	struct
	{
		struct FVector                 Location;
		struct FRotator                Rotation;
	} params = {};

	params.Location = Location;
	params.Rotation = Rotation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PoisonProjectile.TBP_PoisonProjectile_C.InstantaneousSpawnParticles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  Surface_Type                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Impact_Point                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UPrimitiveComponent*     Potential_Scene_Component      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           BlockingHit                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_PoisonProjectile_C::InstantaneousSpawnParticles(TEnumAsByte<EPhysicalSurface> Surface_Type, const struct FVector& Impact_Point, const struct FRotator& Rotation, class UPrimitiveComponent* Potential_Scene_Component, bool BlockingHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PoisonProjectile.TBP_PoisonProjectile_C.InstantaneousSpawnParticles"));

	struct
	{
		TEnumAsByte<EPhysicalSurface>  Surface_Type;
		struct FVector                 Impact_Point;
		struct FRotator                Rotation;
		class UPrimitiveComponent*     Potential_Scene_Component;
		bool                           BlockingHit;
	} params = {};

	params.Surface_Type = Surface_Type;
	params.Impact_Point = Impact_Point;
	params.Rotation = Rotation;
	params.Potential_Scene_Component = Potential_Scene_Component;
	params.BlockingHit = BlockingHit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PoisonProjectile.TBP_PoisonProjectile_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_PoisonProjectile_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PoisonProjectile.TBP_PoisonProjectile_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PoisonProjectile.TBP_PoisonProjectile_C.ExecuteUbergraph_TBP_PoisonProjectile
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_PoisonProjectile_C::ExecuteUbergraph_TBP_PoisonProjectile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PoisonProjectile.TBP_PoisonProjectile_C.ExecuteUbergraph_TBP_PoisonProjectile"));

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
