#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Buff_BurstHeal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Buff_BurstHeal.TBP_Buff_BurstHeal_C
// 0x0000 (0x026C - 0x026C)
class UTBP_Buff_BurstHeal_C : public UTBP_Buff_Heal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Buff_BurstHeal.TBP_Buff_BurstHeal_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
