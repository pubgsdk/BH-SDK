#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UnseenPresenceBuff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_UnseenPresenceBuff.TBP_UnseenPresenceBuff_C
// 0x0000 (0x0278 - 0x0278)
class UTBP_UnseenPresenceBuff_C : public UTigerBuffUnseenPresence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_UnseenPresenceBuff.TBP_UnseenPresenceBuff_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
