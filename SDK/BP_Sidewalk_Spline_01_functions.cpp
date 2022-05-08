// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Sidewalk_Spline_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetSectionLengthBasedOnMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UStaticMesh*             InMesh                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float ABP_Sidewalk_Spline_01_C::GetSectionLengthBasedOnMesh(class UStaticMesh* InMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetSectionLengthBasedOnMesh"));

	struct
	{
		class UStaticMesh*             InMesh;
		float                          ReturnValue;
	} params = {};

	params.InMesh = InMesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetReversedOffsetAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float ABP_Sidewalk_Spline_01_C::GetReversedOffsetAmount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetReversedOffsetAmount"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.AddSplineMeshes
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Sidewalk_Spline_01_C::AddSplineMeshes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.AddSplineMeshes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetBestMeshesFromDistance
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InDistance                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDA_SidewalkMeshPreset_C* InPreset                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UStaticMesh*>     OutMeshes                      (CPF_Parm, CPF_OutParm)
// float                          OutCombinedLength              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Sidewalk_Spline_01_C::GetBestMeshesFromDistance(float InDistance, class UDA_SidewalkMeshPreset_C* InPreset, TArray<class UStaticMesh*>* OutMeshes, float* OutCombinedLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetBestMeshesFromDistance"));

	struct
	{
		float                          InDistance;
		class UDA_SidewalkMeshPreset_C* InPreset;
		TArray<class UStaticMesh*>     OutMeshes;
		float                          OutCombinedLength;
	} params = {};

	params.InDistance = InDistance;
	params.InPreset = InPreset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutMeshes != nullptr)
		*OutMeshes = params.OutMeshes;
	if (OutCombinedLength != nullptr)
		*OutCombinedLength = params.OutCombinedLength;
}


// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.LoadPreset
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDA_SidewalkMeshPreset_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UDA_SidewalkMeshPreset_C* ABP_Sidewalk_Spline_01_C::LoadPreset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.LoadPreset"));

	struct
	{
		class UDA_SidewalkMeshPreset_C* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetMeshLength
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UStaticMesh*             InMesh                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float ABP_Sidewalk_Spline_01_C::GetMeshLength(class UStaticMesh* InMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetMeshLength"));

	struct
	{
		class UStaticMesh*             InMesh;
		float                          ReturnValue;
	} params = {};

	params.InMesh = InMesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.SetOverrideMaterialOnAllComponents
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Sidewalk_Spline_01_C::SetOverrideMaterialOnAllComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.SetOverrideMaterialOnAllComponents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetBestMeshFromDistance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InDistance                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDA_SidewalkMeshPreset_C* InPreset                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Sidewalk_Spline_01_C::GetBestMeshFromDistance(float InDistance, class UDA_SidewalkMeshPreset_C* InPreset, class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetBestMeshFromDistance"));

	struct
	{
		float                          InDistance;
		class UDA_SidewalkMeshPreset_C* InPreset;
		class UStaticMesh*             OutMesh;
	} params = {};

	params.InDistance = InDistance;
	params.InPreset = InPreset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;
}


// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.HandleCollisionResponse
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USplineMeshComponent*    InMesh                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Sidewalk_Spline_01_C::HandleCollisionResponse(class USplineMeshComponent* InMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.HandleCollisionResponse"));

	struct
	{
		class USplineMeshComponent*    InMesh;
	} params = {};

	params.InMesh = InMesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.SetOverrideMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Sidewalk_Spline_01_C::SetOverrideMaterial(class UPrimitiveComponent* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.SetOverrideMaterial"));

	struct
	{
		class UPrimitiveComponent*     Target;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.OnRebuild
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Sidewalk_Spline_01_C::OnRebuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.OnRebuild"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.ExecuteUbergraph_BP_Sidewalk_Spline_01
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Sidewalk_Spline_01_C::ExecuteUbergraph_BP_Sidewalk_Spline_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.ExecuteUbergraph_BP_Sidewalk_Spline_01"));

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
