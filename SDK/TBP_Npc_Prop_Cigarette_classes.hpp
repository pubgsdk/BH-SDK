#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Npc_Prop_Cigarette_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Npc_Prop_Cigarette.TBP_Npc_Prop_Cigarette_C
// 0x0000 (0x0510 - 0x0510)
class UTBP_Npc_Prop_Cigarette_C : public UTigerPropEffectsComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Npc_Prop_Cigarette.TBP_Npc_Prop_Cigarette_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
