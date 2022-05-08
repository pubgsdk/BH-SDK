#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BuffPostProcess_BloodBag_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_BuffPostProcess_BloodBag.TBP_BuffPostProcess_BloodBag_C
// 0x0000 (0x0261 - 0x0261)
class ATBP_BuffPostProcess_BloodBag_C : public ATBP_BuffPostProcess_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_BuffPostProcess_BloodBag.TBP_BuffPostProcess_BloodBag_C"));
		return ptr;
	}


	void SetParameters(float NormalizedDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
