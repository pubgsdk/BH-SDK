// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Katana_Reflector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.SpawnVFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Katana_Reflector_C::SpawnVFX(const struct FVector& Location, const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.SpawnVFX"));

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


// Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.CanBeReflected
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     InOverlappedComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  InOtherActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     InOtherComp                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InOtherBodyIndex               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInFromSweep                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              InSweepResult                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ATBP_Katana_Reflector_C::CanBeReflected(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int InOtherBodyIndex, bool bInFromSweep, const struct FHitResult& InSweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.CanBeReflected"));

	struct
	{
		class UPrimitiveComponent*     InOverlappedComponent;
		class AActor*                  InOtherActor;
		class UPrimitiveComponent*     InOtherComp;
		int                            InOtherBodyIndex;
		bool                           bInFromSweep;
		struct FHitResult              InSweepResult;
		bool                           ReturnValue;
	} params = {};

	params.InOverlappedComponent = InOverlappedComponent;
	params.InOtherActor = InOtherActor;
	params.InOtherComp = InOtherComp;
	params.InOtherBodyIndex = InOtherBodyIndex;
	params.bInFromSweep = bInFromSweep;
	params.InSweepResult = InSweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.CheckIfProjectileHitWithinCone
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsWithinCone                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Katana_Reflector_C::CheckIfProjectileHitWithinCone(const struct FVector& HitLocation, bool* bIsWithinCone)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.CheckIfProjectileHitWithinCone"));

	struct
	{
		struct FVector                 HitLocation;
		bool                           bIsWithinCone;
	} params = {};

	params.HitLocation = HitLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bIsWithinCone != nullptr)
		*bIsWithinCone = params.bIsWithinCone;
}


// Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Katana_Reflector_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ATBP_Katana_Reflector_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Katana_Reflector_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.ExecuteUbergraph_TBP_Katana_Reflector
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Katana_Reflector_C::ExecuteUbergraph_TBP_Katana_Reflector(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.ExecuteUbergraph_TBP_Katana_Reflector"));

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
