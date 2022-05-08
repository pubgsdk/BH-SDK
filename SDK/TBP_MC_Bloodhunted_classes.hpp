#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MC_Bloodhunted_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MC_Bloodhunted.TBP_MC_BloodHunted_C
// 0x0000 (0x0068 - 0x0068)
class UTBP_MC_BloodHunted_C : public UTigerMasqueradeConsequenceBloodHunted
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_MC_Bloodhunted.TBP_MC_BloodHunted_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
