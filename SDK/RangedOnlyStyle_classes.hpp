#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RangedOnlyStyle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RangedOnlyStyle.RangedOnlyStyle_C
// 0x0000 (0x0048 - 0x0048)
class URangedOnlyStyle_C : public UTigerWeaponCycleStyle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass RangedOnlyStyle.RangedOnlyStyle_C"));
		return ptr;
	}


	ETigerWeaponSlot DetermineNextWeaponSlot(class ATigerPlayerController* InPlayerController, ETigerWeaponCycleDirection InDirection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
