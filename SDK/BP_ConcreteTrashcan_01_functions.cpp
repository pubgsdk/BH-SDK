// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ConcreteTrashcan_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ConcreteTrashcan_01.BP_ConcreteTrashcan_01_C.AddGraffitiMeshAndMaterial
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InMeshIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InMaterialSeed                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InColorSeed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ConcreteTrashcan_01_C::AddGraffitiMeshAndMaterial(int InMeshIndex, int InMaterialSeed, int InColorSeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ConcreteTrashcan_01.BP_ConcreteTrashcan_01_C.AddGraffitiMeshAndMaterial"));

	struct
	{
		int                            InMeshIndex;
		int                            InMaterialSeed;
		int                            InColorSeed;
	} params = {};

	params.InMeshIndex = InMeshIndex;
	params.InMaterialSeed = InMaterialSeed;
	params.InColorSeed = InColorSeed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ConcreteTrashcan_01.BP_ConcreteTrashcan_01_C.GetRandomBoolFromSeed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InSeed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           OutBool                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ConcreteTrashcan_01_C::GetRandomBoolFromSeed(int InSeed, bool* OutBool)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ConcreteTrashcan_01.BP_ConcreteTrashcan_01_C.GetRandomBoolFromSeed"));

	struct
	{
		int                            InSeed;
		bool                           OutBool;
	} params = {};

	params.InSeed = InSeed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutBool != nullptr)
		*OutBool = params.OutBool;
}


// Function BP_ConcreteTrashcan_01.BP_ConcreteTrashcan_01_C.OnRebuild
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_ConcreteTrashcan_01_C::OnRebuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ConcreteTrashcan_01.BP_ConcreteTrashcan_01_C.OnRebuild"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ConcreteTrashcan_01.BP_ConcreteTrashcan_01_C.ExecuteUbergraph_BP_ConcreteTrashcan_01
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ConcreteTrashcan_01_C::ExecuteUbergraph_BP_ConcreteTrashcan_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ConcreteTrashcan_01.BP_ConcreteTrashcan_01_C.ExecuteUbergraph_BP_ConcreteTrashcan_01"));

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
