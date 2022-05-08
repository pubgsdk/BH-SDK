// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SM_Ely_Brazier_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SM_Ely_Brazier_01.SM_Ely_Brazier_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASM_Ely_Brazier_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SM_Ely_Brazier_01.SM_Ely_Brazier_01_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SM_Ely_Brazier_01.SM_Ely_Brazier_01_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ASM_Ely_Brazier_01_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SM_Ely_Brazier_01.SM_Ely_Brazier_01_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SM_Ely_Brazier_01.SM_Ely_Brazier_01_C.ExecuteUbergraph_SM_Ely_Brazier_01
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASM_Ely_Brazier_01_C::ExecuteUbergraph_SM_Ely_Brazier_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SM_Ely_Brazier_01.SM_Ely_Brazier_01_C.ExecuteUbergraph_SM_Ely_Brazier_01"));

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
