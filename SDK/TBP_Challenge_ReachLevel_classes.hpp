#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Challenge_ReachLevel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Challenge_ReachLevel.TBP_Challenge_ReachLevel_C
// 0x0000 (0x00E8 - 0x00E8)
class UTBP_Challenge_ReachLevel_C : public UTigerChallengeReachLevel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Challenge_ReachLevel.TBP_Challenge_ReachLevel_C"));
		return ptr;
	}


	struct FText BuildDescriptionText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
