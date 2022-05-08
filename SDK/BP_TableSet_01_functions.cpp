// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TableSet_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TableSet_01.BP_TableSet_01_C.RandomFromWorld
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Rot_min                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Rot_max                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Seed_offset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            IntOutMax                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            RandomSeededInt                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          NewParam2                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TableSet_01_C::RandomFromWorld(float Rot_min, float Rot_max, int Seed_offset, int IntOutMax, int* RandomSeededInt, float* NewParam2)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TableSet_01.BP_TableSet_01_C.RandomFromWorld"));

	struct
	{
		float                          Rot_min;
		float                          Rot_max;
		int                            Seed_offset;
		int                            IntOutMax;
		int                            RandomSeededInt;
		float                          NewParam2;
	} params = {};

	params.Rot_min = Rot_min;
	params.Rot_max = Rot_max;
	params.Seed_offset = Seed_offset;
	params.IntOutMax = IntOutMax;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomSeededInt != nullptr)
		*RandomSeededInt = params.RandomSeededInt;
	if (NewParam2 != nullptr)
		*NewParam2 = params.NewParam2;
}


// Function BP_TableSet_01.BP_TableSet_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_TableSet_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TableSet_01.BP_TableSet_01_C.UserConstructionScript"));

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
