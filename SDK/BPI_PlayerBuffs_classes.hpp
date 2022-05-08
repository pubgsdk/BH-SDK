#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_PlayerBuffs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_PlayerBuffs.BPI_PlayerBuffs_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_PlayerBuffs_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPI_PlayerBuffs.BPI_PlayerBuffs_C"));
		return ptr;
	}


	void IncrementFeedingBloodIndex();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
