#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Emote_TOR_Clap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Emote_TOR_Clap.TBP_Emote_TOR_Clap_C
// 0x0000 (0x0118 - 0x0118)
class UTBP_Emote_TOR_Clap_C : public UTigerCharacterEmoteCustomization
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Emote_TOR_Clap.TBP_Emote_TOR_Clap_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
