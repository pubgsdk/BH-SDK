// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_DrainPipe_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_DrainPipe_01.TBP_DrainPipe_01_C.PlaceMeshComponent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Mesh_Comp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMesh*             Mesh_                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_DrainPipe_01_C::PlaceMeshComponent(class UStaticMeshComponent* Mesh_Comp, class UStaticMesh* Mesh_, float Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_DrainPipe_01.TBP_DrainPipe_01_C.PlaceMeshComponent"));

	struct
	{
		class UStaticMeshComponent*    Mesh_Comp;
		class UStaticMesh*             Mesh_;
		float                          Scale;
	} params = {};

	params.Mesh_Comp = Mesh_Comp;
	params.Mesh_ = Mesh_;
	params.Scale = Scale;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_DrainPipe_01.TBP_DrainPipe_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_DrainPipe_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_DrainPipe_01.TBP_DrainPipe_01_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_DrainPipe_01.TBP_DrainPipe_01_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_DrainPipe_01_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_DrainPipe_01.TBP_DrainPipe_01_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_DrainPipe_01.TBP_DrainPipe_01_C.UpdateWeatherComponents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_DrainPipe_01_C::UpdateWeatherComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_DrainPipe_01.TBP_DrainPipe_01_C.UpdateWeatherComponents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_DrainPipe_01.TBP_DrainPipe_01_C.ExecuteUbergraph_TBP_DrainPipe_01
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_DrainPipe_01_C::ExecuteUbergraph_TBP_DrainPipe_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_DrainPipe_01.TBP_DrainPipe_01_C.ExecuteUbergraph_TBP_DrainPipe_01"));

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
