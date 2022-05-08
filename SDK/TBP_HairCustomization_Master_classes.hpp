#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_HairCustomization_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_HairCustomization_Master.TBP_HairCustomization_Master_C
// 0x0000 (0x01F8 - 0x01F8)
class UTBP_HairCustomization_Master_C : public UTigerCharacterHairStyleCustomization
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_HairCustomization_Master.TBP_HairCustomization_Master_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
