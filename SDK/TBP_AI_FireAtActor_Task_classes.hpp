#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_FireAtActor_Task_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_FireAtActor_Task.TBP_AI_FireAtActor_Task_C
// 0x0000 (0x00E8 - 0x00E8)
class UTBP_AI_FireAtActor_Task_C : public UTigerAIFireAtActorTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_FireAtActor_Task.TBP_AI_FireAtActor_Task_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
