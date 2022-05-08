#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_FaceCurvesToAnimation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_FaceCurvesToAnimation.TBP_FaceCurvesToAnimation_C
// 0x0000 (0x00C8 - 0x00C8)
class UTBP_FaceCurvesToAnimation_C : public UTigerFaceCurvesAnimationMap
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_FaceCurvesToAnimation.TBP_FaceCurvesToAnimation_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
