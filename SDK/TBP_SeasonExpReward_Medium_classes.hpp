#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_SeasonExpReward_Medium_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_SeasonExpReward_Medium.TBP_SeasonExpReward_Medium_C
// 0x0000 (0x0110 - 0x0110)
class UTBP_SeasonExpReward_Medium_C : public UTBP_SeasonExpReward_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_SeasonExpReward_Medium.TBP_SeasonExpReward_Medium_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
