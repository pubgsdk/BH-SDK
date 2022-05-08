#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_LootBundle_Spawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_LootBundle_Spawner.TBP_LootBundle_Spawner_C
// 0x0038 (0x0268 - 0x0230)
class ATBP_LootBundle_Spawner_C : public ATigerLootBundleSpawner
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        lootglow;                                                 // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        LootbagMesh;                                              // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UChildActorComponent*                        TBP_SingleItemSpawner1;                                   // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UChildActorComponent*                        TBP_SingleItemSpawner;                                    // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UStaticMesh*>                         Bodies;                                                   // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_LootBundle_Spawner.TBP_LootBundle_Spawner_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ToggleUIVisibility();
	void OnAllItemsLooted();
	void ExecuteUbergraph_TBP_LootBundle_Spawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
