#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_CameraBehavior_Spectate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_CameraBehavior_Spectate.TBP_CameraBehavior_Spectate_C
// 0x0000 (0x0178 - 0x0178)
class UTBP_CameraBehavior_Spectate_C : public UTigerSpectateCameraBehavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_CameraBehavior_Spectate.TBP_CameraBehavior_Spectate_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
