#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ChurchAudioSource_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ChurchAudioSource.TBP_ChurchAudioSource_C
// 0x0000 (0x0240 - 0x0240)
class ATBP_ChurchAudioSource_C : public ATBP_GlobalAudioSource_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ChurchAudioSource.TBP_ChurchAudioSource_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
