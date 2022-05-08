#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Stakeout_ScoutLocation_Part2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Stakeout_ScoutLocation_Part2.TBP_Stakeout_ScoutLocation_Part2_C
// 0x0000 (0x0338 - 0x0338)
class ATBP_Stakeout_ScoutLocation_Part2_C : public ATBP_InteractionPoint_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Stakeout_ScoutLocation_Part2.TBP_Stakeout_ScoutLocation_Part2_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
