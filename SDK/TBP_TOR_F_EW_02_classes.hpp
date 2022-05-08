#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_TOR_F_EW_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_TOR_F_EW_02.TBP_TOR_F_EW_02_C
// 0x0000 (0x0208 - 0x0208)
class UTBP_TOR_F_EW_02_C : public UTBP_EyewearCustomization_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_TOR_F_EW_02.TBP_TOR_F_EW_02_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
