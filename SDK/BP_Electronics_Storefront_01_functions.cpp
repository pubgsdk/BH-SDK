// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Electronics_Storefront_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Electronics_Storefront_01.BP_Electronics_Storefront_01_C.RandomFromWorld
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount_of_meshes               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Seed_offset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            RandomSeededInt                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Electronics_Storefront_01_C::RandomFromWorld(int Amount_of_meshes, int Seed_offset, int* RandomSeededInt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Electronics_Storefront_01.BP_Electronics_Storefront_01_C.RandomFromWorld"));

	struct
	{
		int                            Amount_of_meshes;
		int                            Seed_offset;
		int                            RandomSeededInt;
	} params = {};

	params.Amount_of_meshes = Amount_of_meshes;
	params.Seed_offset = Seed_offset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomSeededInt != nullptr)
		*RandomSeededInt = params.RandomSeededInt;
}


// Function BP_Electronics_Storefront_01.BP_Electronics_Storefront_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Electronics_Storefront_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Electronics_Storefront_01.BP_Electronics_Storefront_01_C.UserConstructionScript"));

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
