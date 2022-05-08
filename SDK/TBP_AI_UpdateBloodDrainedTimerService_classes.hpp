#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_UpdateBloodDrainedTimerService_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_UpdateBloodDrainedTimerService.TBP_AI_UpdateBloodDrainedTimerService_C
// 0x0000 (0x0078 - 0x0078)
class UTBP_AI_UpdateBloodDrainedTimerService_C : public UTigerAIUpdateBloodDrainedService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_UpdateBloodDrainedTimerService.TBP_AI_UpdateBloodDrainedTimerService_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
