#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_CharacterCardBG_Royal_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_CharacterCardBG_Royal_01.TBP_CharacterCardBG_Royal_01_C
// 0x0000 (0x0130 - 0x0130)
class UTBP_CharacterCardBG_Royal_01_C : public UTigerCharacterCardBackgroundCustomization
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_CharacterCardBG_Royal_01.TBP_CharacterCardBG_Royal_01_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
