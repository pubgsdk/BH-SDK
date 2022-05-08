#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ScoutingFamiliar_Config_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ScoutingFamiliar_Config.TBP_ScoutingFamiliar_Config_C
// 0x0000 (0x01C0 - 0x01C0)
class UTBP_ScoutingFamiliar_Config_C : public UTigerScoutsConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ScoutingFamiliar_Config.TBP_ScoutingFamiliar_Config_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
