#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_Command_CA_UseATM_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_Command_CA_UseATM.TBP_AI_Command_CA_UseATM_C
// 0x0000 (0x0080 - 0x0080)
class UTBP_AI_Command_CA_UseATM_C : public UTigerAICommandContextualAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_Command_CA_UseATM.TBP_AI_Command_CA_UseATM_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
