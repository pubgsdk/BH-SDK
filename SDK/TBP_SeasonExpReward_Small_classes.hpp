#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_SeasonExpReward_Small_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_SeasonExpReward_Small.TBP_SeasonExpReward_Small_C
// 0x0000 (0x0110 - 0x0110)
class UTBP_SeasonExpReward_Small_C : public UTBP_SeasonExpReward_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_SeasonExpReward_Small.TBP_SeasonExpReward_Small_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
