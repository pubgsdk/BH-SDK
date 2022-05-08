// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Planter_BaseDataInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Planter_BaseDataInterface.BP_Planter_BaseDataInterface_C.GetVariationsLastIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            OutLastIndex                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Planter_BaseDataInterface_C::GetVariationsLastIndex(int* OutLastIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Planter_BaseDataInterface.BP_Planter_BaseDataInterface_C.GetVariationsLastIndex"));

	struct
	{
		int                            OutLastIndex;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutLastIndex != nullptr)
		*OutLastIndex = params.OutLastIndex;
}


// Function BP_Planter_BaseDataInterface.BP_Planter_BaseDataInterface_C.GetVariations
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AActor*/       OutActor                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Planter_BaseDataInterface_C::GetVariations(int InIndex, class UClass* /*AActor*/* OutActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Planter_BaseDataInterface.BP_Planter_BaseDataInterface_C.GetVariations"));

	struct
	{
		int                            InIndex;
		class UClass* /*AActor*/       OutActor;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutActor != nullptr)
		*OutActor = params.OutActor;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
