#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Collectible_GS_Part4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Collectible_GS_Part4.TBP_Collectible_GS_Part4_C
// 0x0000 (0x02BC - 0x02BC)
class ATBP_Collectible_GS_Part4_C : public ATBP_Collectible_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Collectible_GS_Part4.TBP_Collectible_GS_Part4_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
