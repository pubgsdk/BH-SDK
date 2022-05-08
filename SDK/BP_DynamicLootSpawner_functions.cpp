// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DynamicLootSpawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.On Spawn Loot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_DynamicLootSpawner_C::On_Spawn_Loot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.On Spawn Loot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_DynamicLootSpawner_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.BreakLoop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_DynamicLootSpawner_C::BreakLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.BreakLoop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.Chose Random Amount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_DynamicLootSpawner_C::Chose_Random_Amount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.Chose Random Amount"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.ExecuteUbergraph_BP_DynamicLootSpawner
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DynamicLootSpawner_C::ExecuteUbergraph_BP_DynamicLootSpawner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.ExecuteUbergraph_BP_DynamicLootSpawner"));

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
