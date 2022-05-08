#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_VMP_BRU_M_BEARD_04_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_VMP_BRU_M_BEARD_04.TBP_VMP_BRU_M_BEARD_04_C
// 0x0000 (0x0148 - 0x0148)
class UTBP_VMP_BRU_M_BEARD_04_C : public UTBP_BeardCustomization_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_VMP_BRU_M_BEARD_04.TBP_VMP_BRU_M_BEARD_04_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
