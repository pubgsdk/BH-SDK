#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_VMP_VEN_F_HAIR_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_VMP_VEN_F_HAIR_02.TBP_VMP_VEN_F_HAIR_02_C
// 0x0000 (0x01F8 - 0x01F8)
class UTBP_VMP_VEN_F_HAIR_02_C : public UTBP_HairCustomization_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_VMP_VEN_F_HAIR_02.TBP_VMP_VEN_F_HAIR_02_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
