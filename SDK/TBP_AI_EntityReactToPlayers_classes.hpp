#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_EntityReactToPlayers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_EntityReactToPlayers.TBP_AI_EntityReactToPlayers_C
// 0x0000 (0x00A0 - 0x00A0)
class UTBP_AI_EntityReactToPlayers_C : public UTigerAIEntityReactPlayersService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_EntityReactToPlayers.TBP_AI_EntityReactToPlayers_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
