// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TrafficSigns_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TrafficSigns.BP_TrafficSigns_C.IsNotUsingSignMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ETrafficSignEnum>  Sign_Selector                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_TrafficSigns_C::IsNotUsingSignMesh(TEnumAsByte<ETrafficSignEnum> Sign_Selector)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TrafficSigns.BP_TrafficSigns_C.IsNotUsingSignMesh"));

	struct
	{
		TEnumAsByte<ETrafficSignEnum>  Sign_Selector;
		bool                           ReturnValue;
	} params = {};

	params.Sign_Selector = Sign_Selector;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_TrafficSigns.BP_TrafficSigns_C.SetMeshAndTransforms
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    InMesh                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 InLocation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                InRotation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// unsigned char                  InEnum                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TrafficSigns_C::SetMeshAndTransforms(class UStaticMeshComponent* InMesh, const struct FVector& InLocation, const struct FRotator& InRotation, unsigned char InEnum)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TrafficSigns.BP_TrafficSigns_C.SetMeshAndTransforms"));

	struct
	{
		class UStaticMeshComponent*    InMesh;
		struct FVector                 InLocation;
		struct FRotator                InRotation;
		unsigned char                  InEnum;
	} params = {};

	params.InMesh = InMesh;
	params.InLocation = InLocation;
	params.InRotation = InRotation;
	params.InEnum = InEnum;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_TrafficSigns.BP_TrafficSigns_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_TrafficSigns_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TrafficSigns.BP_TrafficSigns_C.UserConstructionScript"));

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
