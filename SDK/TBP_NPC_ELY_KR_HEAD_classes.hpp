#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_NPC_ELY_KR_HEAD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_NPC_ELY_KR_HEAD.TBP_NPC_ELY_KR_HEAD_C
// 0x0000 (0x0348 - 0x0348)
class UTBP_NPC_ELY_KR_HEAD_C : public UTBP_HeadConfiguration_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_NPC_ELY_KR_HEAD.TBP_NPC_ELY_KR_HEAD_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
