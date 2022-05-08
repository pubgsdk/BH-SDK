#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_LED_Lamps_01_Data_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LED_Lamps_01_Data.BP_LED_Lamps_01_Data_C
// 0x0000 (0x0078 - 0x0078)
class UBP_LED_Lamps_01_Data_C : public UBP_LightMasterData_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LED_Lamps_01_Data.BP_LED_Lamps_01_Data_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
