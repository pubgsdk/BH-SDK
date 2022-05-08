#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_CharacterCustomizationComp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_CharacterCustomizationComp.TBP_CharacterCustomizationComp_C
// 0x0000 (0x0108 - 0x0108)
class UTBP_CharacterCustomizationComp_C : public UTigerCharCustomizationComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_CharacterCustomizationComp.TBP_CharacterCustomizationComp_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
