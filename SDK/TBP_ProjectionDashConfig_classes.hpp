#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ProjectionDashConfig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ProjectionDashConfig.TBP_ProjectionDashConfig_C
// 0x0000 (0x01F0 - 0x01F0)
class UTBP_ProjectionDashConfig_C : public UTigerProjectionDashConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ProjectionDashConfig.TBP_ProjectionDashConfig_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
