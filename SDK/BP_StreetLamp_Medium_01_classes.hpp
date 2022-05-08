#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_StreetLamp_Medium_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_StreetLamp_Medium_01.BP_StreetLamp_Medium_01_C
// 0x0008 (0x0288 - 0x0280)
class ABP_StreetLamp_Medium_01_C : public ABP_LightMaster_C
{
public:
	class UStaticMeshComponent*                        SM_StreetLamp_Medium_01;                                  // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_StreetLamp_Medium_01.BP_StreetLamp_Medium_01_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
