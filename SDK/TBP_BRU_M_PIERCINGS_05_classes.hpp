#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BRU_M_PIERCINGS_05_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_BRU_M_PIERCINGS_05.TBP_BRU_M_PIERCINGS_05_C
// 0x0000 (0x0168 - 0x0168)
class UTBP_BRU_M_PIERCINGS_05_C : public UTBP_PiercingSetCustomization_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_BRU_M_PIERCINGS_05.TBP_BRU_M_PIERCINGS_05_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
