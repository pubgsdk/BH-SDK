#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Stakeout_Part4_BrokenCamera_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Stakeout_Part4_BrokenCamera.TBP_Stakeout_Part4_BrokenCamera_C
// 0x0000 (0x0328 - 0x0328)
class ATBP_Stakeout_Part4_BrokenCamera_C : public ATigerInteractiveItemDropOff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Stakeout_Part4_BrokenCamera.TBP_Stakeout_Part4_BrokenCamera_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
