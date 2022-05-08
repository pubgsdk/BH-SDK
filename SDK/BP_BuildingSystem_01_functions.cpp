// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BuildingSystem_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BuildingSystem_01.BP_BuildingSystem_01_C.SetSimpleBuildingMaterials
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BuildingSystem_01_C::SetSimpleBuildingMaterials()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BuildingSystem_01.BP_BuildingSystem_01_C.SetSimpleBuildingMaterials"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BuildingSystem_01.BP_BuildingSystem_01_C.ExecuteUbergraph_BP_BuildingSystem_01
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BuildingSystem_01_C::ExecuteUbergraph_BP_BuildingSystem_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BuildingSystem_01.BP_BuildingSystem_01_C.ExecuteUbergraph_BP_BuildingSystem_01"));

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
