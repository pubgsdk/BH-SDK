#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_NOS_M_PIERCINGS_01_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_NOS_M_PIERCINGS_01_B.TBP_NOS_M_PIERCINGS_01_B_C
// 0x0000 (0x0168 - 0x0168)
class UTBP_NOS_M_PIERCINGS_01_B_C : public UTBP_PiercingSetCustomization_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_NOS_M_PIERCINGS_01_B.TBP_NOS_M_PIERCINGS_01_B_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
