// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Chimney_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Chimney_01.BP_Chimney_01_C.RandomFloatFrom worldPos_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SeedOfset                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Min                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Max                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           RandomSeededBool               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          RandomSeeded_float             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Chimney_01_C::RandomFloatFrom_worldPos_1(int SeedOfset, float Min, float Max, bool* RandomSeededBool, float* RandomSeeded_float)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Chimney_01.BP_Chimney_01_C.RandomFloatFrom worldPos_1"));

	struct
	{
		int                            SeedOfset;
		float                          Min;
		float                          Max;
		bool                           RandomSeededBool;
		float                          RandomSeeded_float;
	} params = {};

	params.SeedOfset = SeedOfset;
	params.Min = Min;
	params.Max = Max;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomSeededBool != nullptr)
		*RandomSeededBool = params.RandomSeededBool;
	if (RandomSeeded_float != nullptr)
		*RandomSeeded_float = params.RandomSeeded_float;
}


// Function BP_Chimney_01.BP_Chimney_01_C.RandomBool From worldPos
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Max                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            SeedOfset                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           RandomSeededInt                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_Chimney_01_C::RandomBool_From_worldPos(int Max, int SeedOfset, bool* RandomSeededInt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Chimney_01.BP_Chimney_01_C.RandomBool From worldPos"));

	struct
	{
		int                            Max;
		int                            SeedOfset;
		bool                           RandomSeededInt;
	} params = {};

	params.Max = Max;
	params.SeedOfset = SeedOfset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomSeededInt != nullptr)
		*RandomSeededInt = params.RandomSeededInt;
}


// Function BP_Chimney_01.BP_Chimney_01_C.OnRebuild
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Chimney_01_C::OnRebuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Chimney_01.BP_Chimney_01_C.OnRebuild"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Chimney_01.BP_Chimney_01_C.ExecuteUbergraph_BP_Chimney_01
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Chimney_01_C::ExecuteUbergraph_BP_Chimney_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Chimney_01.BP_Chimney_01_C.ExecuteUbergraph_BP_Chimney_01"));

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
