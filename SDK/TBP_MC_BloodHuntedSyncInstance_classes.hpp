#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MC_BloodHuntedSyncInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MC_BloodHuntedSyncInstance.TBP_MC_BloodHuntedSyncInstance_C
// 0x0000 (0x0080 - 0x0080)
class UTBP_MC_BloodHuntedSyncInstance_C : public UTigerMasqueradeConsequenceBloodHuntedSyncInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_MC_BloodHuntedSyncInstance.TBP_MC_BloodHuntedSyncInstance_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
