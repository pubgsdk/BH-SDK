// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TableSet_02_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TableSet_02.BP_TableSet_02_C.SetChairMeshAndTransformY
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InRotMin1                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InRotMax1                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InSeedOffset1                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InRotMin2                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InRotMax2                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InSeedOffset2                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMeshComponent*    InMesh                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TableSet_02_C::SetChairMeshAndTransformY(float InRotMin1, float InRotMax1, int InSeedOffset1, float InRotMin2, float InRotMax2, int InSeedOffset2, class UStaticMeshComponent* InMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TableSet_02.BP_TableSet_02_C.SetChairMeshAndTransformY"));

	struct
	{
		float                          InRotMin1;
		float                          InRotMax1;
		int                            InSeedOffset1;
		float                          InRotMin2;
		float                          InRotMax2;
		int                            InSeedOffset2;
		class UStaticMeshComponent*    InMesh;
	} params = {};

	params.InRotMin1 = InRotMin1;
	params.InRotMax1 = InRotMax1;
	params.InSeedOffset1 = InSeedOffset1;
	params.InRotMin2 = InRotMin2;
	params.InRotMax2 = InRotMax2;
	params.InSeedOffset2 = InSeedOffset2;
	params.InMesh = InMesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_TableSet_02.BP_TableSet_02_C.SetChairMeshAndTransformX
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InRotMin1                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InRotMax1                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InSeedOffset1                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InRotMin2                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InRotMax2                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InSeedOffset2                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMeshComponent*    InMesh                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TableSet_02_C::SetChairMeshAndTransformX(float InRotMin1, float InRotMax1, int InSeedOffset1, float InRotMin2, float InRotMax2, int InSeedOffset2, class UStaticMeshComponent* InMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TableSet_02.BP_TableSet_02_C.SetChairMeshAndTransformX"));

	struct
	{
		float                          InRotMin1;
		float                          InRotMax1;
		int                            InSeedOffset1;
		float                          InRotMin2;
		float                          InRotMax2;
		int                            InSeedOffset2;
		class UStaticMeshComponent*    InMesh;
	} params = {};

	params.InRotMin1 = InRotMin1;
	params.InRotMax1 = InRotMax1;
	params.InSeedOffset1 = InSeedOffset1;
	params.InRotMin2 = InRotMin2;
	params.InRotMax2 = InRotMax2;
	params.InSeedOffset2 = InSeedOffset2;
	params.InMesh = InMesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_TableSet_02.BP_TableSet_02_C.RandomFromWorld
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Rot_min                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Rot_max                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Seed_offset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            IntOutMax                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            RandomSeededInt                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          OutRandomFloat                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TableSet_02_C::RandomFromWorld(float Rot_min, float Rot_max, int Seed_offset, int IntOutMax, int* RandomSeededInt, float* OutRandomFloat)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TableSet_02.BP_TableSet_02_C.RandomFromWorld"));

	struct
	{
		float                          Rot_min;
		float                          Rot_max;
		int                            Seed_offset;
		int                            IntOutMax;
		int                            RandomSeededInt;
		float                          OutRandomFloat;
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
	if (OutRandomFloat != nullptr)
		*OutRandomFloat = params.OutRandomFloat;
}


// Function BP_TableSet_02.BP_TableSet_02_C.OnRebuild
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_TableSet_02_C::OnRebuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TableSet_02.BP_TableSet_02_C.OnRebuild"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_TableSet_02.BP_TableSet_02_C.ExecuteUbergraph_BP_TableSet_02
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TableSet_02_C::ExecuteUbergraph_BP_TableSet_02(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TableSet_02.BP_TableSet_02_C.ExecuteUbergraph_BP_TableSet_02"));

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
