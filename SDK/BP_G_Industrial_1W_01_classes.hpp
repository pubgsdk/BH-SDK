#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_G_Industrial_1W_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_G_Industrial_1W_01.BP_G_Industrial_1W_01_C
// 0x0000 (0x0038 - 0x0038)
class UBP_G_Industrial_1W_01_C : public UTigerBuildingWallPreset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_G_Industrial_1W_01.BP_G_Industrial_1W_01_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
