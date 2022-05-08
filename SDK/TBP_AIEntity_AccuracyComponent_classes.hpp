#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AIEntity_AccuracyComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AIEntity_AccuracyComponent.TBP_AIEntity_AccuracyComponent_C
// 0x0000 (0x00F0 - 0x00F0)
class UTBP_AIEntity_AccuracyComponent_C : public UTigerNpcAccuracyComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AIEntity_AccuracyComponent.TBP_AIEntity_AccuracyComponent_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
