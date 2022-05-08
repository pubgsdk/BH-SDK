#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DynamicLootSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DynamicLootSpawner.BP_DynamicLootSpawner_C
// 0x0068 (0x0130 - 0x00C8)
class UBP_DynamicLootSpawner_C : public UTigerBlueprintLootComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	ETigerTelemetryItemSourceID                        LootItemSource;                                           // 0x00D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               SimulatePhysics;                                          // 0x00D1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               RandomizeLocations;                                       // 0x00D2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00D3(0x0001) MISSED OFFSET
	int                                                NumberOfRandomItemsToSpawn;                               // 0x00D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FTransform>                          LootSpawnLocations;                                       // 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FTransform>                          RandomizedLocationsResult;                                // 0x00E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FName                                       ComponentTagFilter;                                       // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_ItemWithProbability>              ItemProbabilities;                                        // 0x0100(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              ProbabilitySum;                                           // 0x0110(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ProbabilitySubtracted;                                    // 0x0114(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               OverrideLootSpawnLocationArray;                           // 0x0118(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	TArray<struct FTransform>                          OverrideArray;                                            // 0x0120(0x0010) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DynamicLootSpawner.BP_DynamicLootSpawner_C"));
		return ptr;
	}


	void On_Spawn_Loot();
	void ReceiveBeginPlay();
	void BreakLoop();
	void Chose_Random_Amount();
	void ExecuteUbergraph_BP_DynamicLootSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
