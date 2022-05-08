#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_DefaultProjectilePoolCountSettings_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_DefaultProjectilePoolCountSettings.TBP_DefaultProjectilePoolCountSettings_C
// 0x0000 (0x0120 - 0x0120)
class UTBP_DefaultProjectilePoolCountSettings_C : public UProjectilePoolReserveCountSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_DefaultProjectilePoolCountSettings.TBP_DefaultProjectilePoolCountSettings_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
