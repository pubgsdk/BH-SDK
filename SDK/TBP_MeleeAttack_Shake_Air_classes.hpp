#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MeleeAttack_Shake_Air_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MeleeAttack_Shake_Air.TBP_MeleeAttack_Shake_Air_C
// 0x0000 (0x0180 - 0x0180)
class UTBP_MeleeAttack_Shake_Air_C : public UMatineeCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_MeleeAttack_Shake_Air.TBP_MeleeAttack_Shake_Air_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
