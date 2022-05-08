#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ChallengeType_Database_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ChallengeType_Database.TBP_ChallengeType_Database_C
// 0x0000 (0x0080 - 0x0080)
class UTBP_ChallengeType_Database_C : public UTigerChallengeTypeDatabase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ChallengeType_Database.TBP_ChallengeType_Database_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
