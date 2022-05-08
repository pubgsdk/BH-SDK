#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DA_NearCameraFadeDb_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DA_NearCameraFadeDb.DA_NearCameraFadeDb_C
// 0x0000 (0x00D0 - 0x00D0)
class UDA_NearCameraFadeDb_C : public UTigerNearCameraFadeMaterialDb
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DA_NearCameraFadeDb.DA_NearCameraFadeDb_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
