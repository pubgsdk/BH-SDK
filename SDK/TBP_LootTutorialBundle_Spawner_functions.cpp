// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_LootTutorialBundle_Spawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_LootTutorialBundle_Spawner.TBP_LootTutorialBundle_Spawner_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_LootTutorialBundle_Spawner_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootTutorialBundle_Spawner.TBP_LootTutorialBundle_Spawner_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootTutorialBundle_Spawner.TBP_LootTutorialBundle_Spawner_C.SpawnItems
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerItemAsset*         InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InItemCount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInSimulatePhysics             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_LootTutorialBundle_Spawner_C::SpawnItems(int Slot, class UTigerItemAsset* InItem, int InItemCount, bool bInSimulatePhysics)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootTutorialBundle_Spawner.TBP_LootTutorialBundle_Spawner_C.SpawnItems"));

	struct
	{
		int                            Slot;
		class UTigerItemAsset*         InItem;
		int                            InItemCount;
		bool                           bInSimulatePhysics;
	} params = {};

	params.Slot = Slot;
	params.InItem = InItem;
	params.InItemCount = InItemCount;
	params.bInSimulatePhysics = bInSimulatePhysics;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootTutorialBundle_Spawner.TBP_LootTutorialBundle_Spawner_C.ExecuteUbergraph_TBP_LootTutorialBundle_Spawner
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_LootTutorialBundle_Spawner_C::ExecuteUbergraph_TBP_LootTutorialBundle_Spawner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootTutorialBundle_Spawner.TBP_LootTutorialBundle_Spawner_C.ExecuteUbergraph_TBP_LootTutorialBundle_Spawner"));

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
