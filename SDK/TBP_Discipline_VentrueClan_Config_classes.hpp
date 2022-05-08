#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Discipline_VentrueClan_Config_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Discipline_VentrueClan_Config.TBP_Discipline_VentrueClan_Config_C
// 0x0000 (0x0188 - 0x0188)
class UTBP_Discipline_VentrueClan_Config_C : public UTigerVentrueClanConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Discipline_VentrueClan_Config.TBP_Discipline_VentrueClan_Config_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
