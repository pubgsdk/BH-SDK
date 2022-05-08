#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Discipline_VentrueOne_Config_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Discipline_VentrueOne_Config.TBP_Discipline_VentrueOne_Config_C
// 0x0000 (0x01C8 - 0x01C8)
class UTBP_Discipline_VentrueOne_Config_C : public UTigerVentrueOneConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Discipline_VentrueOne_Config.TBP_Discipline_VentrueOne_Config_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
