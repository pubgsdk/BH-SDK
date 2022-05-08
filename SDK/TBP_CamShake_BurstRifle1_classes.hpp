#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_CamShake_BurstRifle1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_CamShake_BurstRifle1.TBP_CamShake_BurstRifle1_C
// 0x0000 (0x0180 - 0x0180)
class UTBP_CamShake_BurstRifle1_C : public UMatineeCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_CamShake_BurstRifle1.TBP_CamShake_BurstRifle1_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
