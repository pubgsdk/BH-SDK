#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AIPolice_LootDrop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AIPolice_LootDrop.TBP_AIPolice_LootDrop_C
// 0x0000 (0x00D0 - 0x00D0)
class UTBP_AIPolice_LootDrop_C : public UTigerLootDropComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AIPolice_LootDrop.TBP_AIPolice_LootDrop_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
