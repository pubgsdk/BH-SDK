#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_SprintConfig_Elysium_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_SprintConfig_Elysium.TBP_SprintConfig_Elysium_C
// 0x0000 (0x0120 - 0x0120)
class UTBP_SprintConfig_Elysium_C : public UTigerSprintConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_SprintConfig_Elysium.TBP_SprintConfig_Elysium_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
