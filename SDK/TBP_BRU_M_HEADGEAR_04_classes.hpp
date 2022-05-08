#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BRU_M_HEADGEAR_04_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_BRU_M_HEADGEAR_04.TBP_BRU_M_HEADGEAR_04_C
// 0x0000 (0x0218 - 0x0218)
class UTBP_BRU_M_HEADGEAR_04_C : public UTBP_Headgear_Customization_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_BRU_M_HEADGEAR_04.TBP_BRU_M_HEADGEAR_04_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
