#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Challenge_KillMultipleTimed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Challenge_KillMultipleTimed.TBP_Challenge_KillMultipleTimed_C
// 0x0000 (0x0130 - 0x0130)
class UTBP_Challenge_KillMultipleTimed_C : public UTigerChallengeKillMultipleTimed
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Challenge_KillMultipleTimed.TBP_Challenge_KillMultipleTimed_C"));
		return ptr;
	}


	struct FText BuildDescriptionText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
