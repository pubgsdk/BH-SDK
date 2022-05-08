#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_LootGroundItem_Spawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_LootGroundItem_Spawner.TBP_LootGroundItem_Spawner_C
// 0x0000 (0x0294 - 0x0294)
class ATBP_LootGroundItem_Spawner_C : public ATBP_SingleItemSpawner_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_LootGroundItem_Spawner.TBP_LootGroundItem_Spawner_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
