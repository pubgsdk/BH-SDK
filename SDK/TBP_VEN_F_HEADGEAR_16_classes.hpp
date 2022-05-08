#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_VEN_F_HEADGEAR_16_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_VEN_F_HEADGEAR_16.TBP_VEN_F_HEADGEAR_15_C
// 0x0000 (0x0218 - 0x0218)
class UTBP_VEN_F_HEADGEAR_15_C : public UTBP_Headgear_Customization_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_VEN_F_HEADGEAR_16.TBP_VEN_F_HEADGEAR_15_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
