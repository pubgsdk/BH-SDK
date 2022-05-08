#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_RangedWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_RangedWeapon.BPI_RangedWeapon_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_RangedWeapon_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPI_RangedWeapon.BPI_RangedWeapon_C"));
		return ptr;
	}


	void GetRangedWeaponCategory(TEnumAsByte<ENUM_RangedWeaponCategories>* RangedWeaponCategory);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
