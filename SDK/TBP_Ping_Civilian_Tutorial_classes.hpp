#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Ping_Civilian_Tutorial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Ping_Civilian_Tutorial.TBP_Ping_Civilian_Tutorial_C
// 0x0000 (0x0170 - 0x0170)
class UTBP_Ping_Civilian_Tutorial_C : public UTBP_Ping_Civilian_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Ping_Civilian_Tutorial.TBP_Ping_Civilian_Tutorial_C"));
		return ptr;
	}


	void GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
