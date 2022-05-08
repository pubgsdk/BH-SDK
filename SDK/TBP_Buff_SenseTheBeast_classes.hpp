#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Buff_SenseTheBeast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Buff_SenseTheBeast.TBP_Buff_SenseTheBeast_C
// 0x0000 (0x0260 - 0x0260)
class UTBP_Buff_SenseTheBeast_C : public UTigerTrackedBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Buff_SenseTheBeast.TBP_Buff_SenseTheBeast_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
