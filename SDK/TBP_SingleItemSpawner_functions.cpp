// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_SingleItemSpawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_SingleItemSpawner.TBP_SingleItemSpawner_C.GetSecondaryItemTransform
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

struct FTransform ATBP_SingleItemSpawner_C::GetSecondaryItemTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_SingleItemSpawner.TBP_SingleItemSpawner_C.GetSecondaryItemTransform"));

	struct
	{
		struct FTransform              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_SingleItemSpawner.TBP_SingleItemSpawner_C.GetPrimaryItemTransform
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

struct FTransform ATBP_SingleItemSpawner_C::GetPrimaryItemTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_SingleItemSpawner.TBP_SingleItemSpawner_C.GetPrimaryItemTransform"));

	struct
	{
		struct FTransform              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_SingleItemSpawner.TBP_SingleItemSpawner_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_SingleItemSpawner_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_SingleItemSpawner.TBP_SingleItemSpawner_C.UserConstructionScript"));

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
