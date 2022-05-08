#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MC_CompassMarkerSyncInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MC_CompassMarkerSyncInstance.TBP_MC_CompassMarkerSyncInstance_C
// 0x0000 (0x0070 - 0x0070)
class UTBP_MC_CompassMarkerSyncInstance_C : public UTigerMasqueradeConsequenceCompassMarkerSyncInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_MC_CompassMarkerSyncInstance.TBP_MC_CompassMarkerSyncInstance_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
