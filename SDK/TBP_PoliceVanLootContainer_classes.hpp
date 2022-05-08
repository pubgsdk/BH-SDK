#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PoliceVanLootContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_PoliceVanLootContainer.TBP_PoliceVanLootContainer_C
// 0x0026 (0x0368 - 0x0342)
class ATBP_PoliceVanLootContainer_C : public ATBP_LootVanBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class URectLightComponent*                         RectLight1;                                               // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class URectLightComponent*                         RectLight;                                                // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_DynamicLootSpawner_C*                    BP_DynamicLootSpawnerArmor;                               // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_PoliceVanLootContainer.TBP_PoliceVanLootContainer_C"));
		return ptr;
	}


	void OnSpawnLoot();
	void ExecuteUbergraph_TBP_PoliceVanLootContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
