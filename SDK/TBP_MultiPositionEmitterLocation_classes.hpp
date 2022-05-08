#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MultiPositionEmitterLocation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MultiPositionEmitterLocation.TBP_MultiPositionEmitterLocation_C
// 0x0000 (0x0200 - 0x0200)
class UTBP_MultiPositionEmitterLocation_C : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_MultiPositionEmitterLocation.TBP_MultiPositionEmitterLocation_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
