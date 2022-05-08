#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_CharacterCustomizations_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_CharacterCustomizations.TBP_CharacterCustomizations_C
// 0x0000 (0x03A0 - 0x03A0)
class UTBP_CharacterCustomizations_C : public UTigerClanCustomizationOptions
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_CharacterCustomizations.TBP_CharacterCustomizations_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
