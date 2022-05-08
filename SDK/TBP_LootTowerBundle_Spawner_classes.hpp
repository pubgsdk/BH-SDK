#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_LootTowerBundle_Spawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_LootTowerBundle_Spawner.TBP_LootTowerBundle_Spawner_C
// 0x0008 (0x0270 - 0x0268)
class ATBP_LootTowerBundle_Spawner_C : public ATBP_LootBundle_Spawner_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_LootTowerBundle_Spawner.TBP_LootTowerBundle_Spawner_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_LootTowerBundle_Spawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
