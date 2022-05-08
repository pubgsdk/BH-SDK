// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BikeStand_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BikeStand_01.BP_BikeStand_01_C.RandomFloatInRangeFromWorld
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InOffset                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InMin                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InMax                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          OutValue                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BikeStand_01_C::RandomFloatInRangeFromWorld(int InOffset, float InMin, float InMax, float* OutValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BikeStand_01.BP_BikeStand_01_C.RandomFloatInRangeFromWorld"));

	struct
	{
		int                            InOffset;
		float                          InMin;
		float                          InMax;
		float                          OutValue;
	} params = {};

	params.InOffset = InOffset;
	params.InMin = InMin;
	params.InMax = InMax;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function BP_BikeStand_01.BP_BikeStand_01_C.RandomIntInRangeFromWorld
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InOffset                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InMin                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InMax                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OutValue                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BikeStand_01_C::RandomIntInRangeFromWorld(int InOffset, int InMin, int InMax, int* OutValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BikeStand_01.BP_BikeStand_01_C.RandomIntInRangeFromWorld"));

	struct
	{
		int                            InOffset;
		int                            InMin;
		int                            InMax;
		int                            OutValue;
	} params = {};

	params.InOffset = InOffset;
	params.InMin = InMin;
	params.InMax = InMax;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function BP_BikeStand_01.BP_BikeStand_01_C.AddBike
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BikeStand_01_C::AddBike(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BikeStand_01.BP_BikeStand_01_C.AddBike"));

	struct
	{
		int                            InIndex;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BikeStand_01.BP_BikeStand_01_C.OnRebuild
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_BikeStand_01_C::OnRebuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BikeStand_01.BP_BikeStand_01_C.OnRebuild"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BikeStand_01.BP_BikeStand_01_C.ExecuteUbergraph_BP_BikeStand_01
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BikeStand_01_C::ExecuteUbergraph_BP_BikeStand_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BikeStand_01.BP_BikeStand_01_C.ExecuteUbergraph_BP_BikeStand_01"));

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
