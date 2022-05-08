#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_CAP_PermanentPhoneTextSmoker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_CAP_PermanentPhoneTextSmoker.TBP_AI_CAP_PermanentPhoneTextSmoker_C
// 0x0000 (0x02C8 - 0x02C8)
class ATBP_AI_CAP_PermanentPhoneTextSmoker_C : public ATBP_AI_PermaCapBpBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_CAP_PermanentPhoneTextSmoker.TBP_AI_CAP_PermanentPhoneTextSmoker_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
