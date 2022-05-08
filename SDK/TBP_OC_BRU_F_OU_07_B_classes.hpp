#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_OC_BRU_F_OU_07_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_OC_BRU_F_OU_07_B.TBP_OC_BRU_F_OU_07_B_C
// 0x0000 (0x02A0 - 0x02A0)
class UTBP_OC_BRU_F_OU_07_B_C : public UTigerCharacterOutfitConfiguration
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_OC_BRU_F_OU_07_B.TBP_OC_BRU_F_OU_07_B_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
