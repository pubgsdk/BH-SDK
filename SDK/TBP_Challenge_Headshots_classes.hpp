#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Challenge_Headshots_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Challenge_Headshots.TBP_Challenge_Headshots_C
// 0x0000 (0x0128 - 0x0128)
class UTBP_Challenge_Headshots_C : public UTigerChallengeHeadshots
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Challenge_Headshots.TBP_Challenge_Headshots_C"));
		return ptr;
	}


	struct FText BuildDescriptionText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
