#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BulletProjectile_Small_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_BulletProjectile_Small.TBP_BulletProjectile_Small_C
// 0x0000 (0x0438 - 0x0438)
class ATBP_BulletProjectile_Small_C : public ATBP_BulletProjectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_BulletProjectile_Small.TBP_BulletProjectile_Small_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
