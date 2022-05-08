// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_RooftopAntennaes_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RooftopAntennaes_01.BP_RooftopAntennaes_01_C.SetRandomRotation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_RooftopAntennaes_01_C::SetRandomRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RooftopAntennaes_01.BP_RooftopAntennaes_01_C.SetRandomRotation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RooftopAntennaes_01.BP_RooftopAntennaes_01_C.SetRandomMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_RooftopAntennaes_01_C::SetRandomMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RooftopAntennaes_01.BP_RooftopAntennaes_01_C.SetRandomMesh"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RooftopAntennaes_01.BP_RooftopAntennaes_01_C.SetScale
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_RooftopAntennaes_01_C::SetScale()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RooftopAntennaes_01.BP_RooftopAntennaes_01_C.SetScale"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RooftopAntennaes_01.BP_RooftopAntennaes_01_C.Random Float from world
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Min                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Max                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Seed_offset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Float_Out                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_RooftopAntennaes_01_C::Random_Float_from_world(float Min, float Max, int Seed_offset, float* Float_Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RooftopAntennaes_01.BP_RooftopAntennaes_01_C.Random Float from world"));

	struct
	{
		float                          Min;
		float                          Max;
		int                            Seed_offset;
		float                          Float_Out;
	} params = {};

	params.Min = Min;
	params.Max = Max;
	params.Seed_offset = Seed_offset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Float_Out != nullptr)
		*Float_Out = params.Float_Out;
}


// Function BP_RooftopAntennaes_01.BP_RooftopAntennaes_01_C.Random from world Int
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Lenght                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Seed_offset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            RandomSeededInt                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_RooftopAntennaes_01_C::Random_from_world_Int(int Lenght, int Seed_offset, int* RandomSeededInt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RooftopAntennaes_01.BP_RooftopAntennaes_01_C.Random from world Int"));

	struct
	{
		int                            Lenght;
		int                            Seed_offset;
		int                            RandomSeededInt;
	} params = {};

	params.Lenght = Lenght;
	params.Seed_offset = Seed_offset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomSeededInt != nullptr)
		*RandomSeededInt = params.RandomSeededInt;
}


// Function BP_RooftopAntennaes_01.BP_RooftopAntennaes_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_RooftopAntennaes_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RooftopAntennaes_01.BP_RooftopAntennaes_01_C.UserConstructionScript"));

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
