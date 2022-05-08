// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_LootBundle_Spawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_LootBundle_Spawner.TBP_LootBundle_Spawner_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_LootBundle_Spawner_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootBundle_Spawner.TBP_LootBundle_Spawner_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootBundle_Spawner.TBP_LootBundle_Spawner_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_LootBundle_Spawner_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootBundle_Spawner.TBP_LootBundle_Spawner_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootBundle_Spawner.TBP_LootBundle_Spawner_C.ToggleUIVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_LootBundle_Spawner_C::ToggleUIVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootBundle_Spawner.TBP_LootBundle_Spawner_C.ToggleUIVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootBundle_Spawner.TBP_LootBundle_Spawner_C.OnAllItemsLooted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_LootBundle_Spawner_C::OnAllItemsLooted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootBundle_Spawner.TBP_LootBundle_Spawner_C.OnAllItemsLooted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootBundle_Spawner.TBP_LootBundle_Spawner_C.ExecuteUbergraph_TBP_LootBundle_Spawner
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_LootBundle_Spawner_C::ExecuteUbergraph_TBP_LootBundle_Spawner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootBundle_Spawner.TBP_LootBundle_Spawner_C.ExecuteUbergraph_TBP_LootBundle_Spawner"));

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
