#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_HairStyle_NoHair_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_HairStyle_NoHair.TBP_HairStyle_NoHair_C
// 0x0000 (0x01F8 - 0x01F8)
class UTBP_HairStyle_NoHair_C : public UTBP_HairCustomization_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_HairStyle_NoHair.TBP_HairStyle_NoHair_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
