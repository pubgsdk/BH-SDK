#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Gamepad_Aiming_Config_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Gamepad_Aiming_Config.TBP_Gamepad_Aiming_Config_C
// 0x0000 (0x0128 - 0x0128)
class UTBP_Gamepad_Aiming_Config_C : public UTigerAimingCameraBehavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Gamepad_Aiming_Config.TBP_Gamepad_Aiming_Config_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
