#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AimAssist_Ranged_Sniper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AimAssist_Ranged_Sniper.TBP_AimAssist_Ranged_Sniper_C
// 0x0000 (0x0200 - 0x0200)
class UTBP_AimAssist_Ranged_Sniper_C : public UTBP_AimAssist_Ranged_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AimAssist_Ranged_Sniper.TBP_AimAssist_Ranged_Sniper_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
