#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_EmoteControllerComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_EmoteControllerComponent.TBP_EmoteControllerComponent_C
// 0x0000 (0x0140 - 0x0140)
class UTBP_EmoteControllerComponent_C : public UTigerEmoteControllerComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_EmoteControllerComponent.TBP_EmoteControllerComponent_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
