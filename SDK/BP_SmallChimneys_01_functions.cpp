// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SmallChimneys_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SmallChimneys_01.BP_SmallChimneys_01_C.RAndom Float
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Seed_offset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Min                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Max                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Float                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Int                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SmallChimneys_01_C::RAndom_Float(int Seed_offset, float Min, float Max, float* Float, int* Int)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallChimneys_01.BP_SmallChimneys_01_C.RAndom Float"));

	struct
	{
		int                            Seed_offset;
		float                          Min;
		float                          Max;
		float                          Float;
		int                            Int;
	} params = {};

	params.Seed_offset = Seed_offset;
	params.Min = Min;
	params.Max = Max;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Float != nullptr)
		*Float = params.Float;
	if (Int != nullptr)
		*Int = params.Int;
}


// Function BP_SmallChimneys_01.BP_SmallChimneys_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SmallChimneys_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallChimneys_01.BP_SmallChimneys_01_C.UserConstructionScript"));

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
