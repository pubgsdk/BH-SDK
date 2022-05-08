// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SmallWallLamp01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.LightSetup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerSpotLightComponent* Light_Component                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SmallWallLamp01_C::LightSetup(class UTigerSpotLightComponent* Light_Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.LightSetup"));

	struct
	{
		class UTigerSpotLightComponent* Light_Component;
	} params = {};

	params.Light_Component = Light_Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SmallWallLamp01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SmallWallLamp01_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.ExecuteUbergraph_BP_SmallWallLamp01
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SmallWallLamp01_C::ExecuteUbergraph_BP_SmallWallLamp01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.ExecuteUbergraph_BP_SmallWallLamp01"));

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
