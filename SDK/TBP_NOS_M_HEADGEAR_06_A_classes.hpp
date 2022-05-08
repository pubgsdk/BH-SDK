#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_NOS_M_HEADGEAR_06_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_NOS_M_HEADGEAR_06_A.TBP_NOS_M_HEADGEAR_06_A_C
// 0x0000 (0x0218 - 0x0218)
class UTBP_NOS_M_HEADGEAR_06_A_C : public UTBP_Headgear_Customization_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_NOS_M_HEADGEAR_06_A.TBP_NOS_M_HEADGEAR_06_A_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
