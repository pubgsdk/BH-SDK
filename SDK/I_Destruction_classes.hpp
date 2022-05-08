#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "I_Destruction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass I_Destruction.I_Destruction_C
// 0x0000 (0x0028 - 0x0028)
class UI_Destruction_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass I_Destruction.I_Destruction_C"));
		return ptr;
	}


	void TriggerAlarm();
	void StaticMeshComponentHit(const struct FHitResult& HitResult, const struct FVector& ImpactVelocity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
