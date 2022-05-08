#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_SeasonRankSkip_2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_SeasonRankSkip_2.TBP_SeasonRankSkip_1_C
// 0x0000 (0x0110 - 0x0110)
class UTBP_SeasonRankSkip_1_C : public UTigerSeasonRankSkip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_SeasonRankSkip_2.TBP_SeasonRankSkip_1_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
