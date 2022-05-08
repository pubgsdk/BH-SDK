#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RejuvenatingVoice_Config_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_RejuvenatingVoice_Config.TBP_RejuvenatingVoice_Config_C
// 0x0000 (0x01D0 - 0x01D0)
class UTBP_RejuvenatingVoice_Config_C : public UTigerRejuvenatingVoiceConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_RejuvenatingVoice_Config.TBP_RejuvenatingVoice_Config_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
