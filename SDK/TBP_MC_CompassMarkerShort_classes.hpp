#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MC_CompassMarkerShort_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MC_CompassMarkerShort.TBP_MC_CompassMarkerShort_C
// 0x0000 (0x0060 - 0x0060)
class UTBP_MC_CompassMarkerShort_C : public UTigerMasqueradeConsequenceCompassMarker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_MC_CompassMarkerShort.TBP_MC_CompassMarkerShort_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
