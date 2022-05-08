#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Traversal_AirDash_Config_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Traversal_AirDash_Config.TBP_Traversal_AirDash_Config_C
// 0x0000 (0x0068 - 0x0068)
class UTBP_Traversal_AirDash_Config_C : public UTigerTraversalStateAirDashConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Traversal_AirDash_Config.TBP_Traversal_AirDash_Config_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
